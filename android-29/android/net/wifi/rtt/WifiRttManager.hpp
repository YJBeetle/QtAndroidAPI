#pragma once

#ifndef ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER
#define ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::rtt
{
	class RangingRequest;
}
namespace __jni_impl::android::net::wifi::rtt
{
	class RangingResultCallback;
}

namespace __jni_impl::android::net::wifi::rtt
{
	class WifiRttManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_WIFI_RTT_STATE_CHANGED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isAvailable();
		void startRanging(__jni_impl::android::net::wifi::rtt::RangingRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::net::wifi::rtt::RangingResultCallback arg2);
	};
} // namespace __jni_impl::android::net::wifi::rtt

#include "RangingRequest.hpp"
#include "RangingResultCallback.hpp"

namespace __jni_impl::android::net::wifi::rtt
{
	// Fields
	QAndroidJniObject WifiRttManager::ACTION_WIFI_RTT_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.rtt.WifiRttManager",
			"ACTION_WIFI_RTT_STATE_CHANGED",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void WifiRttManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.rtt.WifiRttManager",
			"(V)V");
	}
	
	// Methods
	jboolean WifiRttManager::isAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isAvailable",
			"()Z");
	}
	void WifiRttManager::startRanging(__jni_impl::android::net::wifi::rtt::RangingRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::net::wifi::rtt::RangingResultCallback arg2)
	{
		__thiz.callMethod<void>(
			"startRanging",
			"(Landroid/net/wifi/rtt/RangingRequest;Ljava/util/concurrent/Executor;Landroid/net/wifi/rtt/RangingResultCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::android::net::wifi::rtt

namespace android::net::wifi::rtt
{
	class WifiRttManager : public __jni_impl::android::net::wifi::rtt::WifiRttManager
	{
	public:
		WifiRttManager(QAndroidJniObject obj) { __thiz = obj; }
		WifiRttManager()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::rtt

#endif // ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER

