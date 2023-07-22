#pragma once

#include "../../JString.hpp"
#include "./MediaFeature_HdrType.def.hpp"

namespace android::media
{
	// Fields
	inline JString MediaFeature_HdrType::DOLBY_VISION()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"DOLBY_VISION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFeature_HdrType::HDR10()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"HDR10",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFeature_HdrType::HDR10_PLUS()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"HDR10_PLUS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFeature_HdrType::HLG()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"HLG",
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
