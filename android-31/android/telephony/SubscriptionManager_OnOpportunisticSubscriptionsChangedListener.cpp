#include "./SubscriptionManager_OnOpportunisticSubscriptionsChangedListener.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener()
		: __JniBaseClass(
			"android.telephony.SubscriptionManager$OnOpportunisticSubscriptionsChangedListener",
			"()V"
		) {}
	
	// Methods
	void SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::onOpportunisticSubscriptionsChanged()
	{
		callMethod<void>(
			"onOpportunisticSubscriptionsChanged",
			"()V"
		);
	}
} // namespace android::telephony

