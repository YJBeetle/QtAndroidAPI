#pragma once

#include "./SetValueRequest.def.hpp"
#include "./SettingsPreferenceValue.def.hpp"
#include "../../../../JString.hpp"
#include "./SetValueRequest_Builder.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	
	// Constructors
	inline SetValueRequest_Builder::SetValueRequest_Builder(JString arg0, JString arg1, android::service::settings::preferences::SettingsPreferenceValue arg2)
		: JObject(
			"android.service.settings.preferences.SetValueRequest$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/service/settings/preferences/SettingsPreferenceValue;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline android::service::settings::preferences::SetValueRequest SetValueRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/settings/preferences/SetValueRequest;"
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
