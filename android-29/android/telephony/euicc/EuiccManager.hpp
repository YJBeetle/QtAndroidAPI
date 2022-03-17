#pragma once

#include "../../app/Activity.def.hpp"
#include "../../app/PendingIntent.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "./DownloadableSubscription.def.hpp"
#include "./EuiccInfo.def.hpp"
#include "../../../JString.hpp"
#include "./EuiccManager.def.hpp"

namespace android::telephony::euicc
{
	// Fields
	inline JString EuiccManager::ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE",
			"Ljava/lang/String;"
		);
	}
	inline jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_ERROR"
		);
	}
	inline jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_OK()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_OK"
		);
	}
	inline jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR"
		);
	}
	inline JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString EuiccManager::META_DATA_CARRIER_ICON()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"META_DATA_CARRIER_ICON",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telephony::euicc::EuiccManager EuiccManager::createForCardId(jint arg0) const
	{
		return callObjectMethod(
			"createForCardId",
			"(I)Landroid/telephony/euicc/EuiccManager;",
			arg0
		);
	}
	inline void EuiccManager::deleteSubscription(jint arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"deleteSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void EuiccManager::downloadSubscription(android::telephony::euicc::DownloadableSubscription arg0, jboolean arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"downloadSubscription",
			"(Landroid/telephony/euicc/DownloadableSubscription;ZLandroid/app/PendingIntent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JString EuiccManager::getEid() const
	{
		return callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		);
	}
	inline android::telephony::euicc::EuiccInfo EuiccManager::getEuiccInfo() const
	{
		return callObjectMethod(
			"getEuiccInfo",
			"()Landroid/telephony/euicc/EuiccInfo;"
		);
	}
	inline jboolean EuiccManager::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline void EuiccManager::startResolutionActivity(android::app::Activity arg0, jint arg1, android::content::Intent arg2, android::app::PendingIntent arg3) const
	{
		callMethod<void>(
			"startResolutionActivity",
			"(Landroid/app/Activity;ILandroid/content/Intent;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline void EuiccManager::switchToSubscription(jint arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"switchToSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void EuiccManager::updateSubscriptionNickname(jint arg0, JString arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"updateSubscriptionNickname",
			"(ILjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::telephony::euicc

// Base class headers

