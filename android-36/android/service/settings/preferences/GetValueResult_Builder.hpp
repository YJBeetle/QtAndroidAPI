#pragma once

#include "./GetValueResult.def.hpp"
#include "./SettingsPreferenceMetadata.def.hpp"
#include "./SettingsPreferenceValue.def.hpp"
#include "./GetValueResult_Builder.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	
	// Constructors
	inline GetValueResult_Builder::GetValueResult_Builder(jint arg0)
		: JObject(
			"android.service.settings.preferences.GetValueResult$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::service::settings::preferences::GetValueResult GetValueResult_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/settings/preferences/GetValueResult;"
		);
	}
	inline android::service::settings::preferences::GetValueResult_Builder GetValueResult_Builder::setMetadata(android::service::settings::preferences::SettingsPreferenceMetadata arg0) const
	{
		return callObjectMethod(
			"setMetadata",
			"(Landroid/service/settings/preferences/SettingsPreferenceMetadata;)Landroid/service/settings/preferences/GetValueResult$Builder;",
			arg0.object()
		);
	}
	inline android::service::settings::preferences::GetValueResult_Builder GetValueResult_Builder::setValue(android::service::settings::preferences::SettingsPreferenceValue arg0) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/service/settings/preferences/SettingsPreferenceValue;)Landroid/service/settings/preferences/GetValueResult$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
