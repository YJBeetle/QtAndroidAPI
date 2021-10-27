#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaRecorder;
}

namespace __jni_impl::android::media
{
	class MediaRecorder_AudioSource : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAMCORDER();
		static jint DEFAULT();
		static jint MIC();
		static jint REMOTE_SUBMIX();
		static jint UNPROCESSED();
		static jint VOICE_CALL();
		static jint VOICE_COMMUNICATION();
		static jint VOICE_DOWNLINK();
		static jint VOICE_PERFORMANCE();
		static jint VOICE_RECOGNITION();
		static jint VOICE_UPLINK();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media

#include "./MediaRecorder.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaRecorder_AudioSource::CAMCORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"CAMCORDER"
		);
	}
	jint MediaRecorder_AudioSource::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"DEFAULT"
		);
	}
	jint MediaRecorder_AudioSource::MIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"MIC"
		);
	}
	jint MediaRecorder_AudioSource::REMOTE_SUBMIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"REMOTE_SUBMIX"
		);
	}
	jint MediaRecorder_AudioSource::UNPROCESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"UNPROCESSED"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_CALL"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_COMMUNICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_COMMUNICATION"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_DOWNLINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_DOWNLINK"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_PERFORMANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_PERFORMANCE"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_RECOGNITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_RECOGNITION"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_UPLINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_UPLINK"
		);
	}
	
	// Constructors
	void MediaRecorder_AudioSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRecorder$AudioSource",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRecorder_AudioSource : public __jni_impl::android::media::MediaRecorder_AudioSource
	{
	public:
		MediaRecorder_AudioSource(QAndroidJniObject obj) { __thiz = obj; }
		MediaRecorder_AudioSource()
		{
			__constructor();
		}
	};
} // namespace android::media

