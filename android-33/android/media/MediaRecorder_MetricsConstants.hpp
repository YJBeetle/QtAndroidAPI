#pragma once

#include "../../JString.hpp"
#include "./MediaRecorder_MetricsConstants.def.hpp"

namespace android::media
{
	// Fields
	inline JString MediaRecorder_MetricsConstants::AUDIO_BITRATE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_BITRATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::AUDIO_CHANNELS()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_CHANNELS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::AUDIO_SAMPLERATE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_SAMPLERATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::AUDIO_TIMESCALE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"AUDIO_TIMESCALE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::CAPTURE_FPS()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"CAPTURE_FPS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::CAPTURE_FPS_ENABLE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"CAPTURE_FPS_ENABLE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::FRAMERATE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"FRAMERATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::MOVIE_TIMESCALE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"MOVIE_TIMESCALE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::ROTATION()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"ROTATION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::VIDEO_BITRATE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_BITRATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::VIDEO_IFRAME_INTERVAL()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_IFRAME_INTERVAL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::VIDEO_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_LEVEL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::VIDEO_PROFILE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_PROFILE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::VIDEO_TIMESCALE()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"VIDEO_TIMESCALE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRecorder_MetricsConstants::WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaRecorder$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
