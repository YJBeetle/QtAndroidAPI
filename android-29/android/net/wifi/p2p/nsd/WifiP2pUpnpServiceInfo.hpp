#pragma once

#ifndef ANDROID_NET_WIFI_P2P_NSD_WIFIP2PUPNPSERVICEINFO
#define ANDROID_NET_WIFI_P2P_NSD_WIFIP2PUPNPSERVICEINFO

#include "../../../../../__JniBaseClass.hpp"
#include "WifiP2pServiceInfo.hpp"


namespace __jni_impl::android::net::wifi::p2p::nsd
{
	class WifiP2pUpnpServiceInfo : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceInfo
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
	};
} // namespace __jni_impl::android::net::wifi::p2p::nsd


namespace __jni_impl::android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	void WifiP2pUpnpServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WifiP2pUpnpServiceInfo::newInstance(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceInfo",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceInfo;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p::nsd

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUpnpServiceInfo : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pUpnpServiceInfo
	{
	public:
		WifiP2pUpnpServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pUpnpServiceInfo()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::p2p::nsd

#endif // ANDROID_NET_WIFI_P2P_NSD_WIFIP2PUPNPSERVICEINFO

