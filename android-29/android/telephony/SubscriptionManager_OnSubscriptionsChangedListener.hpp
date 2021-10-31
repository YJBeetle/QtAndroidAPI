#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class SubscriptionManager_OnSubscriptionsChangedListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscriptionManager_OnSubscriptionsChangedListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionManager_OnSubscriptionsChangedListener(QAndroidJniObject obj);
		
		// Constructors
		SubscriptionManager_OnSubscriptionsChangedListener();
		
		// Methods
		void onSubscriptionsChanged();
	};
} // namespace android::telephony

