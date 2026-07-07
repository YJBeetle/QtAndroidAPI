#pragma once

#include "./SetValueResult.def.hpp"
#include "./SetValueResult_Builder.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	
	// Constructors
	inline SetValueResult_Builder::SetValueResult_Builder(jint arg0)
		: JObject(
			"android.service.settings.preferences.SetValueResult$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::service::settings::preferences::SetValueResult SetValueResult_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/settings/preferences/SetValueResult;"
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
