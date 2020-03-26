#pragma once

#ifndef ANDROID_DRM_DRMSTORE_ACTION
#define ANDROID_DRM_DRMSTORE_ACTION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmStore_Action : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFAULT();
		static jint DISPLAY();
		static jint EXECUTE();
		static jint OUTPUT();
		static jint PLAY();
		static jint PREVIEW();
		static jint RINGTONE();
		static jint TRANSFER();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	jint DrmStore_Action::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"DEFAULT"
		);
	}
	jint DrmStore_Action::DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"DISPLAY"
		);
	}
	jint DrmStore_Action::EXECUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"EXECUTE"
		);
	}
	jint DrmStore_Action::OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"OUTPUT"
		);
	}
	jint DrmStore_Action::PLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"PLAY"
		);
	}
	jint DrmStore_Action::PREVIEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"PREVIEW"
		);
	}
	jint DrmStore_Action::RINGTONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"RINGTONE"
		);
	}
	jint DrmStore_Action::TRANSFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Action",
			"TRANSFER"
		);
	}
	
	// Constructors
	void DrmStore_Action::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmStore$Action",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmStore_Action : public __jni_impl::android::drm::DrmStore_Action
	{
	public:
		DrmStore_Action(QAndroidJniObject obj) { __thiz = obj; }
		DrmStore_Action()
		{
			__constructor();
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMSTORE_ACTION

