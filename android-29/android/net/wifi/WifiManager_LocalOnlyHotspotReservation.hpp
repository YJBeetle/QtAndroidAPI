#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration;
}
namespace __jni_impl::android::net::wifi
{
	class WifiManager;
}

namespace __jni_impl::android::net::wifi
{
	class WifiManager_LocalOnlyHotspotReservation : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		QAndroidJniObject getWifiConfiguration();
	};
} // namespace __jni_impl::android::net::wifi

#include "WifiConfiguration.hpp"
#include "WifiManager.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	
	// Constructors
	void WifiManager_LocalOnlyHotspotReservation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiManager$LocalOnlyHotspotReservation",
			"(V)V");
	}
	
	// Methods
	void WifiManager_LocalOnlyHotspotReservation::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject WifiManager_LocalOnlyHotspotReservation::getWifiConfiguration()
	{
		return __thiz.callObjectMethod(
			"getWifiConfiguration",
			"()Landroid/net/wifi/WifiConfiguration;"
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotReservation : public __jni_impl::android::net::wifi::WifiManager_LocalOnlyHotspotReservation
	{
	public:
		WifiManager_LocalOnlyHotspotReservation(QAndroidJniObject obj) { __thiz = obj; }
		WifiManager_LocalOnlyHotspotReservation()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

