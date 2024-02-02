#pragma once

#include "./PolicyUpdateResult.def.hpp"
#include "./TargetUser.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./PolicyUpdateReceiver.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JString PolicyUpdateReceiver::ACTION_DEVICE_POLICY_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.PolicyUpdateReceiver",
			"ACTION_DEVICE_POLICY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString PolicyUpdateReceiver::ACTION_DEVICE_POLICY_SET_RESULT()
	{
		return getStaticObjectField(
			"android.app.admin.PolicyUpdateReceiver",
			"ACTION_DEVICE_POLICY_SET_RESULT",
			"Ljava/lang/String;"
		);
	}
	inline JString PolicyUpdateReceiver::EXTRA_ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.app.admin.PolicyUpdateReceiver",
			"EXTRA_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString PolicyUpdateReceiver::EXTRA_INTENT_FILTER()
	{
		return getStaticObjectField(
			"android.app.admin.PolicyUpdateReceiver",
			"EXTRA_INTENT_FILTER",
			"Ljava/lang/String;"
		);
	}
	inline JString PolicyUpdateReceiver::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.app.admin.PolicyUpdateReceiver",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString PolicyUpdateReceiver::EXTRA_PERMISSION_NAME()
	{
		return getStaticObjectField(
			"android.app.admin.PolicyUpdateReceiver",
			"EXTRA_PERMISSION_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline PolicyUpdateReceiver::PolicyUpdateReceiver()
		: android::content::BroadcastReceiver(
			"android.app.admin.PolicyUpdateReceiver",
			"()V"
		) {}
	
	// Methods
	inline void PolicyUpdateReceiver::onPolicyChanged(android::content::Context arg0, JString arg1, android::os::Bundle arg2, android::app::admin::TargetUser arg3, android::app::admin::PolicyUpdateResult arg4) const
	{
		callMethod<void>(
			"onPolicyChanged",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/admin/TargetUser;Landroid/app/admin/PolicyUpdateResult;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void PolicyUpdateReceiver::onPolicySetResult(android::content::Context arg0, JString arg1, android::os::Bundle arg2, android::app::admin::TargetUser arg3, android::app::admin::PolicyUpdateResult arg4) const
	{
		callMethod<void>(
			"onPolicySetResult",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/admin/TargetUser;Landroid/app/admin/PolicyUpdateResult;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void PolicyUpdateReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1) const
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
