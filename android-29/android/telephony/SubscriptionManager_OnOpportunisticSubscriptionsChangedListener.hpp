#pragma once

#ifndef ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_ONOPPORTUNISTICSUBSCRIPTIONSCHANGEDLISTENER
#define ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_ONOPPORTUNISTICSUBSCRIPTIONSCHANGEDLISTENER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class SubscriptionManager_OnOpportunisticSubscriptionsChangedListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onOpportunisticSubscriptionsChanged();
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SubscriptionManager$OnOpportunisticSubscriptionsChangedListener",
			"()V"
		);
	}
	
	// Methods
	void SubscriptionManager_OnOpportunisticSubscriptionsChangedListener::onOpportunisticSubscriptionsChanged()
	{
		__thiz.callMethod<void>(
			"onOpportunisticSubscriptionsChanged",
			"()V"
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SubscriptionManager_OnOpportunisticSubscriptionsChangedListener : public __jni_impl::android::telephony::SubscriptionManager_OnOpportunisticSubscriptionsChangedListener
	{
	public:
		SubscriptionManager_OnOpportunisticSubscriptionsChangedListener(QAndroidJniObject obj) { __thiz = obj; }
		SubscriptionManager_OnOpportunisticSubscriptionsChangedListener()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_ONOPPORTUNISTICSUBSCRIPTIONSCHANGEDLISTENER

