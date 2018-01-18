LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
    Addjni.c

LOCAL_C_INCLUDES += \
    $(JNI_H_INCLUDE) \

# LOCAL_SHARED_LIBRARIES := \
#     libandroid_runtime \
#     libnativehelper \
#     libcutils \
#     libutils \
#     libhardware

#LOCAL_CFLAGS += -O0 -g

LOCAL_MODULE := libmyjni
LOCAL_MODULE_TAGS := optional

include $(BUILD_SHARED_LIBRARY)
