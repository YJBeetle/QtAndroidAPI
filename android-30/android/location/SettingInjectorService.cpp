#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../../JString.hpp"
#include "./SettingInjectorService.hpp"

namespace android::location
{
	// Fields
	JString SettingInjectorService::ACTION_INJECTED_SETTING_CHANGED()
	{
		return getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_INJECTED_SETTING_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString SettingInjectorService::ACTION_SERVICE_INTENT()
	{
		return getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_SERVICE_INTENT",
			"Ljava/lang/String;"
		);
	}
	JString SettingInjectorService::ATTRIBUTES_NAME()
	{
		return getStaticObjectField(
			"android.location.SettingInjectorService",
			"ATTRIBUTES_NAME",
			"Ljava/lang/String;"
		);
	}
	JString SettingInjectorService::META_DATA_NAME()
	{
		return getStaticObjectField(
			"android.location.SettingInjectorService",
			"META_DATA_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	SettingInjectorService::SettingInjectorService(JString arg0)
		: android::app::Service(
			"android.location.SettingInjectorService",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void SettingInjectorService::refreshSettings(android::content::Context arg0)
	{
		callStaticMethod<void>(
			"android.location.SettingInjectorService",
			"refreshSettings",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	JObject SettingInjectorService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void SettingInjectorService::onStart(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	jint SettingInjectorService::onStartCommand(android::content::Intent arg0, jint arg1, jint arg2) const
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

