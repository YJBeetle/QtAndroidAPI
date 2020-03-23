#pragma once

#ifndef ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_ONSUBSCRIPTIONSCHANGEDLISTENER
#define ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_ONSUBSCRIPTIONSCHANGEDLISTENER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class SubscriptionManager_OnSubscriptionsChangedListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onSubscriptionsChanged();
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void SubscriptionManager_OnSubscriptionsChangedListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SubscriptionManager$OnSubscriptionsChangedListener",
			"()V");
	}
	
	// Methods
	void SubscriptionManager_OnSubscriptionsChangedListener::onSubscriptionsChanged()
	{
		__thiz.callMethod<void>(
			"onSubscriptionsChanged",
			"()V");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SubscriptionManager_OnSubscriptionsChangedListener : public __jni_impl::android::telephony::SubscriptionManager_OnSubscriptionsChangedListener
	{
	public:
		SubscriptionManager_OnSubscriptionsChangedListener(QAndroidJniObject obj) { __thiz = obj; }
		SubscriptionManager_OnSubscriptionsChangedListener()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_ONSUBSCRIPTIONSCHANGEDLISTENER

