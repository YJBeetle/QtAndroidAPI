#pragma once

#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JString.hpp"
#include "./DelegatedAdminReceiver.def.hpp"

namespace android::app::admin
{
	// Fields
	
	// Constructors
	inline DelegatedAdminReceiver::DelegatedAdminReceiver()
		: android::content::BroadcastReceiver(
			"android.app.admin.DelegatedAdminReceiver",
			"()V"
		) {}
	
	// Methods
	inline JString DelegatedAdminReceiver::onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, JString arg4) const
	{
		return callObjectMethod(
			"onChoosePrivateKeyAlias",
			"(Landroid/content/Context;Landroid/content/Intent;ILandroid/net/Uri;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object<jstring>()
		);
	}
	inline void DelegatedAdminReceiver::onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3) const
	{
		callMethod<void>(
			"onNetworkLogsAvailable",
			"(Landroid/content/Context;Landroid/content/Intent;JI)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline void DelegatedAdminReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app::admin

// Base class headers
#include "../../content/BroadcastReceiver.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
