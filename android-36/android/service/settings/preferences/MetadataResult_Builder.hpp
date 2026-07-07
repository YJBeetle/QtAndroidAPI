#pragma once

#include "./MetadataResult.def.hpp"
#include "./MetadataResult_Builder.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	
	// Constructors
	inline MetadataResult_Builder::MetadataResult_Builder(jint arg0)
		: JObject(
			"android.service.settings.preferences.MetadataResult$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::service::settings::preferences::MetadataResult MetadataResult_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/settings/preferences/MetadataResult;"
		);
	}
	inline android::service::settings::preferences::MetadataResult_Builder MetadataResult_Builder::setMetadataList(JObject arg0) const
	{
		return callObjectMethod(
			"setMetadataList",
			"(Ljava/util/List;)Landroid/service/settings/preferences/MetadataResult$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
