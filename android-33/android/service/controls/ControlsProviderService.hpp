#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "./Control.def.hpp"
#include "./actions/ControlAction.def.hpp"
#include "../../../JString.hpp"
#include "./ControlsProviderService.def.hpp"

namespace android::service::controls
{
	// Fields
	inline JString ControlsProviderService::SERVICE_CONTROLS()
	{
		return getStaticObjectField(
			"android.service.controls.ControlsProviderService",
			"SERVICE_CONTROLS",
			"Ljava/lang/String;"
		);
	}
	inline JString ControlsProviderService::TAG()
	{
		return getStaticObjectField(
			"android.service.controls.ControlsProviderService",
			"TAG",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ControlsProviderService::ControlsProviderService()
		: android::app::Service(
			"android.service.controls.ControlsProviderService",
			"()V"
		) {}
	
	// Methods
	inline void ControlsProviderService::requestAddControl(android::content::Context arg0, android::content::ComponentName arg1, android::service::controls::Control arg2)
	{
		callStaticMethod<void>(
			"android.service.controls.ControlsProviderService",
			"requestAddControl",
			"(Landroid/content/Context;Landroid/content/ComponentName;Landroid/service/controls/Control;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject ControlsProviderService::createPublisherFor(JObject arg0) const
	{
		return callObjectMethod(
			"createPublisherFor",
			"(Ljava/util/List;)Ljava/util/concurrent/Flow$Publisher;",
			arg0.object()
		);
	}
	inline JObject ControlsProviderService::createPublisherForAllAvailable() const
	{
		return callObjectMethod(
			"createPublisherForAllAvailable",
			"()Ljava/util/concurrent/Flow$Publisher;"
		);
	}
	inline JObject ControlsProviderService::createPublisherForSuggested() const
	{
		return callObjectMethod(
			"createPublisherForSuggested",
			"()Ljava/util/concurrent/Flow$Publisher;"
		);
	}
	inline JObject ControlsProviderService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline jboolean ControlsProviderService::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline void ControlsProviderService::performControlAction(JString arg0, android::service::controls::actions::ControlAction arg1, JObject arg2) const
	{
		callMethod<void>(
			"performControlAction",
			"(Ljava/lang/String;Landroid/service/controls/actions/ControlAction;Ljava/util/function/Consumer;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::service::controls

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::controls;
#endif
