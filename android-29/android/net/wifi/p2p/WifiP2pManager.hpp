#pragma once

#ifndef ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER
#define ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pManager_Channel;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pConfig;
}
namespace __jni_impl::android::net::wifi::p2p::nsd
{
	class WifiP2pServiceInfo;
}
namespace __jni_impl::android::net::wifi::p2p::nsd
{
	class WifiP2pServiceRequest;
}

namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint BUSY();
		static jint ERROR();
		static jstring EXTRA_DISCOVERY_STATE();
		static jstring EXTRA_NETWORK_INFO();
		static jstring EXTRA_P2P_DEVICE_LIST();
		static jstring EXTRA_WIFI_P2P_DEVICE();
		static jstring EXTRA_WIFI_P2P_GROUP();
		static jstring EXTRA_WIFI_P2P_INFO();
		static jstring EXTRA_WIFI_STATE();
		static jint NO_SERVICE_REQUESTS();
		static jint P2P_UNSUPPORTED();
		static jstring WIFI_P2P_CONNECTION_CHANGED_ACTION();
		static jstring WIFI_P2P_DISCOVERY_CHANGED_ACTION();
		static jint WIFI_P2P_DISCOVERY_STARTED();
		static jint WIFI_P2P_DISCOVERY_STOPPED();
		static jstring WIFI_P2P_PEERS_CHANGED_ACTION();
		static jstring WIFI_P2P_STATE_CHANGED_ACTION();
		static jint WIFI_P2P_STATE_DISABLED();
		static jint WIFI_P2P_STATE_ENABLED();
		static jstring WIFI_P2P_THIS_DEVICE_CHANGED_ACTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject initialize(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Looper arg1, __jni_impl::__JniBaseClass arg2);
		void connect(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::WifiP2pConfig arg1, __jni_impl::__JniBaseClass arg2);
		void createGroup(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void createGroup(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::WifiP2pConfig arg1, __jni_impl::__JniBaseClass arg2);
		void discoverServices(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void removeGroup(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void discoverPeers(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void stopPeerDiscovery(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void cancelConnect(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void addLocalService(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, __jni_impl::__JniBaseClass arg2);
		void removeLocalService(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, __jni_impl::__JniBaseClass arg2);
		void clearLocalServices(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void setServiceResponseListener(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void setDnsSdResponseListeners(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void setUpnpServiceResponseListener(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void addServiceRequest(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, __jni_impl::__JniBaseClass arg2);
		void removeServiceRequest(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, __jni_impl::__JniBaseClass arg2);
		void clearServiceRequests(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void requestPeers(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void requestConnectionInfo(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void requestGroupInfo(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void requestP2pState(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void requestDiscoveryState(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void requestNetworkInfo(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
		void requestDeviceInfo(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::net::wifi::p2p

#include "WifiP2pManager_Channel.hpp"
#include "../../../content/Context.hpp"
#include "../../../os/Looper.hpp"
#include "WifiP2pConfig.hpp"
#include "nsd/WifiP2pServiceInfo.hpp"
#include "nsd/WifiP2pServiceRequest.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	// Fields
	jint WifiP2pManager::BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"BUSY"
		);
	}
	jint WifiP2pManager::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"ERROR"
		);
	}
	jstring WifiP2pManager::EXTRA_DISCOVERY_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_DISCOVERY_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pManager::EXTRA_NETWORK_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pManager::EXTRA_P2P_DEVICE_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_P2P_DEVICE_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pManager::EXTRA_WIFI_P2P_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_P2P_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pManager::EXTRA_WIFI_P2P_GROUP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_P2P_GROUP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pManager::EXTRA_WIFI_P2P_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_P2P_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pManager::EXTRA_WIFI_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pManager::NO_SERVICE_REQUESTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"NO_SERVICE_REQUESTS"
		);
	}
	jint WifiP2pManager::P2P_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"P2P_UNSUPPORTED"
		);
	}
	jstring WifiP2pManager::WIFI_P2P_CONNECTION_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_CONNECTION_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pManager::WIFI_P2P_DISCOVERY_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_DISCOVERY_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pManager::WIFI_P2P_DISCOVERY_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_DISCOVERY_STARTED"
		);
	}
	jint WifiP2pManager::WIFI_P2P_DISCOVERY_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_DISCOVERY_STOPPED"
		);
	}
	jstring WifiP2pManager::WIFI_P2P_PEERS_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_PEERS_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pManager::WIFI_P2P_STATE_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pManager::WIFI_P2P_STATE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_STATE_DISABLED"
		);
	}
	jint WifiP2pManager::WIFI_P2P_STATE_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_STATE_ENABLED"
		);
	}
	jstring WifiP2pManager::WIFI_P2P_THIS_DEVICE_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_THIS_DEVICE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void WifiP2pManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WifiP2pManager::initialize(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Looper arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"initialize",
			"(Landroid/content/Context;Landroid/os/Looper;Landroid/net/wifi/p2p/WifiP2pManager$ChannelListener;)Landroid/net/wifi/p2p/WifiP2pManager$Channel;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WifiP2pManager::connect(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::WifiP2pConfig arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WifiP2pManager::createGroup(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"createGroup",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::createGroup(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::WifiP2pConfig arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"createGroup",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WifiP2pManager::discoverServices(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"discoverServices",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::removeGroup(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"removeGroup",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::discoverPeers(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"discoverPeers",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::stopPeerDiscovery(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"stopPeerDiscovery",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::cancelConnect(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"cancelConnect",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::addLocalService(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"addLocalService",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceInfo;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WifiP2pManager::removeLocalService(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"removeLocalService",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceInfo;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WifiP2pManager::clearLocalServices(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"clearLocalServices",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::setServiceResponseListener(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setServiceResponseListener",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ServiceResponseListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::setDnsSdResponseListeners(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setDnsSdResponseListeners",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$DnsSdServiceResponseListener;Landroid/net/wifi/p2p/WifiP2pManager$DnsSdTxtRecordListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WifiP2pManager::setUpnpServiceResponseListener(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setUpnpServiceResponseListener",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$UpnpServiceResponseListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::addServiceRequest(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"addServiceRequest",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WifiP2pManager::removeServiceRequest(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"removeServiceRequest",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WifiP2pManager::clearServiceRequests(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"clearServiceRequests",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::requestPeers(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestPeers",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$PeerListListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::requestConnectionInfo(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestConnectionInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ConnectionInfoListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::requestGroupInfo(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestGroupInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$GroupInfoListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::requestP2pState(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestP2pState",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$P2pStateListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::requestDiscoveryState(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestDiscoveryState",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$DiscoveryStateListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::requestNetworkInfo(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestNetworkInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$NetworkInfoListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiP2pManager::requestDeviceInfo(__jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestDeviceInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$DeviceInfoListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p

namespace android::net::wifi::p2p
{
	class WifiP2pManager : public __jni_impl::android::net::wifi::p2p::WifiP2pManager
	{
	public:
		WifiP2pManager(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pManager()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::p2p

#endif // ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER

