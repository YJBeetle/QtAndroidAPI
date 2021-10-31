#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class SubscriptionManager_OnOpportunisticSubscriptionsChangedListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscriptionManager_OnOpportunisticSubscriptionsChangedListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionManager_OnOpportunisticSubscriptionsChangedListener(QJniObject obj);
		
		// Constructors
		SubscriptionManager_OnOpportunisticSubscriptionsChangedListener();
		
		// Methods
		void onOpportunisticSubscriptionsChanged();
	};
} // namespace android::telephony

