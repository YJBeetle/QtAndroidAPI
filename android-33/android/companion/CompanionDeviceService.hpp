#pragma once

#include "./AssociationInfo.def.hpp"
#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "./CompanionDeviceService.def.hpp"

namespace android::companion
{
	// Fields
	inline JString CompanionDeviceService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.companion.CompanionDeviceService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CompanionDeviceService::CompanionDeviceService()
		: android::app::Service(
			"android.companion.CompanionDeviceService",
			"()V"
		) {}
	
	// Methods
	inline JObject CompanionDeviceService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void CompanionDeviceService::onDeviceAppeared(android::companion::AssociationInfo arg0) const
	{
		callMethod<void>(
			"onDeviceAppeared",
			"(Landroid/companion/AssociationInfo;)V",
			arg0.object()
		);
	}
	inline void CompanionDeviceService::onDeviceAppeared(JString arg0) const
	{
		callMethod<void>(
			"onDeviceAppeared",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void CompanionDeviceService::onDeviceDisappeared(android::companion::AssociationInfo arg0) const
	{
		callMethod<void>(
			"onDeviceDisappeared",
			"(Landroid/companion/AssociationInfo;)V",
			arg0.object()
		);
	}
	inline void CompanionDeviceService::onDeviceDisappeared(JString arg0) const
	{
		callMethod<void>(
			"onDeviceDisappeared",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::companion

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
