#pragma once

#include "../../../content/Intent.def.hpp"
#include "./GetValueRequest.def.hpp"
#include "./MetadataRequest.def.hpp"
#include "./SetValueRequest.def.hpp"
#include "../../../../JString.hpp"
#include "./SettingsPreferenceService.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	inline JString SettingsPreferenceService::ACTION_PREFERENCE_SERVICE()
	{
		return getStaticObjectField(
			"android.service.settings.preferences.SettingsPreferenceService",
			"ACTION_PREFERENCE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SettingsPreferenceService::SettingsPreferenceService()
		: android::app::Service(
			"android.service.settings.preferences.SettingsPreferenceService",
			"()V"
		) {}
	
	// Methods
	inline JObject SettingsPreferenceService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void SettingsPreferenceService::onGetAllPreferenceMetadata(android::service::settings::preferences::MetadataRequest arg0, JObject arg1) const
	{
		callMethod<void>(
			"onGetAllPreferenceMetadata",
			"(Landroid/service/settings/preferences/MetadataRequest;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SettingsPreferenceService::onGetPreferenceValue(android::service::settings::preferences::GetValueRequest arg0, JObject arg1) const
	{
		callMethod<void>(
			"onGetPreferenceValue",
			"(Landroid/service/settings/preferences/GetValueRequest;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SettingsPreferenceService::onSetPreferenceValue(android::service::settings::preferences::SetValueRequest arg0, JObject arg1) const
	{
		callMethod<void>(
			"onSetPreferenceValue",
			"(Landroid/service/settings/preferences/SetValueRequest;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::service::settings::preferences

// Base class headers
#include "../../../content/Context.hpp"
#include "../../../content/ContextWrapper.hpp"
#include "../../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
