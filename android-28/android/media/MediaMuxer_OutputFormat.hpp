#pragma once

#include "./MediaMuxer_OutputFormat.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaMuxer_OutputFormat::MUXER_OUTPUT_3GPP()
	{
		return getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_3GPP"
		);
	}
	inline jint MediaMuxer_OutputFormat::MUXER_OUTPUT_HEIF()
	{
		return getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_HEIF"
		);
	}
	inline jint MediaMuxer_OutputFormat::MUXER_OUTPUT_MPEG_4()
	{
		return getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_MPEG_4"
		);
	}
	inline jint MediaMuxer_OutputFormat::MUXER_OUTPUT_WEBM()
	{
		return getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_WEBM"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

