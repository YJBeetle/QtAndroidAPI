#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../../JString.hpp"
#include "./VrListenerService.def.hpp"

namespace android::service::vr
{
	// Fields
	inline JString VrListenerService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.vr.VrListenerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline VrListenerService::VrListenerService()
		: android::app::Service(
			"android.service.vr.VrListenerService",
			"()V"
		) {}
	
	// Methods
	inline jboolean VrListenerService::isVrModePackageEnabled(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return callStaticMethod<jboolean>(
			"android.service.vr.VrListenerService",
			"isVrModePackageEnabled",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject VrListenerService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void VrListenerService::onCurrentVrActivityChanged(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"onCurrentVrActivityChanged",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
} // namespace android::service::vr

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

