#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaPlayer_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CODEC_AUDIO();
		static jstring CODEC_VIDEO();
		static jstring DURATION();
		static jstring ERRORS();
		static jstring ERROR_CODE();
		static jstring FRAMES();
		static jstring FRAMES_DROPPED();
		static jstring HEIGHT();
		static jstring MIME_TYPE_AUDIO();
		static jstring MIME_TYPE_VIDEO();
		static jstring PLAYING();
		static jstring WIDTH();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jstring MediaPlayer_MetricsConstants::CODEC_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"CODEC_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::CODEC_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"CODEC_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::ERRORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"ERRORS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::ERROR_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"ERROR_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::FRAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"FRAMES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::FRAMES_DROPPED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"FRAMES_DROPPED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::MIME_TYPE_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"MIME_TYPE_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::MIME_TYPE_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"MIME_TYPE_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::PLAYING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"PLAYING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_MetricsConstants::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaPlayer_MetricsConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$MetricsConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaPlayer_MetricsConstants : public __jni_impl::android::media::MediaPlayer_MetricsConstants
	{
	public:
		MediaPlayer_MetricsConstants(QAndroidJniObject obj) { __thiz = obj; }
		MediaPlayer_MetricsConstants()
		{
			__constructor();
		}
	};
} // namespace android::media

