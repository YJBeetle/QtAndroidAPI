#pragma once

#include "../../JIntArray.hpp"
#include "../app/PendingIntent.def.hpp"
#include "../content/Context.def.hpp"
#include "../os/ParcelUuid.def.hpp"
#include "./SubscriptionInfo.def.hpp"
#include "./SubscriptionManager_OnOpportunisticSubscriptionsChangedListener.def.hpp"
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
	inline jint SubscriptionManager::D2D_SHARING_ALL()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"D2D_SHARING_ALL"
		);
	}
	inline jint SubscriptionManager::D2D_SHARING_ALL_CONTACTS()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"D2D_SHARING_ALL_CONTACTS"
		);
	}
	inline jint SubscriptionManager::D2D_SHARING_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"D2D_SHARING_DISABLED"
		);
	}
	inline jint SubscriptionManager::D2D_SHARING_SELECTED_CONTACTS()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"D2D_SHARING_SELECTED_CONTACTS"
		);
	}
	inline JString SubscriptionManager::D2D_STATUS_SHARING()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"D2D_STATUS_SHARING",
			"Ljava/lang/String;"
		);
	}
	inline JString SubscriptionManager::D2D_STATUS_SHARING_SELECTED_CONTACTS()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"D2D_STATUS_SHARING_SELECTED_CONTACTS",
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
	inline jint SubscriptionManager::DEFAULT_SUBSCRIPTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DEFAULT_SUBSCRIPTION_ID"
		);
	}
	inline JString SubscriptionManager::EXTRA_SLOT_INDEX()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"EXTRA_SLOT_INDEX",
			"Ljava/lang/String;"
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
	inline jint SubscriptionManager::INVALID_SIM_SLOT_INDEX()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"INVALID_SIM_SLOT_INDEX"
		);
	}
	inline jint SubscriptionManager::INVALID_SUBSCRIPTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"INVALID_SUBSCRIPTION_ID"
		);
	}
	inline jint SubscriptionManager::SUBSCRIPTION_TYPE_LOCAL_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"SUBSCRIPTION_TYPE_LOCAL_SIM"
		);
	}
	inline jint SubscriptionManager::SUBSCRIPTION_TYPE_REMOTE_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"SUBSCRIPTION_TYPE_REMOTE_SIM"
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
	inline jint SubscriptionManager::getActiveDataSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getActiveDataSubscriptionId",
			"()I"
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
	inline jint SubscriptionManager::getSlotIndex(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getSlotIndex",
			"(I)I",
			arg0
		);
	}
	inline jboolean SubscriptionManager::isUsableSubscriptionId(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.SubscriptionManager",
			"isUsableSubscriptionId",
			"(I)Z",
			arg0
		);
	}
	inline jboolean SubscriptionManager::isValidSubscriptionId(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.SubscriptionManager",
			"isValidSubscriptionId",
			"(I)Z",
			arg0
		);
	}
	inline void SubscriptionManager::addOnOpportunisticSubscriptionsChangedListener(JObject arg0, android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg1) const
	{
		callMethod<void>(
			"addOnOpportunisticSubscriptionsChangedListener",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/SubscriptionManager$OnOpportunisticSubscriptionsChangedListener;)V",
			arg0.object(),
			arg1.object()
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
	inline void SubscriptionManager::addOnSubscriptionsChangedListener(JObject arg0, android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg1) const
	{
		callMethod<void>(
			"addOnSubscriptionsChangedListener",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SubscriptionManager::addSubscriptionsIntoGroup(JObject arg0, android::os::ParcelUuid arg1) const
	{
		callMethod<void>(
			"addSubscriptionsIntoGroup",
			"(Ljava/util/List;Landroid/os/ParcelUuid;)V",
			arg0.object(),
			arg1.object()
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
	inline android::os::ParcelUuid SubscriptionManager::createSubscriptionGroup(JObject arg0) const
	{
		return callObjectMethod(
			"createSubscriptionGroup",
			"(Ljava/util/List;)Landroid/os/ParcelUuid;",
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
	inline JObject SubscriptionManager::getCompleteActiveSubscriptionInfoList() const
	{
		return callObjectMethod(
			"getCompleteActiveSubscriptionInfoList",
			"()Ljava/util/List;"
		);
	}
	inline JObject SubscriptionManager::getDeviceToDeviceStatusSharingContacts(jint arg0) const
	{
		return callObjectMethod(
			"getDeviceToDeviceStatusSharingContacts",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline jint SubscriptionManager::getDeviceToDeviceStatusSharingPreference(jint arg0) const
	{
		return callMethod<jint>(
			"getDeviceToDeviceStatusSharingPreference",
			"(I)I",
			arg0
		);
	}
	inline JObject SubscriptionManager::getOpportunisticSubscriptions() const
	{
		return callObjectMethod(
			"getOpportunisticSubscriptions",
			"()Ljava/util/List;"
		);
	}
	inline JIntArray SubscriptionManager::getSubscriptionIds(jint arg0) const
	{
		return callObjectMethod(
			"getSubscriptionIds",
			"(I)[I",
			arg0
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
	inline JObject SubscriptionManager::getSubscriptionsInGroup(android::os::ParcelUuid arg0) const
	{
		return callObjectMethod(
			"getSubscriptionsInGroup",
			"(Landroid/os/ParcelUuid;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jboolean SubscriptionManager::isActiveSubscriptionId(jint arg0) const
	{
		return callMethod<jboolean>(
			"isActiveSubscriptionId",
			"(I)Z",
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
	inline void SubscriptionManager::removeOnOpportunisticSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg0) const
	{
		callMethod<void>(
			"removeOnOpportunisticSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnOpportunisticSubscriptionsChangedListener;)V",
			arg0.object()
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
	inline void SubscriptionManager::removeSubscriptionsFromGroup(JObject arg0, android::os::ParcelUuid arg1) const
	{
		callMethod<void>(
			"removeSubscriptionsFromGroup",
			"(Ljava/util/List;Landroid/os/ParcelUuid;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SubscriptionManager::setDeviceToDeviceStatusSharingContacts(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setDeviceToDeviceStatusSharingContacts",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		);
	}
	inline void SubscriptionManager::setDeviceToDeviceStatusSharingPreference(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setDeviceToDeviceStatusSharingPreference",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean SubscriptionManager::setOpportunistic(jboolean arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"setOpportunistic",
			"(ZI)Z",
			arg0,
			arg1
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
	inline void SubscriptionManager::setSubscriptionOverrideCongested(jint arg0, jboolean arg1, JIntArray arg2, jlong arg3) const
	{
		callMethod<void>(
			"setSubscriptionOverrideCongested",
			"(IZ[IJ)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
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
	inline void SubscriptionManager::setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, JIntArray arg2, jlong arg3) const
	{
		callMethod<void>(
			"setSubscriptionOverrideUnmetered",
			"(IZ[IJ)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
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
	inline void SubscriptionManager::switchToSubscription(jint arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"switchToSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::telephony

// Base class headers

