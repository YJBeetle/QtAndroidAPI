#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK
#define ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class SubscribeDiscoverySession;
}
namespace __jni_impl::android::net::wifi::aware
{
	class PeerHandle;
}
namespace __jni_impl::android::net::wifi::aware
{
	class PublishDiscoverySession;
}

namespace __jni_impl::android::net::wifi::aware
{
	class DiscoverySessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onSubscribeStarted(__jni_impl::android::net::wifi::aware::SubscribeDiscoverySession arg0);
		void onSessionConfigUpdated();
		void onSessionConfigFailed();
		void onSessionTerminated();
		void onServiceDiscovered(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1, __jni_impl::__JniBaseClass arg2);
		void onServiceDiscoveredWithinRange(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1, __jni_impl::__JniBaseClass arg2, jint arg3);
		void onPublishStarted(__jni_impl::android::net::wifi::aware::PublishDiscoverySession arg0);
		void onMessageSendSucceeded(jint arg0);
		void onMessageSendFailed(jint arg0);
		void onMessageReceived(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "SubscribeDiscoverySession.hpp"
#include "PeerHandle.hpp"
#include "PublishDiscoverySession.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void DiscoverySessionCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.DiscoverySessionCallback",
			"()V");
	}
	
	// Methods
	void DiscoverySessionCallback::onSubscribeStarted(__jni_impl::android::net::wifi::aware::SubscribeDiscoverySession arg0)
	{
		__thiz.callMethod<void>(
			"onSubscribeStarted",
			"(Landroid/net/wifi/aware/SubscribeDiscoverySession;)V",
			arg0.__jniObject().object()
		);
	}
	void DiscoverySessionCallback::onSessionConfigUpdated()
	{
		__thiz.callMethod<void>(
			"onSessionConfigUpdated",
			"()V"
		);
	}
	void DiscoverySessionCallback::onSessionConfigFailed()
	{
		__thiz.callMethod<void>(
			"onSessionConfigFailed",
			"()V"
		);
	}
	void DiscoverySessionCallback::onSessionTerminated()
	{
		__thiz.callMethod<void>(
			"onSessionTerminated",
			"()V"
		);
	}
	void DiscoverySessionCallback::onServiceDiscovered(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onServiceDiscovered",
			"(Landroid/net/wifi/aware/PeerHandle;[BLjava/util/List;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DiscoverySessionCallback::onServiceDiscoveredWithinRange(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1, __jni_impl::__JniBaseClass arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onServiceDiscoveredWithinRange",
			"(Landroid/net/wifi/aware/PeerHandle;[BLjava/util/List;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DiscoverySessionCallback::onPublishStarted(__jni_impl::android::net::wifi::aware::PublishDiscoverySession arg0)
	{
		__thiz.callMethod<void>(
			"onPublishStarted",
			"(Landroid/net/wifi/aware/PublishDiscoverySession;)V",
			arg0.__jniObject().object()
		);
	}
	void DiscoverySessionCallback::onMessageSendSucceeded(jint arg0)
	{
		__thiz.callMethod<void>(
			"onMessageSendSucceeded",
			"(I)V",
			arg0
		);
	}
	void DiscoverySessionCallback::onMessageSendFailed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onMessageSendFailed",
			"(I)V",
			arg0
		);
	}
	void DiscoverySessionCallback::onMessageReceived(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"onMessageReceived",
			"(Landroid/net/wifi/aware/PeerHandle;[B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class DiscoverySessionCallback : public __jni_impl::android::net::wifi::aware::DiscoverySessionCallback
	{
	public:
		DiscoverySessionCallback(QAndroidJniObject obj) { __thiz = obj; }
		DiscoverySessionCallback()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK

