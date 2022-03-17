#pragma once

#include "../content/Context.def.hpp"
#include "./SubscriptionInfo.def.hpp"
#include "./SubscriptionManager_OnSubscriptionsChangedListener.def.hpp"
#include "../../JString.hpp"
#include "./SubscriptionManager.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString SubscriptionManager::ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString SubscriptionManager::ACTION_DEFAULT_SUBSCRIPTION_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_DEFAULT_SUBSCRIPTION_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString SubscriptionManager::ACTION_MANAGE_SUBSCRIPTION_PLANS()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_MANAGE_SUBSCRIPTION_PLANS",
			"Ljava/lang/String;"
		);
	}
	inline JString SubscriptionManager::ACTION_REFRESH_SUBSCRIPTION_PLANS()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_REFRESH_SUBSCRIPTION_PLANS",
			"Ljava/lang/String;"
		);
	}
	inline jint SubscriptionManager::DATA_ROAMING_DISABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DATA_ROAMING_DISABLE"
		);
	}
	inline jint SubscriptionManager::DATA_ROAMING_ENABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DATA_ROAMING_ENABLE"
		);
	}
	inline JString SubscriptionManager::EXTRA_SUBSCRIPTION_INDEX()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"EXTRA_SUBSCRIPTION_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline jint SubscriptionManager::INVALID_SUBSCRIPTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"INVALID_SUBSCRIPTION_ID"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telephony::SubscriptionManager SubscriptionManager::from(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.SubscriptionManager",
			"from",
			"(Landroid/content/Context;)Landroid/telephony/SubscriptionManager;",
			arg0.object()
		);
	}
	inline jint SubscriptionManager::getDefaultDataSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultDataSubscriptionId",
			"()I"
		);
	}
	inline jint SubscriptionManager::getDefaultSmsSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultSmsSubscriptionId",
			"()I"
		);
	}
	inline jint SubscriptionManager::getDefaultSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultSubscriptionId",
			"()I"
		);
	}
	inline jint SubscriptionManager::getDefaultVoiceSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultVoiceSubscriptionId",
			"()I"
		);
	}
	inline void SubscriptionManager::addOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0) const
	{
		callMethod<void>(
			"addOnSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V",
			arg0.object()
		);
	}
	inline jboolean SubscriptionManager::canManageSubscription(android::telephony::SubscriptionInfo arg0) const
	{
		return callMethod<jboolean>(
			"canManageSubscription",
			"(Landroid/telephony/SubscriptionInfo;)Z",
			arg0.object()
		);
	}
	inline JObject SubscriptionManager::getAccessibleSubscriptionInfoList() const
	{
		return callObjectMethod(
			"getAccessibleSubscriptionInfoList",
			"()Ljava/util/List;"
		);
	}
	inline android::telephony::SubscriptionInfo SubscriptionManager::getActiveSubscriptionInfo(jint arg0) const
	{
		return callObjectMethod(
			"getActiveSubscriptionInfo",
			"(I)Landroid/telephony/SubscriptionInfo;",
			arg0
		);
	}
	inline jint SubscriptionManager::getActiveSubscriptionInfoCount() const
	{
		return callMethod<jint>(
			"getActiveSubscriptionInfoCount",
			"()I"
		);
	}
	inline jint SubscriptionManager::getActiveSubscriptionInfoCountMax() const
	{
		return callMethod<jint>(
			"getActiveSubscriptionInfoCountMax",
			"()I"
		);
	}
	inline android::telephony::SubscriptionInfo SubscriptionManager::getActiveSubscriptionInfoForSimSlotIndex(jint arg0) const
	{
		return callObjectMethod(
			"getActiveSubscriptionInfoForSimSlotIndex",
			"(I)Landroid/telephony/SubscriptionInfo;",
			arg0
		);
	}
	inline JObject SubscriptionManager::getActiveSubscriptionInfoList() const
	{
		return callObjectMethod(
			"getActiveSubscriptionInfoList",
			"()Ljava/util/List;"
		);
	}
	inline JObject SubscriptionManager::getSubscriptionPlans(jint arg0) const
	{
		return callObjectMethod(
			"getSubscriptionPlans",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline jboolean SubscriptionManager::isNetworkRoaming(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNetworkRoaming",
			"(I)Z",
			arg0
		);
	}
	inline void SubscriptionManager::removeOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0) const
	{
		callMethod<void>(
			"removeOnSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V",
			arg0.object()
		);
	}
	inline void SubscriptionManager::setSubscriptionOverrideCongested(jint arg0, jboolean arg1, jlong arg2) const
	{
		callMethod<void>(
			"setSubscriptionOverrideCongested",
			"(IZJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void SubscriptionManager::setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, jlong arg2) const
	{
		callMethod<void>(
			"setSubscriptionOverrideUnmetered",
			"(IZJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void SubscriptionManager::setSubscriptionPlans(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setSubscriptionPlans",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
