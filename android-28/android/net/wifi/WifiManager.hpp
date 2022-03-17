#pragma once

#include "../DhcpInfo.def.hpp"
#include "./WifiConfiguration.def.hpp"
#include "./WifiInfo.def.hpp"
#include "./WifiManager_LocalOnlyHotspotCallback.def.hpp"
#include "./WifiManager_MulticastLock.def.hpp"
#include "./WifiManager_WifiLock.def.hpp"
#include "./WifiManager_WpsCallback.def.hpp"
#include "./WpsInfo.def.hpp"
#include "./hotspot2/PasspointConfiguration.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.def.hpp"
#include "./WifiManager.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JString WifiManager::ACTION_PICK_WIFI_NETWORK()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_PICK_WIFI_NETWORK",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiManager::ERROR_AUTHENTICATING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"ERROR_AUTHENTICATING"
		);
	}
	inline JString WifiManager::EXTRA_BSSID()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_BSSID",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::EXTRA_NETWORK_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::EXTRA_NEW_RSSI()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NEW_RSSI",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::EXTRA_NEW_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NEW_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::EXTRA_PREVIOUS_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_PREVIOUS_WIFI_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::EXTRA_RESULTS_UPDATED()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_RESULTS_UPDATED",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::EXTRA_SUPPLICANT_CONNECTED()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_SUPPLICANT_CONNECTED",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::EXTRA_SUPPLICANT_ERROR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_SUPPLICANT_ERROR",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::EXTRA_WIFI_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_WIFI_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::EXTRA_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_WIFI_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::NETWORK_IDS_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"NETWORK_IDS_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::NETWORK_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"NETWORK_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::RSSI_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"RSSI_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::SCAN_RESULTS_AVAILABLE_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SCAN_RESULTS_AVAILABLE_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::SUPPLICANT_CONNECTION_CHANGE_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SUPPLICANT_CONNECTION_CHANGE_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiManager::SUPPLICANT_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SUPPLICANT_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiManager::WIFI_MODE_FULL()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_FULL"
		);
	}
	inline jint WifiManager::WIFI_MODE_FULL_HIGH_PERF()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_FULL_HIGH_PERF"
		);
	}
	inline jint WifiManager::WIFI_MODE_SCAN_ONLY()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_SCAN_ONLY"
		);
	}
	inline JString WifiManager::WIFI_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiManager::WIFI_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_DISABLED"
		);
	}
	inline jint WifiManager::WIFI_STATE_DISABLING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_DISABLING"
		);
	}
	inline jint WifiManager::WIFI_STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_ENABLED"
		);
	}
	inline jint WifiManager::WIFI_STATE_ENABLING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_ENABLING"
		);
	}
	inline jint WifiManager::WIFI_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_UNKNOWN"
		);
	}
	inline jint WifiManager::WPS_AUTH_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_AUTH_FAILURE"
		);
	}
	inline jint WifiManager::WPS_OVERLAP_ERROR()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_OVERLAP_ERROR"
		);
	}
	inline jint WifiManager::WPS_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_TIMED_OUT"
		);
	}
	inline jint WifiManager::WPS_TKIP_ONLY_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_TKIP_ONLY_PROHIBITED"
		);
	}
	inline jint WifiManager::WPS_WEP_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_WEP_PROHIBITED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiManager::calculateSignalLevel(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.net.wifi.WifiManager",
			"calculateSignalLevel",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint WifiManager::compareSignalLevel(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.net.wifi.WifiManager",
			"compareSignalLevel",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint WifiManager::addNetwork(android::net::wifi::WifiConfiguration arg0) const
	{
		return callMethod<jint>(
			"addNetwork",
			"(Landroid/net/wifi/WifiConfiguration;)I",
			arg0.object()
		);
	}
	inline void WifiManager::addOrUpdatePasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration arg0) const
	{
		callMethod<void>(
			"addOrUpdatePasspointConfiguration",
			"(Landroid/net/wifi/hotspot2/PasspointConfiguration;)V",
			arg0.object()
		);
	}
	inline void WifiManager::cancelWps(android::net::wifi::WifiManager_WpsCallback arg0) const
	{
		callMethod<void>(
			"cancelWps",
			"(Landroid/net/wifi/WifiManager$WpsCallback;)V",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiManager_MulticastLock WifiManager::createMulticastLock(JString arg0) const
	{
		return callObjectMethod(
			"createMulticastLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$MulticastLock;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::WifiManager_WifiLock WifiManager::createWifiLock(JString arg0) const
	{
		return callObjectMethod(
			"createWifiLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::WifiManager_WifiLock WifiManager::createWifiLock(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"createWifiLock",
			"(ILjava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline jboolean WifiManager::disableNetwork(jint arg0) const
	{
		return callMethod<jboolean>(
			"disableNetwork",
			"(I)Z",
			arg0
		);
	}
	inline jboolean WifiManager::disconnect() const
	{
		return callMethod<jboolean>(
			"disconnect",
			"()Z"
		);
	}
	inline jboolean WifiManager::enableNetwork(jint arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"enableNetwork",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	inline JObject WifiManager::getConfiguredNetworks() const
	{
		return callObjectMethod(
			"getConfiguredNetworks",
			"()Ljava/util/List;"
		);
	}
	inline android::net::wifi::WifiInfo WifiManager::getConnectionInfo() const
	{
		return callObjectMethod(
			"getConnectionInfo",
			"()Landroid/net/wifi/WifiInfo;"
		);
	}
	inline android::net::DhcpInfo WifiManager::getDhcpInfo() const
	{
		return callObjectMethod(
			"getDhcpInfo",
			"()Landroid/net/DhcpInfo;"
		);
	}
	inline JObject WifiManager::getPasspointConfigurations() const
	{
		return callObjectMethod(
			"getPasspointConfigurations",
			"()Ljava/util/List;"
		);
	}
	inline JObject WifiManager::getScanResults() const
	{
		return callObjectMethod(
			"getScanResults",
			"()Ljava/util/List;"
		);
	}
	inline jint WifiManager::getWifiState() const
	{
		return callMethod<jint>(
			"getWifiState",
			"()I"
		);
	}
	inline jboolean WifiManager::is5GHzBandSupported() const
	{
		return callMethod<jboolean>(
			"is5GHzBandSupported",
			"()Z"
		);
	}
	inline jboolean WifiManager::isDeviceToApRttSupported() const
	{
		return callMethod<jboolean>(
			"isDeviceToApRttSupported",
			"()Z"
		);
	}
	inline jboolean WifiManager::isEnhancedPowerReportingSupported() const
	{
		return callMethod<jboolean>(
			"isEnhancedPowerReportingSupported",
			"()Z"
		);
	}
	inline jboolean WifiManager::isP2pSupported() const
	{
		return callMethod<jboolean>(
			"isP2pSupported",
			"()Z"
		);
	}
	inline jboolean WifiManager::isPreferredNetworkOffloadSupported() const
	{
		return callMethod<jboolean>(
			"isPreferredNetworkOffloadSupported",
			"()Z"
		);
	}
	inline jboolean WifiManager::isScanAlwaysAvailable() const
	{
		return callMethod<jboolean>(
			"isScanAlwaysAvailable",
			"()Z"
		);
	}
	inline jboolean WifiManager::isTdlsSupported() const
	{
		return callMethod<jboolean>(
			"isTdlsSupported",
			"()Z"
		);
	}
	inline jboolean WifiManager::isWifiEnabled() const
	{
		return callMethod<jboolean>(
			"isWifiEnabled",
			"()Z"
		);
	}
	inline jboolean WifiManager::pingSupplicant() const
	{
		return callMethod<jboolean>(
			"pingSupplicant",
			"()Z"
		);
	}
	inline jboolean WifiManager::reassociate() const
	{
		return callMethod<jboolean>(
			"reassociate",
			"()Z"
		);
	}
	inline jboolean WifiManager::reconnect() const
	{
		return callMethod<jboolean>(
			"reconnect",
			"()Z"
		);
	}
	inline jboolean WifiManager::removeNetwork(jint arg0) const
	{
		return callMethod<jboolean>(
			"removeNetwork",
			"(I)Z",
			arg0
		);
	}
	inline void WifiManager::removePasspointConfiguration(JString arg0) const
	{
		callMethod<void>(
			"removePasspointConfiguration",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean WifiManager::saveConfiguration() const
	{
		return callMethod<jboolean>(
			"saveConfiguration",
			"()Z"
		);
	}
	inline void WifiManager::setTdlsEnabled(java::net::InetAddress arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setTdlsEnabled",
			"(Ljava/net/InetAddress;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void WifiManager::setTdlsEnabledWithMacAddress(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setTdlsEnabledWithMacAddress",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean WifiManager::setWifiEnabled(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setWifiEnabled",
			"(Z)Z",
			arg0
		);
	}
	inline void WifiManager::startLocalOnlyHotspot(android::net::wifi::WifiManager_LocalOnlyHotspotCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"startLocalOnlyHotspot",
			"(Landroid/net/wifi/WifiManager$LocalOnlyHotspotCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean WifiManager::startScan() const
	{
		return callMethod<jboolean>(
			"startScan",
			"()Z"
		);
	}
	inline void WifiManager::startWps(android::net::wifi::WpsInfo arg0, android::net::wifi::WifiManager_WpsCallback arg1) const
	{
		callMethod<void>(
			"startWps",
			"(Landroid/net/wifi/WpsInfo;Landroid/net/wifi/WifiManager$WpsCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint WifiManager::updateNetwork(android::net::wifi::WifiConfiguration arg0) const
	{
		return callMethod<jint>(
			"updateNetwork",
			"(Landroid/net/wifi/WifiConfiguration;)I",
			arg0.object()
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
