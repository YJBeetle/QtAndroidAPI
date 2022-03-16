#include "./SubscriptionManager_OnOpportunisticSubscriptionsChangedListener.hpp"

namespace android::telephony
{
	// Fields
	
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

