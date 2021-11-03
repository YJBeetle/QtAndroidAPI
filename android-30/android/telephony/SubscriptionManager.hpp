#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class ParcelUuid;
}
namespace android::telephony
{
	class SubscriptionInfo;
}
namespace android::telephony
{
	class SubscriptionManager_OnOpportunisticSubscriptionsChangedListener;
}
namespace android::telephony
{
	class SubscriptionManager_OnSubscriptionsChangedListener;
}
class JString;

namespace android::telephony
{
	class SubscriptionManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED();
		static JString ACTION_DEFAULT_SUBSCRIPTION_CHANGED();
		static JString ACTION_MANAGE_SUBSCRIPTION_PLANS();
		static JString ACTION_REFRESH_SUBSCRIPTION_PLANS();
		static jint DATA_ROAMING_DISABLE();
		static jint DATA_ROAMING_ENABLE();
		static jint DEFAULT_SUBSCRIPTION_ID();
		static JString EXTRA_SLOT_INDEX();
		static JString EXTRA_SUBSCRIPTION_INDEX();
		static jint INVALID_SIM_SLOT_INDEX();
		static jint INVALID_SUBSCRIPTION_ID();
		static jint SUBSCRIPTION_TYPE_LOCAL_SIM();
		static jint SUBSCRIPTION_TYPE_REMOTE_SIM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscriptionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::SubscriptionManager from(android::content::Context arg0);
		static jint getActiveDataSubscriptionId();
		static jint getDefaultDataSubscriptionId();
		static jint getDefaultSmsSubscriptionId();
		static jint getDefaultSubscriptionId();
		static jint getDefaultVoiceSubscriptionId();
		static jint getSlotIndex(jint arg0);
		static jboolean isUsableSubscriptionId(jint arg0);
		static jboolean isValidSubscriptionId(jint arg0);
		void addOnOpportunisticSubscriptionsChangedListener(JObject arg0, android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg1) const;
		void addOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0) const;
		void addOnSubscriptionsChangedListener(JObject arg0, android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg1) const;
		void addSubscriptionsIntoGroup(JObject arg0, android::os::ParcelUuid arg1) const;
		jboolean canManageSubscription(android::telephony::SubscriptionInfo arg0) const;
		android::os::ParcelUuid createSubscriptionGroup(JObject arg0) const;
		JObject getAccessibleSubscriptionInfoList() const;
		android::telephony::SubscriptionInfo getActiveSubscriptionInfo(jint arg0) const;
		jint getActiveSubscriptionInfoCount() const;
		jint getActiveSubscriptionInfoCountMax() const;
		android::telephony::SubscriptionInfo getActiveSubscriptionInfoForSimSlotIndex(jint arg0) const;
		JObject getActiveSubscriptionInfoList() const;
		JObject getCompleteActiveSubscriptionInfoList() const;
		JObject getOpportunisticSubscriptions() const;
		JIntArray getSubscriptionIds(jint arg0) const;
		JObject getSubscriptionPlans(jint arg0) const;
		JObject getSubscriptionsInGroup(android::os::ParcelUuid arg0) const;
		jboolean isActiveSubscriptionId(jint arg0) const;
		jboolean isNetworkRoaming(jint arg0) const;
		void removeOnOpportunisticSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg0) const;
		void removeOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0) const;
		void removeSubscriptionsFromGroup(JObject arg0, android::os::ParcelUuid arg1) const;
		jboolean setOpportunistic(jboolean arg0, jint arg1) const;
		void setSubscriptionOverrideCongested(jint arg0, jboolean arg1, jlong arg2) const;
		void setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, jlong arg2) const;
		void setSubscriptionPlans(jint arg0, JObject arg1) const;
		void switchToSubscription(jint arg0, android::app::PendingIntent arg1) const;
	};
} // namespace android::telephony

