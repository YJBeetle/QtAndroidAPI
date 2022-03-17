#pragma once

#include "./SubscriptionManager_OnOpportunisticSubscriptionsChangedListener.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener()
		: JObject(
			"android.telephony.SubscriptionManager$OnOpportunisticSubscriptionsChangedListener",
			"()V"
		) {}
	
	// Methods
	inline void SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::onOpportunisticSubscriptionsChanged() const
	{
		callMethod<void>(
			"onOpportunisticSubscriptionsChanged",
			"()V"
		);
	}
} // namespace android::telephony

// Base class headers

