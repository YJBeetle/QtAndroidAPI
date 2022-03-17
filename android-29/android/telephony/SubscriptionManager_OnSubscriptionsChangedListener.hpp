#pragma once

#include "./SubscriptionManager_OnSubscriptionsChangedListener.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline SubscriptionManager_OnSubscriptionsChangedListener::SubscriptionManager_OnSubscriptionsChangedListener()
		: JObject(
			"android.telephony.SubscriptionManager$OnSubscriptionsChangedListener",
			"()V"
		) {}
	
	// Methods
	inline void SubscriptionManager_OnSubscriptionsChangedListener::onSubscriptionsChanged() const
	{
		callMethod<void>(
			"onSubscriptionsChanged",
			"()V"
		);
	}
} // namespace android::telephony

// Base class headers

