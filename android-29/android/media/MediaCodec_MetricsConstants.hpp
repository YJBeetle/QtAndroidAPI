#pragma once

#include "../../JString.hpp"
#include "./MediaCodec_MetricsConstants.def.hpp"

namespace android::media
{
	// Fields
	inline JString MediaCodec_MetricsConstants::CODEC()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"CODEC",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec_MetricsConstants::ENCODER()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ENCODER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec_MetricsConstants::HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec_MetricsConstants::MIME_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec_MetricsConstants::MODE()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec_MetricsConstants::MODE_AUDIO()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_AUDIO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec_MetricsConstants::MODE_VIDEO()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_VIDEO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec_MetricsConstants::ROTATION()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ROTATION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec_MetricsConstants::SECURE()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"SECURE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec_MetricsConstants::WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

