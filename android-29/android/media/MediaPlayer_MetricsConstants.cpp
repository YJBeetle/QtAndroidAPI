#include "./MediaPlayer_MetricsConstants.hpp"

namespace android::media
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
	
	// QAndroidJniObject forward
	MediaPlayer_MetricsConstants::MediaPlayer_MetricsConstants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

