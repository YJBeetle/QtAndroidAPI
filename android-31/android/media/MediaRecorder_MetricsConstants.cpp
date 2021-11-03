#include "./MediaRecorder_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	jstring MediaRecorder_MetricsConstants::AUDIO_BITRATE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_BITRATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::AUDIO_CHANNELS()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_CHANNELS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::AUDIO_SAMPLERATE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_SAMPLERATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::AUDIO_TIMESCALE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_TIMESCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::CAPTURE_FPS()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"CAPTURE_FPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::CAPTURE_FPS_ENABLE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"CAPTURE_FPS_ENABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::FRAMERATE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"FRAMERATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::MOVIE_TIMESCALE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"MOVIE_TIMESCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::ROTATION()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"ROTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_BITRATE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_BITRATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_IFRAME_INTERVAL()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_IFRAME_INTERVAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_PROFILE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::VIDEO_TIMESCALE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_TIMESCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRecorder_MetricsConstants::WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	MediaRecorder_MetricsConstants::MediaRecorder_MetricsConstants(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

