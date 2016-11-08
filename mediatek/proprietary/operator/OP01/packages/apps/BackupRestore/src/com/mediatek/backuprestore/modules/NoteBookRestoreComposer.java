/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

package com.mediatek.backuprestore.modules;

import android.content.ContentValues;
import android.content.Context;
import android.net.Uri;

import com.mediatek.backuprestore.utils.BackupZip;
import com.mediatek.backuprestore.utils.Constants;
import com.mediatek.backuprestore.utils.Constants.ModulePath;
import com.mediatek.backuprestore.utils.ModuleType;
import com.mediatek.backuprestore.utils.MyLogger;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.Reader;
import java.util.ArrayList;

/**
 * Describe class <code>NoteBookRestoreComposer</code> here.
 *
 * @author
 * @version 1.0
 */
public class NoteBookRestoreComposer extends Composer {
    private static final String CLASS_TAG = MyLogger.LOG_TAG + "/NoteBookBackupComposer";
    private Uri mUri = Uri.parse(Constants.URI_NOTEBOOK);
    private int mIdx;
    private ArrayList<NoteBookXmlInfo> mRecordList;
    private Reader mReader;
    private String mDesFile;

    /**
     * Creates a new <code>NoteBookRestoreComposer</code> instance.
     *
     * @param context
     *            a <code>Context</code> value
     */
    public NoteBookRestoreComposer(Context context) {
        super(context);
    }

    /**
     * Describe <code>getCount</code> method here.
     *
     * @return an <code>int</code> value
     */
    public int getCount() {
        int count = 0;
        if (mRecordList != null) {
            count = mRecordList.size();
        }
        MyLogger.logD(CLASS_TAG, "getCount():" + count);
        return count;
    }

    /**
     * Describe <code>getModuleType</code> method here.
     *
     * @return an <code>int</code> value
     */
    public int getModuleType() {
        return ModuleType.TYPE_NOTEBOOK;
    }

    /**
     * Describe <code>init</code> method here.
     *
     * @return a <code>boolean</code> value
     */
    public boolean init() {
        boolean result = false;
        File file = null;
        if (mParentFolderPath != null) {
            file = new File(mParentFolderPath + File.separator + ModulePath.FOLDER_NOTEBOOK
                    + File.separator + ModulePath.NOTEBOOK_XML);
        } else {
            File path = new File(mZipFileName);
            mDesFile = path.getParent() + File.separator + "notebook.xml";
            try {
                BackupZip.unZipFile(mZipFileName, "notebook/notebook.xml", mDesFile);
                file = new File(mDesFile);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        if (file != null) {
            try {
                mReader = new BufferedReader(new InputStreamReader(new FileInputStream(file)));
                mRecordList = NoteBookXmlParser.parse(mReader);
            } catch (FileNotFoundException e) {
                mRecordList = new ArrayList<NoteBookXmlInfo>();
                e.printStackTrace();
            } finally {
                try {
                    mReader.close();
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
        } else {
            mRecordList = new ArrayList<NoteBookXmlInfo>();
        }
        result = true;
        MyLogger.logD(CLASS_TAG, "init():" + result + ",count:" + mRecordList.size());
        return result;
    }

    /**
     * Describe <code>isAfterLast</code> method here.
     *
     * @return a <code>boolean</code> value
     */
    public boolean isAfterLast() {
        boolean result = true;

        if (mRecordList != null) {
            result = (mIdx >= mRecordList.size()) ? true : false;
        }

        MyLogger.logD(CLASS_TAG, "isAfterLast():" + result);
        return result;
    }

    /**
     * Describe <code>implementComposeOneEntity</code> method here.
     *
     * @return a <code>boolean</code> value
     */
    protected boolean implementComposeOneEntity() {
        boolean result = false;
        if (!isAfterLast()) {
            NoteBookXmlInfo record = mRecordList.get(mIdx++);
            ContentValues v = new ContentValues();
            v.put(NoteBookXmlInfo.TITLE, record.getTitle());
            v.put(NoteBookXmlInfo.NOTE, record.getNote());
            v.put(NoteBookXmlInfo.CREATED, record.getCreated());
            v.put(NoteBookXmlInfo.MODIFIED, record.getModified());
            v.put(NoteBookXmlInfo.NOTEGROUP, record.getNoteGroup());

            try {
                Uri tmpUri = mContext.getContentResolver().insert(mUri, v);
                MyLogger.logD(CLASS_TAG, "tmpUri:" + tmpUri);
                result = true;
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        MyLogger.logD(CLASS_TAG, MyLogger.NOTEBOOK_TAG + "implementComposeOneEntity():" + result);
        return result;
    }

    /**
     * Describe <code>deleteAllNoteBook</code> method here.
     *
     */
    private void deleteAllNoteBook() {
        try {
            mContext.getContentResolver().delete(mUri, null, null);
        } catch (IllegalArgumentException e) {
            e.printStackTrace();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /**
     * Describe <code>onStart</code> method here.
     *
     */
    public void onStart() {
        super.onStart();
        if (super.checkedCommand()) {
            deleteAllNoteBook();
        }
    }

    public boolean onEnd() {
        super.onEnd();
        if (mReader != null) {
            try {
                mReader.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        // delete file
        if (mDesFile != null) {
            File tempFile = new File(mDesFile);
            if (tempFile.exists()) {
                MyLogger.logD(CLASS_TAG,
                        MyLogger.NOTEBOOK_TAG + "delete tempFile :" + tempFile.toString());
                tempFile.delete();
            }
        }
        return true;
    }

}
