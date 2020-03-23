#pragma once

#ifndef ANDROID_DRM_DRMINFOEVENT
#define ANDROID_DRM_DRMINFOEVENT

#include "DrmEvent.hpp"

namespace __jni_impl::java::util
{
	class HashMap;
}

namespace __jni_impl::android::drm
{
	class DrmInfoEvent : public __jni_impl::android::drm::DrmEvent
	{
	public:
		// Fields
		static jint TYPE_ACCOUNT_ALREADY_REGISTERED();
		static jint TYPE_ALREADY_REGISTERED_BY_ANOTHER_ACCOUNT();
		static jint TYPE_REMOVE_RIGHTS();
		static jint TYPE_RIGHTS_INSTALLED();
		static jint TYPE_RIGHTS_REMOVED();
		static jint TYPE_WAIT_FOR_RIGHTS();
		
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
	jint DrmInfoEvent::TYPE_ACCOUNT_ALREADY_REGISTERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_ACCOUNT_ALREADY_REGISTERED");
	}
	jint DrmInfoEvent::TYPE_ALREADY_REGISTERED_BY_ANOTHER_ACCOUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_ALREADY_REGISTERED_BY_ANOTHER_ACCOUNT");
	}
	jint DrmInfoEvent::TYPE_REMOVE_RIGHTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_REMOVE_RIGHTS");
	}
	jint DrmInfoEvent::TYPE_RIGHTS_INSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_RIGHTS_INSTALLED");
	}
	jint DrmInfoEvent::TYPE_RIGHTS_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_RIGHTS_REMOVED");
	}
	jint DrmInfoEvent::TYPE_WAIT_FOR_RIGHTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_WAIT_FOR_RIGHTS");
	}
	
	// Constructors
	void DrmInfoEvent::__constructor(jint arg0, jint arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfoEvent",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void DrmInfoEvent::__constructor(jint arg0, jint arg1, jstring arg2, __jni_impl::java::util::HashMap arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfoEvent",
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
	class DrmInfoEvent : public __jni_impl::android::drm::DrmInfoEvent
	{
	public:
		DrmInfoEvent(QAndroidJniObject obj) { __thiz = obj; }
		DrmInfoEvent(jint arg0, jint arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DrmInfoEvent(jint arg0, jint arg1, jstring arg2, __jni_impl::java::util::HashMap arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMINFOEVENT

