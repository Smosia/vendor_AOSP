/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.android.quicksearchbox;

import android.app.SearchManager;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;

/**
 * Listens for broadcasts that require updates to the corpus set.
 */
public class CorporaUpdateReceiver extends BroadcastReceiver {

    private static final boolean DBG = false;
    private static final String TAG = "QSB.CorporaUpdateReceiver";

    @Override
    public void onReceive(Context context, Intent intent) {
        String action = intent.getAction();
        if (SearchManager.INTENT_ACTION_SEARCHABLES_CHANGED.equals(action)
                || SearchManager.INTENT_ACTION_SEARCH_SETTINGS_CHANGED.equals(action)) {
            if (DBG) Log.d(TAG, "onReceive(" + intent + ")");
            updateCorpora(context);
            SearchWidgetProvider.updateSearchWidgets(context);
        }
    }

    private void updateCorpora(Context context) {
        QsbApplication.get(context).updateCorpora();
    }

}
