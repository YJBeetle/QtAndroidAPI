#pragma once

#include "../../JString.hpp"
#include "./AudioRecord_MetricsConstants.def.hpp"

namespace android::media
{
	// Fields
	inline JString AudioRecord_MetricsConstants::CHANNELS()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"CHANNELS",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioRecord_MetricsConstants::ENCODING()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"ENCODING",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioRecord_MetricsConstants::LATENCY()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"LATENCY",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioRecord_MetricsConstants::SAMPLERATE()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SAMPLERATE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioRecord_MetricsConstants::SOURCE()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SOURCE",
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
