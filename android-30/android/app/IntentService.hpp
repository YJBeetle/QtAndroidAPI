#pragma once

#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "./IntentService.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline IntentService::IntentService(JString arg0)
		: android::app::Service(
			"android.app.IntentService",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JObject IntentService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void IntentService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void IntentService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void IntentService::onStart(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jint IntentService::onStartCommand(android::content::Intent arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void IntentService::setIntentRedelivery(jboolean arg0) const
	{
		callMethod<void>(
			"setIntentRedelivery",
			"(Z)V",
			arg0
		);
	}
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "./Service.hpp"

