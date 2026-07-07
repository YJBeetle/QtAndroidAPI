#pragma once

#include "../../../JString.hpp"
#include "./MediaQualityContract.def.hpp"

namespace android::media::quality
{
	// Fields
	inline JString MediaQualityContract::LEVEL_HIGH()
	{
		return getStaticObjectField(
			"android.media.quality.MediaQualityContract",
			"LEVEL_HIGH",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaQualityContract::LEVEL_LOW()
	{
		return getStaticObjectField(
			"android.media.quality.MediaQualityContract",
			"LEVEL_LOW",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaQualityContract::LEVEL_MEDIUM()
	{
		return getStaticObjectField(
			"android.media.quality.MediaQualityContract",
			"LEVEL_MEDIUM",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaQualityContract::LEVEL_OFF()
	{
		return getStaticObjectField(
			"android.media.quality.MediaQualityContract",
			"LEVEL_OFF",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
