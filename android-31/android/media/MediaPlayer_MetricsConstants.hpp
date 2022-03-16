#pragma once

#include "../../JString.hpp"
#include "./MediaPlayer_MetricsConstants.def.hpp"

namespace android::media
{
	// Fields
	inline JString MediaPlayer_MetricsConstants::CODEC_AUDIO()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"CODEC_AUDIO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::CODEC_VIDEO()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"CODEC_VIDEO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::DURATION()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"DURATION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::ERRORS()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"ERRORS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::ERROR_CODE()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"ERROR_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::FRAMES()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"FRAMES",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::FRAMES_DROPPED()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"FRAMES_DROPPED",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::MIME_TYPE_AUDIO()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"MIME_TYPE_AUDIO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::MIME_TYPE_VIDEO()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"MIME_TYPE_VIDEO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::PLAYING()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"PLAYING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaPlayer_MetricsConstants::WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

