#pragma once

#ifndef ANDROID_DRM_DRMSTORE_PLAYBACK
#define ANDROID_DRM_DRMSTORE_PLAYBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmStore_Playback : public __JniBaseClass
	{
	public:
		// Fields
		static jint PAUSE();
		static jint RESUME();
		static jint START();
		static jint STOP();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	jint DrmStore_Playback::PAUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"PAUSE"
		);
	}
	jint DrmStore_Playback::RESUME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"RESUME"
		);
	}
	jint DrmStore_Playback::START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"START"
		);
	}
	jint DrmStore_Playback::STOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"STOP"
		);
	}
	
	// Constructors
	void DrmStore_Playback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmStore$Playback",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmStore_Playback : public __jni_impl::android::drm::DrmStore_Playback
	{
	public:
		DrmStore_Playback(QAndroidJniObject obj) { __thiz = obj; }
		DrmStore_Playback()
		{
			__constructor();
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMSTORE_PLAYBACK

