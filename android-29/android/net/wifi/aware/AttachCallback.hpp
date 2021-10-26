#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_ATTACHCALLBACK
#define ANDROID_NET_WIFI_AWARE_ATTACHCALLBACK

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareSession;
}

namespace __jni_impl::android::net::wifi::aware
{
	class AttachCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAttached(__jni_impl::android::net::wifi::aware::WifiAwareSession arg0);
		void onAttachFailed();
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "WifiAwareSession.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void AttachCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.AttachCallback",
			"()V"
		);
	}
	
	// Methods
	void AttachCallback::onAttached(__jni_impl::android::net::wifi::aware::WifiAwareSession arg0)
	{
		__thiz.callMethod<void>(
			"onAttached",
			"(Landroid/net/wifi/aware/WifiAwareSession;)V",
			arg0.__jniObject().object()
		);
	}
	void AttachCallback::onAttachFailed()
	{
		__thiz.callMethod<void>(
			"onAttachFailed",
			"()V"
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class AttachCallback : public __jni_impl::android::net::wifi::aware::AttachCallback
	{
	public:
		AttachCallback(QAndroidJniObject obj) { __thiz = obj; }
		AttachCallback()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_ATTACHCALLBACK

