#include "./SubscriptionManager_OnOpportunisticSubscriptionsChangedListener.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener()
		: JObject(
			"android.telephony.SubscriptionManager$OnOpportunisticSubscriptionsChangedListener",
			"()V"
		) {}
	
	// Methods
	void SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::onOpportunisticSubscriptionsChanged() const
	{
		callMethod<void>(
			"onOpportunisticSubscriptionsChanged",
			"()V"
		);
	}
} // namespace android::telephony

