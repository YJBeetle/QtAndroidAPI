#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class SubscriptionManager_OnSubscriptionsChangedListener : public __JniBaseClass
	{
	public:
		// Fields
		
		SubscriptionManager_OnSubscriptionsChangedListener(QAndroidJniObject obj);
		// Constructors
		SubscriptionManager_OnSubscriptionsChangedListener();
		
		// Methods
		void onSubscriptionsChanged();
	};
} // namespace android::telephony

