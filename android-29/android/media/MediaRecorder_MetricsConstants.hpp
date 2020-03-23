#pragma once

#ifndef ANDROID_MEDIA_MEDIARECORDER_METRICSCONSTANTS
#define ANDROID_MEDIA_MEDIARECORDER_METRICSCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaRecorder_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AUDIO_BITRATE();
		static QAndroidJniObject AUDIO_CHANNELS();
		static QAndroidJniObject AUDIO_SAMPLERATE();
		static QAndroidJniObject AUDIO_TIMESCALE();
		static QAndroidJniObject CAPTURE_FPS();
		static QAndroidJniObject CAPTURE_FPS_ENABLE();
		static QAndroidJniObject FRAMERATE();
		static QAndroidJniObject HEIGHT();
		static QAndroidJniObject MOVIE_TIMESCALE();
		static QAndroidJniObject ROTATION();
		static QAndroidJniObject VIDEO_BITRATE();
		static QAndroidJniObject VIDEO_IFRAME_INTERVAL();
		static QAndroidJniObject VIDEO_LEVEL();
		static QAndroidJniObject VIDEO_PROFILE();
		static QAndroidJniObject VIDEO_TIMESCALE();
		static QAndroidJniObject WIDTH();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject MediaRecorder_MetricsConstants::AUDIO_BITRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_BITRATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::AUDIO_CHANNELS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_CHANNELS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::AUDIO_SAMPLERATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_SAMPLERATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::AUDIO_TIMESCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_TIMESCALE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::CAPTURE_FPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"CAPTURE_FPS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::CAPTURE_FPS_ENABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"CAPTURE_FPS_ENABLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::FRAMERATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"FRAMERATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::MOVIE_TIMESCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"MOVIE_TIMESCALE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"ROTATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::VIDEO_BITRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_BITRATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::VIDEO_IFRAME_INTERVAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_IFRAME_INTERVAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::VIDEO_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_LEVEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::VIDEO_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_PROFILE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::VIDEO_TIMESCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_TIMESCALE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaRecorder_MetricsConstants::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;");
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

#endif // ANDROID_MEDIA_MEDIARECORDER_METRICSCONSTANTS

