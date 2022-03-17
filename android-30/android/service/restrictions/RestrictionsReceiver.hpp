#pragma once

#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./RestrictionsReceiver.def.hpp"

namespace android::service::restrictions
{
	// Fields
	
	// Constructors
	inline RestrictionsReceiver::RestrictionsReceiver()
		: android::content::BroadcastReceiver(
			"android.service.restrictions.RestrictionsReceiver",
			"()V"
		) {}
	
	// Methods
	inline void RestrictionsReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RestrictionsReceiver::onRequestPermission(android::content::Context arg0, JString arg1, JString arg2, JString arg3, android::os::PersistableBundle arg4) const
	{
		callMethod<void>(
			"onRequestPermission",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object()
		);
	}
} // namespace android::service::restrictions

// Base class headers
#include "../../content/BroadcastReceiver.hpp"

