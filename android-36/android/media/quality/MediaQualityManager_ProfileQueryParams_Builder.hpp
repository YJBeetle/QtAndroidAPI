#pragma once

#include "./MediaQualityManager_ProfileQueryParams.def.hpp"
#include "./MediaQualityManager_ProfileQueryParams_Builder.def.hpp"

namespace android::media::quality
{
	// Fields
	
	// Constructors
	inline MediaQualityManager_ProfileQueryParams_Builder::MediaQualityManager_ProfileQueryParams_Builder()
		: JObject(
			"android.media.quality.MediaQualityManager$ProfileQueryParams$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::quality::MediaQualityManager_ProfileQueryParams MediaQualityManager_ProfileQueryParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/quality/MediaQualityManager$ProfileQueryParams;"
		);
	}
	inline android::media::quality::MediaQualityManager_ProfileQueryParams_Builder MediaQualityManager_ProfileQueryParams_Builder::setParametersIncluded(jboolean arg0) const
	{
		return callObjectMethod(
			"setParametersIncluded",
			"(Z)Landroid/media/quality/MediaQualityManager$ProfileQueryParams$Builder;",
			arg0
		);
	}
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
