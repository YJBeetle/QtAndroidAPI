#pragma once

#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "./SettingInjectorService.def.hpp"

namespace android::location
{
	// Fields
	inline JString SettingInjectorService::ACTION_INJECTED_SETTING_CHANGED()
	{
		return getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_INJECTED_SETTING_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString SettingInjectorService::ACTION_SERVICE_INTENT()
	{
		return getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_SERVICE_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString SettingInjectorService::ATTRIBUTES_NAME()
	{
		return getStaticObjectField(
			"android.location.SettingInjectorService",
			"ATTRIBUTES_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString SettingInjectorService::META_DATA_NAME()
	{
		return getStaticObjectField(
			"android.location.SettingInjectorService",
			"META_DATA_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SettingInjectorService::SettingInjectorService(JString arg0)
		: android::app::Service(
			"android.location.SettingInjectorService",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline void SettingInjectorService::refreshSettings(android::content::Context arg0)
	{
		callStaticMethod<void>(
			"android.location.SettingInjectorService",
			"refreshSettings",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	inline JObject SettingInjectorService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void SettingInjectorService::onStart(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jint SettingInjectorService::onStartCommand(android::content::Intent arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::location

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
