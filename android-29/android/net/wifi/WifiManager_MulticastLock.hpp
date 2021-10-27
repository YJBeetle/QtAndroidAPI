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
		void acquire();
		jboolean isHeld();
		void release();
		void setReferenceCounted(jboolean arg0);
		jstring toString();
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
	void WifiManager_MulticastLock::acquire()
	{
		__thiz.callMethod<void>(
			"acquire",
			"()V"
		);
	}
	jboolean WifiManager_MulticastLock::isHeld()
	{
		return __thiz.callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void WifiManager_MulticastLock::release()
	{
		__thiz.callMethod<void>(
			"release",
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
	jstring WifiManager_MulticastLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

