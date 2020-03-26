#pragma once

#ifndef ANDROID_NET_WIFI_RTT_RANGINGREQUEST_BUILDER
#define ANDROID_NET_WIFI_RTT_RANGINGREQUEST_BUILDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::rtt
{
	class RangingRequest;
}
namespace __jni_impl::android::net::wifi
{
	class ScanResult;
}
namespace __jni_impl::android::net
{
	class MacAddress;
}
namespace __jni_impl::android::net::wifi::aware
{
	class PeerHandle;
}

namespace __jni_impl::android::net::wifi::rtt
{
	class RangingRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addAccessPoint(__jni_impl::android::net::wifi::ScanResult arg0);
		QAndroidJniObject addAccessPoints(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject addWifiAwarePeer(__jni_impl::android::net::MacAddress arg0);
		QAndroidJniObject addWifiAwarePeer(__jni_impl::android::net::wifi::aware::PeerHandle arg0);
	};
} // namespace __jni_impl::android::net::wifi::rtt

#include "RangingRequest.hpp"
#include "../ScanResult.hpp"
#include "../../MacAddress.hpp"
#include "../aware/PeerHandle.hpp"

namespace __jni_impl::android::net::wifi::rtt
{
	// Fields
	
	// Constructors
	void RangingRequest_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.rtt.RangingRequest$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject RangingRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/wifi/rtt/RangingRequest;"
		);
	}
	QAndroidJniObject RangingRequest_Builder::addAccessPoint(__jni_impl::android::net::wifi::ScanResult arg0)
	{
		return __thiz.callObjectMethod(
			"addAccessPoint",
			"(Landroid/net/wifi/ScanResult;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RangingRequest_Builder::addAccessPoints(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addAccessPoints",
			"(Ljava/util/List;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RangingRequest_Builder::addWifiAwarePeer(__jni_impl::android::net::MacAddress arg0)
	{
		return __thiz.callObjectMethod(
			"addWifiAwarePeer",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RangingRequest_Builder::addWifiAwarePeer(__jni_impl::android::net::wifi::aware::PeerHandle arg0)
	{
		return __thiz.callObjectMethod(
			"addWifiAwarePeer",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::wifi::rtt

namespace android::net::wifi::rtt
{
	class RangingRequest_Builder : public __jni_impl::android::net::wifi::rtt::RangingRequest_Builder
	{
	public:
		RangingRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
		RangingRequest_Builder()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::rtt

#endif // ANDROID_NET_WIFI_RTT_RANGINGREQUEST_BUILDER

