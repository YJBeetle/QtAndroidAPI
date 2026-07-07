#pragma once

#include "./MediaRouter2_ScanRequest.def.hpp"
#include "./MediaRouter2_ScanRequest_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaRouter2_ScanRequest_Builder::MediaRouter2_ScanRequest_Builder()
		: JObject(
			"android.media.MediaRouter2$ScanRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::MediaRouter2_ScanRequest MediaRouter2_ScanRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaRouter2$ScanRequest;"
		);
	}
	inline android::media::MediaRouter2_ScanRequest_Builder MediaRouter2_ScanRequest_Builder::setScreenOffScan(jboolean arg0) const
	{
		return callObjectMethod(
			"setScreenOffScan",
			"(Z)Landroid/media/MediaRouter2$ScanRequest$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
