#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../app/PendingIntent.hpp"
#include "./ConnectivityManager_NetworkCallback.hpp"
#include "./LinkProperties.hpp"
#include "./Network.hpp"
#include "./NetworkCapabilities.hpp"
#include "./NetworkInfo.hpp"
#include "./NetworkRequest.hpp"
#include "./ProxyInfo.hpp"
#include "../os/Handler.hpp"
#include "../../JString.hpp"
#include "./ConnectivityManager.hpp"

namespace android::net
{
	// Fields
	JString ConnectivityManager::ACTION_BACKGROUND_DATA_SETTING_CHANGED()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_BACKGROUND_DATA_SETTING_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::ACTION_CAPTIVE_PORTAL_SIGN_IN()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_CAPTIVE_PORTAL_SIGN_IN",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::ACTION_RESTRICT_BACKGROUND_CHANGED()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_RESTRICT_BACKGROUND_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::CONNECTIVITY_ACTION()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"CONNECTIVITY_ACTION",
			"Ljava/lang/String;"
		);
	}
	jint ConnectivityManager::DEFAULT_NETWORK_PREFERENCE()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"DEFAULT_NETWORK_PREFERENCE"
		);
	}
	JString ConnectivityManager::EXTRA_CAPTIVE_PORTAL()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_CAPTIVE_PORTAL",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_CAPTIVE_PORTAL_URL()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_CAPTIVE_PORTAL_URL",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_EXTRA_INFO()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_EXTRA_INFO",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_IS_FAILOVER()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_IS_FAILOVER",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_NETWORK()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_NETWORK_INFO()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_NETWORK_REQUEST()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_REQUEST",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_NETWORK_TYPE()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_NO_CONNECTIVITY()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NO_CONNECTIVITY",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_OTHER_NETWORK_INFO()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_OTHER_NETWORK_INFO",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityManager::EXTRA_REASON()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_REASON",
			"Ljava/lang/String;"
		);
	}
	jint ConnectivityManager::MULTIPATH_PREFERENCE_HANDOVER()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_HANDOVER"
		);
	}
	jint ConnectivityManager::MULTIPATH_PREFERENCE_PERFORMANCE()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_PERFORMANCE"
		);
	}
	jint ConnectivityManager::MULTIPATH_PREFERENCE_RELIABILITY()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_RELIABILITY"
		);
	}
	jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_DISABLED"
		);
	}
	jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_ENABLED()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_ENABLED"
		);
	}
	jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_WHITELISTED()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_WHITELISTED"
		);
	}
	jint ConnectivityManager::TYPE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_BLUETOOTH"
		);
	}
	jint ConnectivityManager::TYPE_DUMMY()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_DUMMY"
		);
	}
	jint ConnectivityManager::TYPE_ETHERNET()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_ETHERNET"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_DUN()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_DUN"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_HIPRI()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_HIPRI"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_MMS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_MMS"
		);
	}
	jint ConnectivityManager::TYPE_MOBILE_SUPL()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_SUPL"
		);
	}
	jint ConnectivityManager::TYPE_VPN()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_VPN"
		);
	}
	jint ConnectivityManager::TYPE_WIFI()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_WIFI"
		);
	}
	jint ConnectivityManager::TYPE_WIMAX()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_WIMAX"
		);
	}
	
	// QAndroidJniObject forward
	ConnectivityManager::ConnectivityManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Network ConnectivityManager::getProcessDefaultNetwork()
	{
		return callStaticObjectMethod(
			"android.net.ConnectivityManager",
			"getProcessDefaultNetwork",
			"()Landroid/net/Network;"
		);
	}
	jboolean ConnectivityManager::isNetworkTypeValid(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.ConnectivityManager",
			"isNetworkTypeValid",
			"(I)Z",
			arg0
		);
	}
	jboolean ConnectivityManager::setProcessDefaultNetwork(android::net::Network arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.ConnectivityManager",
			"setProcessDefaultNetwork",
			"(Landroid/net/Network;)Z",
			arg0.object()
		);
	}
	void ConnectivityManager::addDefaultNetworkActiveListener(JObject arg0) const
	{
		callMethod<void>(
			"addDefaultNetworkActiveListener",
			"(Landroid/net/ConnectivityManager$OnNetworkActiveListener;)V",
			arg0.object()
		);
	}
	jboolean ConnectivityManager::bindProcessToNetwork(android::net::Network arg0) const
	{
		return callMethod<jboolean>(
			"bindProcessToNetwork",
			"(Landroid/net/Network;)Z",
			arg0.object()
		);
	}
	android::net::Network ConnectivityManager::getActiveNetwork() const
	{
		return callObjectMethod(
			"getActiveNetwork",
			"()Landroid/net/Network;"
		);
	}
	android::net::NetworkInfo ConnectivityManager::getActiveNetworkInfo() const
	{
		return callObjectMethod(
			"getActiveNetworkInfo",
			"()Landroid/net/NetworkInfo;"
		);
	}
	JArray ConnectivityManager::getAllNetworkInfo() const
	{
		return callObjectMethod(
			"getAllNetworkInfo",
			"()[Landroid/net/NetworkInfo;"
		);
	}
	JArray ConnectivityManager::getAllNetworks() const
	{
		return callObjectMethod(
			"getAllNetworks",
			"()[Landroid/net/Network;"
		);
	}
	jboolean ConnectivityManager::getBackgroundDataSetting() const
	{
		return callMethod<jboolean>(
			"getBackgroundDataSetting",
			"()Z"
		);
	}
	android::net::Network ConnectivityManager::getBoundNetworkForProcess() const
	{
		return callObjectMethod(
			"getBoundNetworkForProcess",
			"()Landroid/net/Network;"
		);
	}
	android::net::ProxyInfo ConnectivityManager::getDefaultProxy() const
	{
		return callObjectMethod(
			"getDefaultProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	android::net::LinkProperties ConnectivityManager::getLinkProperties(android::net::Network arg0) const
	{
		return callObjectMethod(
			"getLinkProperties",
			"(Landroid/net/Network;)Landroid/net/LinkProperties;",
			arg0.object()
		);
	}
	jint ConnectivityManager::getMultipathPreference(android::net::Network arg0) const
	{
		return callMethod<jint>(
			"getMultipathPreference",
			"(Landroid/net/Network;)I",
			arg0.object()
		);
	}
	android::net::NetworkCapabilities ConnectivityManager::getNetworkCapabilities(android::net::Network arg0) const
	{
		return callObjectMethod(
			"getNetworkCapabilities",
			"(Landroid/net/Network;)Landroid/net/NetworkCapabilities;",
			arg0.object()
		);
	}
	android::net::NetworkInfo ConnectivityManager::getNetworkInfo(android::net::Network arg0) const
	{
		return callObjectMethod(
			"getNetworkInfo",
			"(Landroid/net/Network;)Landroid/net/NetworkInfo;",
			arg0.object()
		);
	}
	android::net::NetworkInfo ConnectivityManager::getNetworkInfo(jint arg0) const
	{
		return callObjectMethod(
			"getNetworkInfo",
			"(I)Landroid/net/NetworkInfo;",
			arg0
		);
	}
	jint ConnectivityManager::getNetworkPreference() const
	{
		return callMethod<jint>(
			"getNetworkPreference",
			"()I"
		);
	}
	JByteArray ConnectivityManager::getNetworkWatchlistConfigHash() const
	{
		return callObjectMethod(
			"getNetworkWatchlistConfigHash",
			"()[B"
		);
	}
	jint ConnectivityManager::getRestrictBackgroundStatus() const
	{
		return callMethod<jint>(
			"getRestrictBackgroundStatus",
			"()I"
		);
	}
	jboolean ConnectivityManager::isActiveNetworkMetered() const
	{
		return callMethod<jboolean>(
			"isActiveNetworkMetered",
			"()Z"
		);
	}
	jboolean ConnectivityManager::isDefaultNetworkActive() const
	{
		return callMethod<jboolean>(
			"isDefaultNetworkActive",
			"()Z"
		);
	}
	void ConnectivityManager::registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0) const
	{
		callMethod<void>(
			"registerDefaultNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerDefaultNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::registerNetworkCallback(android::net::NetworkRequest arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1) const
	{
		callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ConnectivityManager::releaseNetworkRequest(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"releaseNetworkRequest",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::removeDefaultNetworkActiveListener(JObject arg0) const
	{
		callMethod<void>(
			"removeDefaultNetworkActiveListener",
			"(Landroid/net/ConnectivityManager$OnNetworkActiveListener;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::reportBadNetwork(android::net::Network arg0) const
	{
		callMethod<void>(
			"reportBadNetwork",
			"(Landroid/net/Network;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::reportNetworkConnectivity(android::net::Network arg0, jboolean arg1) const
	{
		callMethod<void>(
			"reportNetworkConnectivity",
			"(Landroid/net/Network;Z)V",
			arg0.object(),
			arg1
		);
	}
	jboolean ConnectivityManager::requestBandwidthUpdate(android::net::Network arg0) const
	{
		return callMethod<jboolean>(
			"requestBandwidthUpdate",
			"(Landroid/net/Network;)Z",
			arg0.object()
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1) const
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, jint arg2) const
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2, jint arg3) const
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
	void ConnectivityManager::setNetworkPreference(jint arg0) const
	{
		callMethod<void>(
			"setNetworkPreference",
			"(I)V",
			arg0
		);
	}
	void ConnectivityManager::unregisterNetworkCallback(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"unregisterNetworkCallback",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void ConnectivityManager::unregisterNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0) const
	{
		callMethod<void>(
			"unregisterNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object()
		);
	}
} // namespace android::net

