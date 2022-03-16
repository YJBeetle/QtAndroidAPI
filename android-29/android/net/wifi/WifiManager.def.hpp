#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class DhcpInfo;
}
namespace android::net::wifi
{
	class WifiConfiguration;
}
namespace android::net::wifi
{
	class WifiInfo;
}
namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotCallback;
}
namespace android::net::wifi
{
	class WifiManager_MulticastLock;
}
namespace android::net::wifi
{
	class WifiManager_WifiLock;
}
namespace android::net::wifi
{
	class WifiManager_WpsCallback;
}
namespace android::net::wifi
{
	class WpsInfo;
}
namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}
namespace android::os
{
	class Handler;
}
class JString;
namespace java::net
{
	class InetAddress;
}

namespace android::net::wifi
{
	class WifiManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_PICK_WIFI_NETWORK();
		static JString ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE();
		static JString ACTION_WIFI_NETWORK_SUGGESTION_POST_CONNECTION();
		static jint ERROR_AUTHENTICATING();
		static JString EXTRA_BSSID();
		static JString EXTRA_NETWORK_INFO();
		static JString EXTRA_NETWORK_SUGGESTION();
		static JString EXTRA_NEW_RSSI();
		static JString EXTRA_NEW_STATE();
		static JString EXTRA_PREVIOUS_WIFI_STATE();
		static JString EXTRA_RESULTS_UPDATED();
		static JString EXTRA_SUPPLICANT_CONNECTED();
		static JString EXTRA_SUPPLICANT_ERROR();
		static JString EXTRA_WIFI_INFO();
		static JString EXTRA_WIFI_STATE();
		static JString NETWORK_IDS_CHANGED_ACTION();
		static JString NETWORK_STATE_CHANGED_ACTION();
		static JString RSSI_CHANGED_ACTION();
		static JString SCAN_RESULTS_AVAILABLE_ACTION();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_DUPLICATE();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_EXCEEDS_MAX_PER_APP();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_APP_DISALLOWED();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_INTERNAL();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_REMOVE_INVALID();
		static jint STATUS_NETWORK_SUGGESTIONS_SUCCESS();
		static JString SUPPLICANT_CONNECTION_CHANGE_ACTION();
		static JString SUPPLICANT_STATE_CHANGED_ACTION();
		static jint WIFI_MODE_FULL();
		static jint WIFI_MODE_FULL_HIGH_PERF();
		static jint WIFI_MODE_FULL_LOW_LATENCY();
		static jint WIFI_MODE_SCAN_ONLY();
		static JString WIFI_STATE_CHANGED_ACTION();
		static jint WIFI_STATE_DISABLED();
		static jint WIFI_STATE_DISABLING();
		static jint WIFI_STATE_ENABLED();
		static jint WIFI_STATE_ENABLING();
		static jint WIFI_STATE_UNKNOWN();
		static jint WPS_AUTH_FAILURE();
		static jint WPS_OVERLAP_ERROR();
		static jint WPS_TIMED_OUT();
		static jint WPS_TKIP_ONLY_PROHIBITED();
		static jint WPS_WEP_PROHIBITED();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint calculateSignalLevel(jint arg0, jint arg1);
		static jint compareSignalLevel(jint arg0, jint arg1);
		jint addNetwork(android::net::wifi::WifiConfiguration arg0) const;
		jint addNetworkSuggestions(JObject arg0) const;
		void addOrUpdatePasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration arg0) const;
		void cancelWps(android::net::wifi::WifiManager_WpsCallback arg0) const;
		android::net::wifi::WifiManager_MulticastLock createMulticastLock(JString arg0) const;
		android::net::wifi::WifiManager_WifiLock createWifiLock(JString arg0) const;
		android::net::wifi::WifiManager_WifiLock createWifiLock(jint arg0, JString arg1) const;
		jboolean disableNetwork(jint arg0) const;
		jboolean disconnect() const;
		jboolean enableNetwork(jint arg0, jboolean arg1) const;
		JObject getConfiguredNetworks() const;
		android::net::wifi::WifiInfo getConnectionInfo() const;
		android::net::DhcpInfo getDhcpInfo() const;
		jint getMaxNumberOfNetworkSuggestionsPerApp() const;
		JObject getPasspointConfigurations() const;
		JObject getScanResults() const;
		jint getWifiState() const;
		jboolean is5GHzBandSupported() const;
		jboolean isDeviceToApRttSupported() const;
		jboolean isEasyConnectSupported() const;
		jboolean isEnhancedOpenSupported() const;
		jboolean isEnhancedPowerReportingSupported() const;
		jboolean isP2pSupported() const;
		jboolean isPreferredNetworkOffloadSupported() const;
		jboolean isScanAlwaysAvailable() const;
		jboolean isTdlsSupported() const;
		jboolean isWifiEnabled() const;
		jboolean isWpa3SaeSupported() const;
		jboolean isWpa3SuiteBSupported() const;
		jboolean pingSupplicant() const;
		jboolean reassociate() const;
		jboolean reconnect() const;
		jboolean removeNetwork(jint arg0) const;
		jint removeNetworkSuggestions(JObject arg0) const;
		void removePasspointConfiguration(JString arg0) const;
		jboolean saveConfiguration() const;
		void setTdlsEnabled(java::net::InetAddress arg0, jboolean arg1) const;
		void setTdlsEnabledWithMacAddress(JString arg0, jboolean arg1) const;
		jboolean setWifiEnabled(jboolean arg0) const;
		void startLocalOnlyHotspot(android::net::wifi::WifiManager_LocalOnlyHotspotCallback arg0, android::os::Handler arg1) const;
		jboolean startScan() const;
		void startWps(android::net::wifi::WpsInfo arg0, android::net::wifi::WifiManager_WpsCallback arg1) const;
		jint updateNetwork(android::net::wifi::WifiConfiguration arg0) const;
	};
} // namespace android::net::wifi

