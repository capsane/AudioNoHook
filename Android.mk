LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

# LOCAL_STATIC_JAVA_LIBRARIES := android-support-v7 android-support-v4


LOCAL_SRC_FILES := \
        $(call all-java-files-under, src)

LOCAL_PACKAGE_NAME := AudioNoHook

LOCAL_RESOURCE_DIR := \
        $(LOCAL_PATH)/res

LOCAL_JNI_SHARED_LIBRARIES := libmyjni

LOCAL_REQUIRED_MODULES := libmyjni

################################################

# LOCAL_JNI_SHARED_LIBRARIES := libnative-lib

# LOCAL_REQUIRED_MODULES := libnative-lib

# LOCAL_PROGUARD_ENABLED := disabled

include $(BUILD_PACKAGE)


#################################################

include $(CLEAR_VARS)

# LOCAL_PREBUILT_STATIC_JAVA_LIBRARIES := android-support-v7:libs/android-support-v7-appcompat.jar \
#                                         android-support-v4:libs/android-support-v4.jar


include $(BUILD_MULTI_PREBUILT)

include $(call all-makefiles-under,$(LOCAL_PATH))
