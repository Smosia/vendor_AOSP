#!/bin/bash

# Author: MTK81226

FEATURE_OPTION_JAR=mediatek-common.jar
FEATURE_OPTION_JAR_PATH=./system_libs/$FEATURE_OPTION_JAR
FEATURE_OPTION_CLASS_PATH=com/mediatek/common/featureoption/FeatureOption.class
TEMP_PATH=./temp
FUMO_SRC_PATHS="src/com/mediatek/mediatekdm/mdm/fumo:src/com/medaitek/mediatekdm/fumo"
SCOMO_SRC_PATHS="src/com/mediatek/mediatekdm/mdm/scomo:src/com/medaitek/mediatekdm/scomo"
LAWMO_SRC_PATHS="src/com/mediatek/mediatekdm/mdm/lawmo:src/com/medaitek/mediatekdm/lawmo"

if [[ ${EXCLUDE_FUMO+x} != x ]] ; then
    TEST_FUMO=true
    EXCLUDE_FUMO="true"
else
    TEST_FUMO=false
fi

if [[ ${EXCLUDE_SCOMO+x} != x ]] ; then
    TEST_SCOMO=true
    EXCLUDE_SCOMO="true"
else
    TEST_SCOMO=false
fi

if [[ ${EXCLUDE_LAWMO+x} != x ]] ; then
    TEST_LAWMO=true
    EXCLUDE_LAWMO="true"
else
    TEST_LAWMO=false
fi

# Check required files.
if [ ! -f $FEATURE_OPTION_JAR_PATH ] ; then
    echo Cannot find mediatek-common.jar under system_libs! Please run Ant_Config.pl first.
    exit -1
fi

# Check feature options from system_libs/mediatek-common.jar
rm -rf $TEMP_PATH
mkdir -p $TEMP_PATH
cp $FEATURE_OPTION_JAR_PATH $TEMP_PATH/
cd $TEMP_PATH
# Extract FeatureOption.class from jar
jar xf $FEATURE_OPTION_JAR $FEATURE_OPTION_CLASS_PATH
javap -verbose -public com.mediatek.common.featureoption.FeatureOption | while read LINE
do
    if [[ TEST_FUMO = true ]] ; then
        echo $LINE | grep "boolean *MTK_MDM_FUMO" 1>/dev/null
        if [ $? -eq "0" ] ; then
            read LINE
            echo $LINE
            echo $LINE | grep "int *1" 1>/dev/null
            if [ $? -eq "0" ] ; then
                EXCLUDE_FUMO="false"
            fi
            continue
        fi
    fi
    if [[ TEST_SCOMO = true ]] ; then
        echo $LINE | grep "boolean *MTK_MDM_SCOMO" 1>/dev/null
        if [ $? -eq "0" ] ; then
            read LINE
            echo $LINE
            echo $LINE | grep "int *1" 1>/dev/null
            if [ $? -eq "0" ] ; then
                EXCLUDE_SCOMO="false"
            fi
            continue
        fi
    fi
    if [[ TEST_LAWMO = true ]] ; then
        echo $LINE | grep "boolean *MTK_MDM_LAWMO" 1>/dev/null
        if [ $? -eq "0" ] ; then
            read LINE
            echo $LINE
            echo $LINE | grep "int *1" 1>/dev/null
            if [ $? -eq "0" ] ; then
                EXCLUDE_LAWMO="false"
            fi
            continue
        fi
    fi
done
    
echo EXCLUDE_FUMO is $EXCLUDE_FUMO
echo EXCLUDE_SCOMO is $EXCLUDE_SCOMO
echo EXCLUDE_LAWMO is $EXCLUDE_LAWMO

cd ..

# Specify source.dir in command line to override the invalid value in ant.properties (which is generated by Ant_Config.pl with errors)
# Temporary work around to update changes.
ant -f mediatekdm_build.xml -D\"source.dir=src\" clean
ant -f mediatekdm_build.xml -D\"EXCLUDE_FUMO=${EXCLUDE_FUMO}\" -D\"EXCLUDE_SCOMO=${EXCLUDE_SCOMO}\" -D\"EXCLUDE_LAWMO=${EXCLUDE_LAWMO}\" -D\"source.dir=src\" $1

