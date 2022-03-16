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
		static JString EXTRA_SUBSCRIPTION_INDEX();
		static jint INVALID_SUBSCRIPTION_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscriptionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::telephony::SubscriptionManager from(android::content::Context arg0);
		static jint getDefaultDataSubscriptionId();
		static jint getDefaultSmsSubscriptionId();
		static jint getDefaultSubscriptionId();
		static jint getDefaultVoiceSubscriptionId();
		void addOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0) const;
		jboolean canManageSubscription(android::telephony::SubscriptionInfo arg0) const;
		JObject getAccessibleSubscriptionInfoList() const;
		android::telephony::SubscriptionInfo getActiveSubscriptionInfo(jint arg0) const;
		jint getActiveSubscriptionInfoCount() const;
		jint getActiveSubscriptionInfoCountMax() const;
		android::telephony::SubscriptionInfo getActiveSubscriptionInfoForSimSlotIndex(jint arg0) const;
		JObject getActiveSubscriptionInfoList() const;
		JObject getSubscriptionPlans(jint arg0) const;
		jboolean isNetworkRoaming(jint arg0) const;
		void removeOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0) const;
		void setSubscriptionOverrideCongested(jint arg0, jboolean arg1, jlong arg2) const;
		void setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, jlong arg2) const;
		void setSubscriptionPlans(jint arg0, JObject arg1) const;
	};
} // namespace android::telephony

