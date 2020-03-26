#pragma once

#ifndef ANDROID_MEDIA_MEDIARECORDER_AUDIOENCODER
#define ANDROID_MEDIA_MEDIARECORDER_AUDIOENCODER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaRecorder;
}

namespace __jni_impl::android::media
{
	class MediaRecorder_AudioEncoder : public __JniBaseClass
	{
	public:
		// Fields
		static jint AAC();
		static jint AAC_ELD();
		static jint AMR_NB();
		static jint AMR_WB();
		static jint DEFAULT();
		static jint HE_AAC();
		static jint OPUS();
		static jint VORBIS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media

#include "MediaRecorder.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaRecorder_AudioEncoder::AAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AAC"
		);
	}
	jint MediaRecorder_AudioEncoder::AAC_ELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AAC_ELD"
		);
	}
	jint MediaRecorder_AudioEncoder::AMR_NB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AMR_NB"
		);
	}
	jint MediaRecorder_AudioEncoder::AMR_WB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AMR_WB"
		);
	}
	jint MediaRecorder_AudioEncoder::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"DEFAULT"
		);
	}
	jint MediaRecorder_AudioEncoder::HE_AAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"HE_AAC"
		);
	}
	jint MediaRecorder_AudioEncoder::OPUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"OPUS"
		);
	}
	jint MediaRecorder_AudioEncoder::VORBIS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"VORBIS"
		);
	}
	
	// Constructors
	void MediaRecorder_AudioEncoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRecorder$AudioEncoder",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRecorder_AudioEncoder : public __jni_impl::android::media::MediaRecorder_AudioEncoder
	{
	public:
		MediaRecorder_AudioEncoder(QAndroidJniObject obj) { __thiz = obj; }
		MediaRecorder_AudioEncoder()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIARECORDER_AUDIOENCODER

