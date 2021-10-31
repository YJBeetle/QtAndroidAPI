#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::telephony
{
	class SubscriptionManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED();
		static jstring ACTION_DEFAULT_SUBSCRIPTION_CHANGED();
		static jstring ACTION_MANAGE_SUBSCRIPTION_PLANS();
		static jstring ACTION_REFRESH_SUBSCRIPTION_PLANS();
		static jint DATA_ROAMING_DISABLE();
		static jint DATA_ROAMING_ENABLE();
		static jint DEFAULT_SUBSCRIPTION_ID();
		static jstring EXTRA_SLOT_INDEX();
		static jstring EXTRA_SUBSCRIPTION_INDEX();
		static jint INVALID_SIM_SLOT_INDEX();
		static jint INVALID_SUBSCRIPTION_ID();
		static jint SUBSCRIPTION_TYPE_LOCAL_SIM();
		static jint SUBSCRIPTION_TYPE_REMOTE_SIM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscriptionManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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
		void addOnOpportunisticSubscriptionsChangedListener(__JniBaseClass arg0, android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg1);
		void addOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0);
		void addOnSubscriptionsChangedListener(__JniBaseClass arg0, android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg1);
		void addSubscriptionsIntoGroup(__JniBaseClass arg0, android::os::ParcelUuid arg1);
		jboolean canManageSubscription(android::telephony::SubscriptionInfo arg0);
		android::os::ParcelUuid createSubscriptionGroup(__JniBaseClass arg0);
		__JniBaseClass getAccessibleSubscriptionInfoList();
		android::telephony::SubscriptionInfo getActiveSubscriptionInfo(jint arg0);
		jint getActiveSubscriptionInfoCount();
		jint getActiveSubscriptionInfoCountMax();
		android::telephony::SubscriptionInfo getActiveSubscriptionInfoForSimSlotIndex(jint arg0);
		__JniBaseClass getActiveSubscriptionInfoList();
		__JniBaseClass getCompleteActiveSubscriptionInfoList();
		__JniBaseClass getOpportunisticSubscriptions();
		jintArray getSubscriptionIds(jint arg0);
		__JniBaseClass getSubscriptionPlans(jint arg0);
		__JniBaseClass getSubscriptionsInGroup(android::os::ParcelUuid arg0);
		jboolean isActiveSubscriptionId(jint arg0);
		jboolean isNetworkRoaming(jint arg0);
		void removeOnOpportunisticSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener arg0);
		void removeOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0);
		void removeSubscriptionsFromGroup(__JniBaseClass arg0, android::os::ParcelUuid arg1);
		jboolean setOpportunistic(jboolean arg0, jint arg1);
		void setSubscriptionOverrideCongested(jint arg0, jboolean arg1, jlong arg2);
		void setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, jlong arg2);
		void setSubscriptionPlans(jint arg0, __JniBaseClass arg1);
		void switchToSubscription(jint arg0, android::app::PendingIntent arg1);
	};
} // namespace android::telephony

