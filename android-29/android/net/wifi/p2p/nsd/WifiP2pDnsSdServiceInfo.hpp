#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./WifiP2pServiceInfo.hpp"


namespace __jni_impl::android::net::wifi::p2p::nsd
{
	class WifiP2pDnsSdServiceInfo : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceInfo
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject newInstance(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
	};
} // namespace __jni_impl::android::net::wifi::p2p::nsd


namespace __jni_impl::android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	void WifiP2pDnsSdServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WifiP2pDnsSdServiceInfo::newInstance(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceInfo",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceInfo;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject WifiP2pDnsSdServiceInfo::newInstance(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceInfo",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p::nsd

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pDnsSdServiceInfo : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceInfo
	{
	public:
		WifiP2pDnsSdServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pDnsSdServiceInfo()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::p2p::nsd

