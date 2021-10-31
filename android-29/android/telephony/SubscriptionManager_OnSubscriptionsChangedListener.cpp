#include "./SubscriptionManager_OnSubscriptionsChangedListener.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	SubscriptionManager_OnSubscriptionsChangedListener::SubscriptionManager_OnSubscriptionsChangedListener(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

