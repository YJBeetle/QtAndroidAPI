#pragma once

#ifndef ANDROID_DRM_DRMERROREVENT
#define ANDROID_DRM_DRMERROREVENT

#include "DrmEvent.hpp"

namespace __jni_impl::java::util
{
	class HashMap;
}

namespace __jni_impl::android::drm
{
	class DrmErrorEvent : public __jni_impl::android::drm::DrmEvent
	{
	public:
		// Fields
		static jint TYPE_ACQUIRE_DRM_INFO_FAILED();
		static jint TYPE_NOT_SUPPORTED();
		static jint TYPE_NO_INTERNET_CONNECTION();
		static jint TYPE_OUT_OF_MEMORY();
		static jint TYPE_PROCESS_DRM_INFO_FAILED();
		static jint TYPE_REMOVE_ALL_RIGHTS_FAILED();
		static jint TYPE_RIGHTS_NOT_INSTALLED();
		static jint TYPE_RIGHTS_RENEWAL_NOT_ALLOWED();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jstring arg2);
		void __constructor(jint arg0, jint arg1, jstring arg2, __jni_impl::java::util::HashMap arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::drm

#include "../../java/util/HashMap.hpp"

namespace __jni_impl::android::drm
{
	// Fields
	jint DrmErrorEvent::TYPE_ACQUIRE_DRM_INFO_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_ACQUIRE_DRM_INFO_FAILED");
	}
	jint DrmErrorEvent::TYPE_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_NOT_SUPPORTED");
	}
	jint DrmErrorEvent::TYPE_NO_INTERNET_CONNECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_NO_INTERNET_CONNECTION");
	}
	jint DrmErrorEvent::TYPE_OUT_OF_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_OUT_OF_MEMORY");
	}
	jint DrmErrorEvent::TYPE_PROCESS_DRM_INFO_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_PROCESS_DRM_INFO_FAILED");
	}
	jint DrmErrorEvent::TYPE_REMOVE_ALL_RIGHTS_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_REMOVE_ALL_RIGHTS_FAILED");
	}
	jint DrmErrorEvent::TYPE_RIGHTS_NOT_INSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_RIGHTS_NOT_INSTALLED");
	}
	jint DrmErrorEvent::TYPE_RIGHTS_RENEWAL_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_RIGHTS_RENEWAL_NOT_ALLOWED");
	}
	
	// Constructors
	void DrmErrorEvent::__constructor(jint arg0, jint arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmErrorEvent",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void DrmErrorEvent::__constructor(jint arg0, jint arg1, jstring arg2, __jni_impl::java::util::HashMap arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmErrorEvent",
			"(IILjava/lang/String;Ljava/util/HashMap;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmErrorEvent : public __jni_impl::android::drm::DrmErrorEvent
	{
	public:
		DrmErrorEvent(QAndroidJniObject obj) { __thiz = obj; }
		DrmErrorEvent(jint arg0, jint arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DrmErrorEvent(jint arg0, jint arg1, jstring arg2, __jni_impl::java::util::HashMap arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMERROREVENT

