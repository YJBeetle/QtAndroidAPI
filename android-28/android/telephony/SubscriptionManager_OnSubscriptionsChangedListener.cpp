#include "./SubscriptionManager_OnSubscriptionsChangedListener.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	SubscriptionManager_OnSubscriptionsChangedListener::SubscriptionManager_OnSubscriptionsChangedListener()
		: JObject(
			"android.telephony.SubscriptionManager$OnSubscriptionsChangedListener",
			"()V"
		) {}
	
	// Methods
	void SubscriptionManager_OnSubscriptionsChangedListener::onSubscriptionsChanged() const
	{
		callMethod<void>(
			"onSubscriptionsChanged",
			"()V"
		);
	}
} // namespace android::telephony

