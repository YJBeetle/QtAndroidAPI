#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../app/PendingIntent.def.hpp"
#include "./ConnectivityManager_NetworkCallback.def.hpp"
#include "./LinkProperties.def.hpp"
#include "./Network.def.hpp"
#include "./NetworkCapabilities.def.hpp"
#include "./NetworkInfo.def.hpp"
#include "./NetworkRequest.def.hpp"
#include "./ProxyInfo.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../JString.hpp"
#include "./ConnectivityManager.def.hpp"

namespace android::net
{
	// Fields
	inline JString ConnectivityManager::ACTION_BACKGROUND_DATA_SETTING_CHANGED()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_BACKGROUND_DATA_SETTING_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::ACTION_CAPTIVE_PORTAL_SIGN_IN()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_CAPTIVE_PORTAL_SIGN_IN",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::ACTION_RESTRICT_BACKGROUND_CHANGED()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"ACTION_RESTRICT_BACKGROUND_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::CONNECTIVITY_ACTION()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"CONNECTIVITY_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline jint ConnectivityManager::DEFAULT_NETWORK_PREFERENCE()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"DEFAULT_NETWORK_PREFERENCE"
		);
	}
	inline JString ConnectivityManager::EXTRA_CAPTIVE_PORTAL()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_CAPTIVE_PORTAL",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_CAPTIVE_PORTAL_URL()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_CAPTIVE_PORTAL_URL",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_EXTRA_INFO()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_EXTRA_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_IS_FAILOVER()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_IS_FAILOVER",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_NETWORK()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_NETWORK_INFO()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_NETWORK_REQUEST()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_NETWORK_TYPE()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NETWORK_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_NO_CONNECTIVITY()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_NO_CONNECTIVITY",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_OTHER_NETWORK_INFO()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_OTHER_NETWORK_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityManager::EXTRA_REASON()
	{
		return getStaticObjectField(
			"android.net.ConnectivityManager",
			"EXTRA_REASON",
			"Ljava/lang/String;"
		);
	}
	inline jint ConnectivityManager::MULTIPATH_PREFERENCE_HANDOVER()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_HANDOVER"
		);
	}
	inline jint ConnectivityManager::MULTIPATH_PREFERENCE_PERFORMANCE()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_PERFORMANCE"
		);
	}
	inline jint ConnectivityManager::MULTIPATH_PREFERENCE_RELIABILITY()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"MULTIPATH_PREFERENCE_RELIABILITY"
		);
	}
	inline jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_DISABLED"
		);
	}
	inline jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_ENABLED()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_ENABLED"
		);
	}
	inline jint ConnectivityManager::RESTRICT_BACKGROUND_STATUS_WHITELISTED()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"RESTRICT_BACKGROUND_STATUS_WHITELISTED"
		);
	}
	inline jint ConnectivityManager::TYPE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_BLUETOOTH"
		);
	}
	inline jint ConnectivityManager::TYPE_DUMMY()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_DUMMY"
		);
	}
	inline jint ConnectivityManager::TYPE_ETHERNET()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_ETHERNET"
		);
	}
	inline jint ConnectivityManager::TYPE_MOBILE()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE"
		);
	}
	inline jint ConnectivityManager::TYPE_MOBILE_DUN()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_DUN"
		);
	}
	inline jint ConnectivityManager::TYPE_MOBILE_HIPRI()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_HIPRI"
		);
	}
	inline jint ConnectivityManager::TYPE_MOBILE_MMS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_MMS"
		);
	}
	inline jint ConnectivityManager::TYPE_MOBILE_SUPL()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_MOBILE_SUPL"
		);
	}
	inline jint ConnectivityManager::TYPE_VPN()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_VPN"
		);
	}
	inline jint ConnectivityManager::TYPE_WIFI()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_WIFI"
		);
	}
	inline jint ConnectivityManager::TYPE_WIMAX()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager",
			"TYPE_WIMAX"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Network ConnectivityManager::getProcessDefaultNetwork()
	{
		return callStaticObjectMethod(
			"android.net.ConnectivityManager",
			"getProcessDefaultNetwork",
			"()Landroid/net/Network;"
		);
	}
	inline jboolean ConnectivityManager::isNetworkTypeValid(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.ConnectivityManager",
			"isNetworkTypeValid",
			"(I)Z",
			arg0
		);
	}
	inline jboolean ConnectivityManager::setProcessDefaultNetwork(android::net::Network arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.ConnectivityManager",
			"setProcessDefaultNetwork",
			"(Landroid/net/Network;)Z",
			arg0.object()
		);
	}
	inline void ConnectivityManager::addDefaultNetworkActiveListener(JObject arg0) const
	{
		callMethod<void>(
			"addDefaultNetworkActiveListener",
			"(Landroid/net/ConnectivityManager$OnNetworkActiveListener;)V",
			arg0.object()
		);
	}
	inline jboolean ConnectivityManager::bindProcessToNetwork(android::net::Network arg0) const
	{
		return callMethod<jboolean>(
			"bindProcessToNetwork",
			"(Landroid/net/Network;)Z",
			arg0.object()
		);
	}
	inline android::net::Network ConnectivityManager::getActiveNetwork() const
	{
		return callObjectMethod(
			"getActiveNetwork",
			"()Landroid/net/Network;"
		);
	}
	inline android::net::NetworkInfo ConnectivityManager::getActiveNetworkInfo() const
	{
		return callObjectMethod(
			"getActiveNetworkInfo",
			"()Landroid/net/NetworkInfo;"
		);
	}
	inline JArray ConnectivityManager::getAllNetworkInfo() const
	{
		return callObjectMethod(
			"getAllNetworkInfo",
			"()[Landroid/net/NetworkInfo;"
		);
	}
	inline JArray ConnectivityManager::getAllNetworks() const
	{
		return callObjectMethod(
			"getAllNetworks",
			"()[Landroid/net/Network;"
		);
	}
	inline jboolean ConnectivityManager::getBackgroundDataSetting() const
	{
		return callMethod<jboolean>(
			"getBackgroundDataSetting",
			"()Z"
		);
	}
	inline android::net::Network ConnectivityManager::getBoundNetworkForProcess() const
	{
		return callObjectMethod(
			"getBoundNetworkForProcess",
			"()Landroid/net/Network;"
		);
	}
	inline android::net::ProxyInfo ConnectivityManager::getDefaultProxy() const
	{
		return callObjectMethod(
			"getDefaultProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	inline android::net::LinkProperties ConnectivityManager::getLinkProperties(android::net::Network arg0) const
	{
		return callObjectMethod(
			"getLinkProperties",
			"(Landroid/net/Network;)Landroid/net/LinkProperties;",
			arg0.object()
		);
	}
	inline jint ConnectivityManager::getMultipathPreference(android::net::Network arg0) const
	{
		return callMethod<jint>(
			"getMultipathPreference",
			"(Landroid/net/Network;)I",
			arg0.object()
		);
	}
	inline android::net::NetworkCapabilities ConnectivityManager::getNetworkCapabilities(android::net::Network arg0) const
	{
		return callObjectMethod(
			"getNetworkCapabilities",
			"(Landroid/net/Network;)Landroid/net/NetworkCapabilities;",
			arg0.object()
		);
	}
	inline android::net::NetworkInfo ConnectivityManager::getNetworkInfo(android::net::Network arg0) const
	{
		return callObjectMethod(
			"getNetworkInfo",
			"(Landroid/net/Network;)Landroid/net/NetworkInfo;",
			arg0.object()
		);
	}
	inline android::net::NetworkInfo ConnectivityManager::getNetworkInfo(jint arg0) const
	{
		return callObjectMethod(
			"getNetworkInfo",
			"(I)Landroid/net/NetworkInfo;",
			arg0
		);
	}
	inline jint ConnectivityManager::getNetworkPreference() const
	{
		return callMethod<jint>(
			"getNetworkPreference",
			"()I"
		);
	}
	inline JByteArray ConnectivityManager::getNetworkWatchlistConfigHash() const
	{
		return callObjectMethod(
			"getNetworkWatchlistConfigHash",
			"()[B"
		);
	}
	inline jint ConnectivityManager::getRestrictBackgroundStatus() const
	{
		return callMethod<jint>(
			"getRestrictBackgroundStatus",
			"()I"
		);
	}
	inline jboolean ConnectivityManager::isActiveNetworkMetered() const
	{
		return callMethod<jboolean>(
			"isActiveNetworkMetered",
			"()Z"
		);
	}
	inline jboolean ConnectivityManager::isDefaultNetworkActive() const
	{
		return callMethod<jboolean>(
			"isDefaultNetworkActive",
			"()Z"
		);
	}
	inline void ConnectivityManager::registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0) const
	{
		callMethod<void>(
			"registerDefaultNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object()
		);
	}
	inline void ConnectivityManager::registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerDefaultNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectivityManager::registerNetworkCallback(android::net::NetworkRequest arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectivityManager::registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1) const
	{
		callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectivityManager::registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"registerNetworkCallback",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void ConnectivityManager::releaseNetworkRequest(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"releaseNetworkRequest",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	inline void ConnectivityManager::removeDefaultNetworkActiveListener(JObject arg0) const
	{
		callMethod<void>(
			"removeDefaultNetworkActiveListener",
			"(Landroid/net/ConnectivityManager$OnNetworkActiveListener;)V",
			arg0.object()
		);
	}
	inline void ConnectivityManager::reportBadNetwork(android::net::Network arg0) const
	{
		callMethod<void>(
			"reportBadNetwork",
			"(Landroid/net/Network;)V",
			arg0.object()
		);
	}
	inline void ConnectivityManager::reportNetworkConnectivity(android::net::Network arg0, jboolean arg1) const
	{
		callMethod<void>(
			"reportNetworkConnectivity",
			"(Landroid/net/Network;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean ConnectivityManager::requestBandwidthUpdate(android::net::Network arg0) const
	{
		return callMethod<jboolean>(
			"requestBandwidthUpdate",
			"(Landroid/net/Network;)Z",
			arg0.object()
		);
	}
	inline void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1) const
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, jint arg2) const
	{
		callMethod<void>(
			"requestNetwork",
			"(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ConnectivityManager::requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2, jint arg3) const
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
	inline void ConnectivityManager::setNetworkPreference(jint arg0) const
	{
		callMethod<void>(
			"setNetworkPreference",
			"(I)V",
			arg0
		);
	}
	inline void ConnectivityManager::unregisterNetworkCallback(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"unregisterNetworkCallback",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	inline void ConnectivityManager::unregisterNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0) const
	{
		callMethod<void>(
			"unregisterNetworkCallback",
			"(Landroid/net/ConnectivityManager$NetworkCallback;)V",
			arg0.object()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
