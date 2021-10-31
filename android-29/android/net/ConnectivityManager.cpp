#include "../app/PendingIntent.hpp"
#include "./ConnectivityManager_NetworkCallback.hpp"
#include "./IpSecManager_UdpEncapsulationSocket.hpp"
#include "./LinkProperties.hpp"
#include "./Network.hpp"
#include "./NetworkCapabilities.hpp"
#include "./NetworkInfo.hpp"
#include "./NetworkRequest.hpp"
#include "./ProxyInfo.hpp"
#include "./SocketKeepalive.hpp"
#include "./SocketKeepalive_Callback.hpp"
#include "../os/Handler.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/InetSocketAddress.hpp"
#include "./ConnectivityManager.hpp"

namespace android::net
{
	// Fields
	jstring ConnectivityManager::ACTION_BACKGROUND_DATA_SETTING_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_BACKGROUND_DATA_SETTING_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::ACTION_CAPTIVE_PORTAL_SIGN_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_CAPTIVE_PORTAL_SIGN_IN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::ACTION_RESTRICT_BACKGROUND_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_RESTRICT_BACKGROUND_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::CONNECTIVITY_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"CONNECTIVITY_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ConnectivityManager::DEFAULT_NETWORK_PREFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"DEFAULT_NETWORK_PREFERENCE"
		);
	}
	jstring ConnectivityManager::EXTRA_CAPTIVE_PORTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_CAPTIVE_PORTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_CAPTIVE_PORTAL_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_CAPTIVE_PORTAL_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_EXTRA_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_EXTRA_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_IS_FAILOVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_IS_FAILOVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NETWORK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NETWORK_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NETWORK_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NETWORK_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_NO_CONNECTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NO_CONNECTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_OTHER_NETWORK_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_OTHER_NETWORK_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityManager::EXTRA_REASON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_REASON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ConnectivityManager::MULTIPATH_PREFERENCE_HANDOVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_HANDOVER"
		);
	}
	jint ConnectivityManager::MULTIPATH_PREFERENCE_PERFORMANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_PERFORMANCE"
		);
	}
	jint ConnectivityManager::MULTIPATH_PREFERENCE_RELIABILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_RELIABILITY"
		);
	}
	jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_DISABLED"
		);
	}
	jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_ENABLED"
		);
	}
	jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_WHITELISTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_WHITELISTED"
		);
	}
	jint ConnectivityManager::TYPE_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_BLUETOOTH"
		);
	}
	jint ConnectivityManager::TYPE_DUMMY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_DUMMY"
		);
	}
	jint ConnectivityManager::TYPE_ETHERNET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_ETHERNET"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_DUN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_DUN"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_HIPRI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_HIPRI"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_MMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_MMS"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_SUPL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_SUPL"
		);
	}
	jint ConnectivityManager::TYPE_VPN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_VPN"
		);
	}
	jint ConnectivityManager::TYPE_WIFI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_WIFI"
		);
	}
	jint ConnectivityManager::TYPE_WIMAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_WIMAX"
		);
	}
	
	// QAndroidJniObject forward
	ConnectivityManager::ConnectivityManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Network ConnectivityManager::getProcessDefaultNetwork()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ConnectivityManager",
			"getProcessDefaultNetwork",
			"()Landroid/net/Network;"
		);
	}
	jboolean ConnectivityManager::isNetworkTypeValid(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.ConnectivityManager",
			"isNetworkTypeValid",
			"(I)Z",
			arg0
		);
	}
	jboolean ConnectivityManager::setProcessDefaultNetwork(android::net::Network arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.ConnectivityManager",
			"setProcessDefaultNetwork",
			"(Landroid/net/Network;)Z",
			arg0.object()
		);
	}
	void ConnectivityManager::addDefaultNetworkActiveListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addDefaultNetworkActiveListener",
			"(Landroid/net/ConnectivityManager$OnNetworkActiveListener;)V",
			arg0.object()
		);
	}
	jboolean ConnectivityManager::bindProcessToNetwork(android::net::Network arg0)
	{
		return callMethod<jboolean>(
			"bindProcessToNetwork",
			"(Landroid/net/Network;)Z",
			arg0.object()
		);
	}
	android::net::SocketKeepalive ConnectivityManager::createSocketKeepalive(android::net::Network arg0, android::net::IpSecManager_UdpEncapsulationSocket arg1, java::net::InetAddress arg2, java::net::InetAddress arg3, __JniBaseClass arg4, android::net::SocketKeepalive_Callback arg5)
	{
		return callObjectMethod(
			"createSocketKeepalive",
			"(Landroid/net/Network;Landroid/net/IpSecManager$UdpEncapsulationSocket;Ljava/net/InetAddress;Ljava/net/InetAddress;Ljava/util/concurrent/Executor;Landroid/net/SocketKeepalive$Callback;)Landroid/net/SocketKeepalive;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	android::net::Network ConnectivityManager::getActiveNetwork()
	{
		return callObjectMethod(
			"getActiveNetwork",
			"()Landroid/net/Network;"
		);
	}
	android::net::NetworkInfo ConnectivityManager::getActiveNetworkInfo()
	{
		return callObjectMethod(
			"getActiveNetworkInfo",
			"()Landroid/net/NetworkInfo;"
		);
	}
	jarray ConnectivityManager::getAllNetworkInfo()
	{
		return callObjectMethod(
			"getAllNetworkInfo",
			"()[Landroid/net/NetworkInfo;"
		).object<jarray>();
	}
	jarray ConnectivityManager::getAllNetworks()
	{
		return callObjectMethod(
			"getAllNetworks",
			"()[Landroid/net/Network;"
		).object<jarray>();
	}
	jboolean ConnectivityManager::getBackgroundDataSetting()
	{
		return callMethod<jboolean>(
			"getBackgroundDataSetting",
			"()Z"
		);
	}
	android::net::Network ConnectivityManager::getBoundNetworkForProcess()
	{
		return callObjectMethod(
			"getBoundNetworkForProcess",
			"()Landroid/net/Network;"
		);
	}
	jint ConnectivityManager::getConnectionOwnerUid(jint arg0, java::net::InetSocketAddress arg1, java::net::InetSocketAddress arg2)
	{
		return callMethod<jint>(
			"getConnectionOwnerUid",
			"(ILjava/net/InetSocketAddress;Ljava/net/InetSocketAddress;)I",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::net::ProxyInfo ConnectivityManager::getDefaultProxy()
	{
		return callObjectMethod(
			"getDefaultProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	android::net::LinkProperties ConnectivityManager::getLinkProperties(android::net::Network arg0)
	{
		return callObjectMethod(
			"getLinkProperties",
			"(Landroid/net/Network;)Landroid/net/LinkProperties;",
			arg0.object()
		);
	}
	jint ConnectivityManager::getMultipathPreference(android::net::Network arg0)
	{
		return callMethod<jint>(
			"getMultipathPreference",
			"(Landroid/net/Network;)I",
			arg0.object()
		);
	}
	android::net::NetworkCapabilities ConnectivityManager::getNetworkCapabilities(android::net::Network arg0)
	{
		return callObjectMethod(
			"getNetworkCapabilities",
			"(Landroid/net/Network;)Landroid/net/NetworkCapabilities;",
			arg0.object()
		);
	}
	android::net::NetworkInfo ConnectivityManager::getNetworkInfo(android::net::Network arg0)
	{
		return callObjectMethod(
			"getNetworkInfo",
			"(Landroid/net/Network;)Landroid/net/NetworkInfo;",
			arg0.object()
		);
	}
	android::net::NetworkInfo ConnectivityManager::getNetworkInfo(jint arg0)
	{
		return callObjectMethod(
			"getNetworkInfo",
			"(I)Landroid/net/NetworkInfo;",
			arg0
		);
	}
	jint ConnectivityManager::getNetworkPreference()
	{
		return callMethod<jint>(
			"getNetworkPreference",
			"()I"
		);
	}
	jbyteArray ConnectivityManager::getNetworkWatchlistConfigHash()
	{
		return callObjectMethod(
			"getNetworkWatchlistConfigHash",
			"()[B"
		).object<jbyteArray>();
	}
	jint ConnectivityManager::getRestrictBackgroundStatus()
	{
		return callMethod<jint>(
			"getRestrictBackgroundStatus",
			"()I"
		);
	}
	jboolean ConnectivityManager::isActiveNetworkMetered()
	{
		return callMethod<jboolean>(
			"isActiveNetworkMetered",
			"()Z"
		);
	}
	jboolean ConnectivityManager::isDefaultNetworkActive()
	{
		return callMethod<jboolean>(
			"isDefaultNetworkActive",
			"()Z"
		);
	}
	void ConnectivityManager::registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0)
	{
		callMethod<void>(
			"registerDefaultNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerDefaultNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::registerNetworkCallback(android::net::NetworkRequest arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1)
	{
		callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ConnectivityManager::releaseNetworkRequest(android::app::PendingIntent arg0)
	{
		callMethod<void>(
			"releaseNetworkRequest",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::removeDefaultNetworkActiveListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeDefaultNetworkActiveListener",
			"(Landroid/net/ConnectivityManager$OnNetworkActiveListener;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::reportBadNetwork(android::net::Network arg0)
	{
		callMethod<void>(
			"reportBadNetwork",
			"(Landroid/net/Network;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::reportNetworkConnectivity(android::net::Network arg0, jboolean arg1)
	{
		callMethod<void>(
			"reportNetworkConnectivity",
			"(Landroid/net/Network;Z)V",
			arg0.object(),
			arg1
		);
	}
	jboolean ConnectivityManager::requestBandwidthUpdate(android::net::Network arg0)
	{
		return callMethod<jboolean>(
			"requestBandwidthUpdate",
			"(Landroid/net/Network;)Z",
			arg0.object()
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1)
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, jint arg2)
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2, jint arg3)
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	void ConnectivityManager::setNetworkPreference(jint arg0)
	{
		callMethod<void>(
			"setNetworkPreference",
			"(I)V",
			arg0
		);
	}
	void ConnectivityManager::unregisterNetworkCallback(android::app::PendingIntent arg0)
	{
		callMethod<void>(
			"unregisterNetworkCallback",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::unregisterNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0)
	{
		callMethod<void>(
			"unregisterNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object()
		);
	}
} // namespace android::net

