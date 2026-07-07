#pragma once

#include "../../../content/Context.def.hpp"
#include "./GetValueRequest.def.hpp"
#include "./MetadataRequest.def.hpp"
#include "./SetValueRequest.def.hpp"
#include "../../../../JString.hpp"
#include "./SettingsPreferenceServiceClient.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	
	// Constructors
	inline SettingsPreferenceServiceClient::SettingsPreferenceServiceClient(android::content::Context arg0, JString arg1, JObject arg2, JObject arg3)
		: JObject(
			"android.service.settings.preferences.SettingsPreferenceServiceClient",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline void SettingsPreferenceServiceClient::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void SettingsPreferenceServiceClient::getAllPreferenceMetadata(android::service::settings::preferences::MetadataRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getAllPreferenceMetadata",
			"(Landroid/service/settings/preferences/MetadataRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void SettingsPreferenceServiceClient::getPreferenceValue(android::service::settings::preferences::GetValueRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getPreferenceValue",
			"(Landroid/service/settings/preferences/GetValueRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void SettingsPreferenceServiceClient::setPreferenceValue(android::service::settings::preferences::SetValueRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"setPreferenceValue",
			"(Landroid/service/settings/preferences/SetValueRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
