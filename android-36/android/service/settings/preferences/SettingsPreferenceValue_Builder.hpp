#pragma once

#include "./SettingsPreferenceValue.def.hpp"
#include "../../../../JString.hpp"
#include "./SettingsPreferenceValue_Builder.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	
	// Constructors
	inline SettingsPreferenceValue_Builder::SettingsPreferenceValue_Builder(jint arg0)
		: JObject(
			"android.service.settings.preferences.SettingsPreferenceValue$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::service::settings::preferences::SettingsPreferenceValue SettingsPreferenceValue_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/settings/preferences/SettingsPreferenceValue;"
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceValue_Builder SettingsPreferenceValue_Builder::setBooleanValue(jboolean arg0) const
	{
		return callObjectMethod(
			"setBooleanValue",
			"(Z)Landroid/service/settings/preferences/SettingsPreferenceValue$Builder;",
			arg0
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceValue_Builder SettingsPreferenceValue_Builder::setDoubleValue(jdouble arg0) const
	{
		return callObjectMethod(
			"setDoubleValue",
			"(D)Landroid/service/settings/preferences/SettingsPreferenceValue$Builder;",
			arg0
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceValue_Builder SettingsPreferenceValue_Builder::setIntValue(jint arg0) const
	{
		return callObjectMethod(
			"setIntValue",
			"(I)Landroid/service/settings/preferences/SettingsPreferenceValue$Builder;",
			arg0
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceValue_Builder SettingsPreferenceValue_Builder::setLongValue(jlong arg0) const
	{
		return callObjectMethod(
			"setLongValue",
			"(J)Landroid/service/settings/preferences/SettingsPreferenceValue$Builder;",
			arg0
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceValue_Builder SettingsPreferenceValue_Builder::setStringValue(JString arg0) const
	{
		return callObjectMethod(
			"setStringValue",
			"(Ljava/lang/String;)Landroid/service/settings/preferences/SettingsPreferenceValue$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
