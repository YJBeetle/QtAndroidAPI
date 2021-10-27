#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaActionSound : public __JniBaseClass
	{
	public:
		// Fields
		static jint FOCUS_COMPLETE();
		static jint SHUTTER_CLICK();
		static jint START_VIDEO_RECORDING();
		static jint STOP_VIDEO_RECORDING();
		
		// Constructors
		void __constructor();
		
		// Methods
		void load(jint arg0);
		void play(jint arg0);
		void release();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint MediaActionSound::FOCUS_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaActionSound",
			"FOCUS_COMPLETE"
		);
	}
	jint MediaActionSound::SHUTTER_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaActionSound",
			"SHUTTER_CLICK"
		);
	}
	jint MediaActionSound::START_VIDEO_RECORDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaActionSound",
			"START_VIDEO_RECORDING"
		);
	}
	jint MediaActionSound::STOP_VIDEO_RECORDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaActionSound",
			"STOP_VIDEO_RECORDING"
		);
	}
	
	// Constructors
	void MediaActionSound::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaActionSound",
			"()V"
		);
	}
	
	// Methods
	void MediaActionSound::load(jint arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(I)V",
			arg0
		);
	}
	void MediaActionSound::play(jint arg0)
	{
		__thiz.callMethod<void>(
			"play",
			"(I)V",
			arg0
		);
	}
	void MediaActionSound::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaActionSound : public __jni_impl::android::media::MediaActionSound
	{
	public:
		MediaActionSound(QAndroidJniObject obj) { __thiz = obj; }
		MediaActionSound()
		{
			__constructor();
		}
	};
} // namespace android::media

