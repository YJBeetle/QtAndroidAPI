#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaRecorder_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUDIO_BITRATE();
		static jstring AUDIO_CHANNELS();
		static jstring AUDIO_SAMPLERATE();
		static jstring AUDIO_TIMESCALE();
		static jstring CAPTURE_FPS();
		static jstring CAPTURE_FPS_ENABLE();
		static jstring FRAMERATE();
		static jstring HEIGHT();
		static jstring MOVIE_TIMESCALE();
		static jstring ROTATION();
		static jstring VIDEO_BITRATE();
		static jstring VIDEO_IFRAME_INTERVAL();
		static jstring VIDEO_LEVEL();
		static jstring VIDEO_PROFILE();
		static jstring VIDEO_TIMESCALE();
		static jstring WIDTH();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jstring MediaRecorder_MetricsConstants::AUDIO_BITRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_BITRATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::AUDIO_CHANNELS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_CHANNELS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::AUDIO_SAMPLERATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_SAMPLERATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::AUDIO_TIMESCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_TIMESCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::CAPTURE_FPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"CAPTURE_FPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::CAPTURE_FPS_ENABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"CAPTURE_FPS_ENABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::FRAMERATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"FRAMERATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::MOVIE_TIMESCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"MOVIE_TIMESCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"ROTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_BITRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_BITRATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_IFRAME_INTERVAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_IFRAME_INTERVAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_TIMESCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_TIMESCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaRecorder_MetricsConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRecorder$MetricsConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRecorder_MetricsConstants : public __jni_impl::android::media::MediaRecorder_MetricsConstants
	{
	public:
		MediaRecorder_MetricsConstants(QAndroidJniObject obj) { __thiz = obj; }
		MediaRecorder_MetricsConstants()
		{
			__constructor();
		}
	};
} // namespace android::media

