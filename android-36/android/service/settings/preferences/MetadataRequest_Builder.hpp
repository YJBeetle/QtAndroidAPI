#pragma once

#include "./MetadataRequest.def.hpp"
#include "./MetadataRequest_Builder.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	
	// Constructors
	inline MetadataRequest_Builder::MetadataRequest_Builder()
		: JObject(
			"android.service.settings.preferences.MetadataRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::service::settings::preferences::MetadataRequest MetadataRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/settings/preferences/MetadataRequest;"
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
