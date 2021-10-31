#include "./SubscriptionManager_OnSubscriptionsChangedListener.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	SubscriptionManager_OnSubscriptionsChangedListener::SubscriptionManager_OnSubscriptionsChangedListener(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SubscriptionManager_OnSubscriptionsChangedListener::SubscriptionManager_OnSubscriptionsChangedListener()
		: __JniBaseClass(
			"android.telephony.SubscriptionManager$OnSubscriptionsChangedListener",
			"()V"
		) {}
	
	// Methods
	void SubscriptionManager_OnSubscriptionsChangedListener::onSubscriptionsChanged()
	{
		callMethod<void>(
			"onSubscriptionsChanged",
			"()V"
		);
	}
} // namespace android::telephony

