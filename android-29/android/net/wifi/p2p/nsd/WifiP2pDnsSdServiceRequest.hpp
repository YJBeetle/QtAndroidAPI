#pragma once

#ifndef ANDROID_NET_WIFI_P2P_NSD_WIFIP2PDNSSDSERVICEREQUEST
#define ANDROID_NET_WIFI_P2P_NSD_WIFIP2PDNSSDSERVICEREQUEST

#include "../../../../../__JniBaseClass.hpp"
#include "WifiP2pServiceRequest.hpp"


namespace __jni_impl::android::net::wifi::p2p::nsd
{
	class WifiP2pDnsSdServiceRequest : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceRequest
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0);
		static QAndroidJniObject newInstance(const QString &arg0);
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject newInstance(const QString &arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::net::wifi::p2p::nsd


namespace __jni_impl::android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	void WifiP2pDnsSdServiceRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WifiP2pDnsSdServiceRequest::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;"
		);
	}
	QAndroidJniObject WifiP2pDnsSdServiceRequest::newInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pDnsSdServiceRequest::newInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WifiP2pDnsSdServiceRequest::newInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject WifiP2pDnsSdServiceRequest::newInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p::nsd

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pDnsSdServiceRequest : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest
	{
	public:
		WifiP2pDnsSdServiceRequest(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pDnsSdServiceRequest()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::p2p::nsd

#endif // ANDROID_NET_WIFI_P2P_NSD_WIFIP2PDNSSDSERVICEREQUEST

