#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_IDENTITYCHANGEDLISTENER
#define ANDROID_NET_WIFI_AWARE_IDENTITYCHANGEDLISTENER

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi::aware
{
	class IdentityChangedListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onIdentityChanged(jbyteArray arg0);
	};
} // namespace __jni_impl::android::net::wifi::aware


namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void IdentityChangedListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.IdentityChangedListener",
			"()V"
		);
	}
	
	// Methods
	void IdentityChangedListener::onIdentityChanged(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"onIdentityChanged",
			"([B)V",
			arg0
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class IdentityChangedListener : public __jni_impl::android::net::wifi::aware::IdentityChangedListener
	{
	public:
		IdentityChangedListener(QAndroidJniObject obj) { __thiz = obj; }
		IdentityChangedListener()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_IDENTITYCHANGEDLISTENER

