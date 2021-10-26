#pragma once

#ifndef ANDROID_NET_WIFI_P2P_NSD_WIFIP2PUPNPSERVICEREQUEST
#define ANDROID_NET_WIFI_P2P_NSD_WIFIP2PUPNPSERVICEREQUEST

#include "../../../../../__JniBaseClass.hpp"
#include "WifiP2pServiceRequest.hpp"


namespace __jni_impl::android::net::wifi::p2p::nsd
{
	class WifiP2pUpnpServiceRequest : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceRequest
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0);
		static QAndroidJniObject newInstance(const QString &arg0);
	};
} // namespace __jni_impl::android::net::wifi::p2p::nsd


namespace __jni_impl::android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	void WifiP2pUpnpServiceRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WifiP2pUpnpServiceRequest::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;"
		);
	}
	QAndroidJniObject WifiP2pUpnpServiceRequest::newInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pUpnpServiceRequest::newInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p::nsd

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUpnpServiceRequest : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pUpnpServiceRequest
	{
	public:
		WifiP2pUpnpServiceRequest(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pUpnpServiceRequest()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::p2p::nsd

#endif // ANDROID_NET_WIFI_P2P_NSD_WIFIP2PUPNPSERVICEREQUEST

