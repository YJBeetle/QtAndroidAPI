#pragma once

#include "../../JString.hpp"
#include "./AudioTrack_MetricsConstants.def.hpp"

namespace android::media
{
	// Fields
	inline JString AudioTrack_MetricsConstants::CHANNELMASK()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"CHANNELMASK",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioTrack_MetricsConstants::CONTENTTYPE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"CONTENTTYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioTrack_MetricsConstants::SAMPLERATE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"SAMPLERATE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioTrack_MetricsConstants::STREAMTYPE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"STREAMTYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioTrack_MetricsConstants::USAGE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"USAGE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

