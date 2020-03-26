#pragma once

#ifndef ANDROID_NET_WIFI_WIFIMANAGER_MULTICASTLOCK
#define ANDROID_NET_WIFI_WIFIMANAGER_MULTICASTLOCK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi
{
	class WifiManager;
}

namespace __jni_impl::android::net::wifi
{
	class WifiManager_MulticastLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		void release();
		void acquire();
		void setReferenceCounted(jboolean arg0);
		jboolean isHeld();
	};
} // namespace __jni_impl::android::net::wifi

#include "WifiManager.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	
	// Constructors
	void WifiManager_MulticastLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiManager$MulticastLock",
			"(V)V");
	}
	
	// Methods
	jstring WifiManager_MulticastLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiManager_MulticastLock::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void WifiManager_MulticastLock::acquire()
	{
		__thiz.callMethod<void>(
			"acquire",
			"()V"
		);
	}
	void WifiManager_MulticastLock::setReferenceCounted(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	jboolean WifiManager_MulticastLock::isHeld()
	{
		return __thiz.callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiManager_MulticastLock : public __jni_impl::android::net::wifi::WifiManager_MulticastLock
	{
	public:
		WifiManager_MulticastLock(QAndroidJniObject obj) { __thiz = obj; }
		WifiManager_MulticastLock()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFIMANAGER_MULTICASTLOCK

