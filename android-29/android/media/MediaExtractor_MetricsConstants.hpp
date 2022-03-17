#pragma once

#include "../../JString.hpp"
#include "./MediaExtractor_MetricsConstants.def.hpp"

namespace android::media
{
	// Fields
	inline JString MediaExtractor_MetricsConstants::FORMAT()
	{
		return getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"FORMAT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaExtractor_MetricsConstants::MIME_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaExtractor_MetricsConstants::TRACKS()
	{
		return getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"TRACKS",
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
