#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class SubscriptionManager_OnOpportunisticSubscriptionsChangedListener : public __JniBaseClass
	{
	public:
		// Fields
		
		SubscriptionManager_OnOpportunisticSubscriptionsChangedListener(QAndroidJniObject obj);
		// Constructors
		SubscriptionManager_OnOpportunisticSubscriptionsChangedListener();
		
		// Methods
		void onOpportunisticSubscriptionsChanged();
	};
} // namespace android::telephony

