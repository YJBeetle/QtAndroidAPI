#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::telephony
{
	class SubscriptionInfo;
}
namespace android::telephony
{
	class SubscriptionManager_OnSubscriptionsChangedListener;
}

namespace android::telephony
{
	class SubscriptionManager : public JObject
	{
	public:
		// Fields
		static jstring ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED();
		static jstring ACTION_DEFAULT_SUBSCRIPTION_CHANGED();
		static jstring ACTION_MANAGE_SUBSCRIPTION_PLANS();
		static jstring ACTION_REFRESH_SUBSCRIPTION_PLANS();
		static jint DATA_ROAMING_DISABLE();
		static jint DATA_ROAMING_ENABLE();
		static jstring EXTRA_SUBSCRIPTION_INDEX();
		static jint INVALID_SUBSCRIPTION_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscriptionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::SubscriptionManager from(android::content::Context arg0);
		static jint getDefaultDataSubscriptionId();
		static jint getDefaultSmsSubscriptionId();
		static jint getDefaultSubscriptionId();
		static jint getDefaultVoiceSubscriptionId();
		void addOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0);
		jboolean canManageSubscription(android::telephony::SubscriptionInfo arg0);
		JObject getAccessibleSubscriptionInfoList();
		android::telephony::SubscriptionInfo getActiveSubscriptionInfo(jint arg0);
		jint getActiveSubscriptionInfoCount();
		jint getActiveSubscriptionInfoCountMax();
		android::telephony::SubscriptionInfo getActiveSubscriptionInfoForSimSlotIndex(jint arg0);
		JObject getActiveSubscriptionInfoList();
		JObject getSubscriptionPlans(jint arg0);
		jboolean isNetworkRoaming(jint arg0);
		void removeOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0);
		void setSubscriptionOverrideCongested(jint arg0, jboolean arg1, jlong arg2);
		void setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, jlong arg2);
		void setSubscriptionPlans(jint arg0, JObject arg1);
	};
} // namespace android::telephony

