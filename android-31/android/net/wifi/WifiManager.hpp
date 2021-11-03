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
	class WifiManager_AddNetworkResult;
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
	class WifiManager_ScanResultsCallback;
}
namespace android::net::wifi
{
	class WifiManager_SubsystemRestartTrackingCallback;
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
		static JString ACTION_WIFI_SCAN_AVAILABILITY_CHANGED();
		static jint ERROR_AUTHENTICATING();
		static JString EXTRA_BSSID();
		static JString EXTRA_NETWORK_INFO();
		static JString EXTRA_NETWORK_SUGGESTION();
		static JString EXTRA_NEW_RSSI();
		static JString EXTRA_NEW_STATE();
		static JString EXTRA_PREVIOUS_WIFI_STATE();
		static JString EXTRA_RESULTS_UPDATED();
		static JString EXTRA_SCAN_AVAILABLE();
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
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_INVALID();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_NOT_ALLOWED();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_APP_DISALLOWED();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_INTERNAL();
		static jint STATUS_NETWORK_SUGGESTIONS_ERROR_REMOVE_INVALID();
		static jint STATUS_NETWORK_SUGGESTIONS_SUCCESS();
		static jint STATUS_SUGGESTION_APPROVAL_APPROVED_BY_CARRIER_PRIVILEGE();
		static jint STATUS_SUGGESTION_APPROVAL_APPROVED_BY_USER();
		static jint STATUS_SUGGESTION_APPROVAL_PENDING();
		static jint STATUS_SUGGESTION_APPROVAL_REJECTED_BY_USER();
		static jint STATUS_SUGGESTION_APPROVAL_UNKNOWN();
		static jint STATUS_SUGGESTION_CONNECTION_FAILURE_ASSOCIATION();
		static jint STATUS_SUGGESTION_CONNECTION_FAILURE_AUTHENTICATION();
		static jint STATUS_SUGGESTION_CONNECTION_FAILURE_IP_PROVISIONING();
		static jint STATUS_SUGGESTION_CONNECTION_FAILURE_UNKNOWN();
		static JString SUPPLICANT_CONNECTION_CHANGE_ACTION();
		static JString SUPPLICANT_STATE_CHANGED_ACTION();
		static JString UNKNOWN_SSID();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint calculateSignalLevel(jint arg0, jint arg1);
		static jint compareSignalLevel(jint arg0, jint arg1);
		jint addNetwork(android::net::wifi::WifiConfiguration arg0) const;
		android::net::wifi::WifiManager_AddNetworkResult addNetworkPrivileged(android::net::wifi::WifiConfiguration arg0) const;
		jint addNetworkSuggestions(JObject arg0) const;
		void addOrUpdatePasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration arg0) const;
		void addSuggestionConnectionStatusListener(JObject arg0, JObject arg1) const;
		void addSuggestionUserApprovalStatusListener(JObject arg0, JObject arg1) const;
		jint calculateSignalLevel(jint arg0) const;
		void cancelWps(android::net::wifi::WifiManager_WpsCallback arg0) const;
		android::net::wifi::WifiManager_MulticastLock createMulticastLock(JString arg0) const;
		android::net::wifi::WifiManager_WifiLock createWifiLock(JString arg0) const;
		android::net::wifi::WifiManager_WifiLock createWifiLock(jint arg0, JString arg1) const;
		jboolean disableNetwork(jint arg0) const;
		jboolean disconnect() const;
		jboolean enableNetwork(jint arg0, jboolean arg1) const;
		void flushPasspointAnqpCache() const;
		JObject getCallerConfiguredNetworks() const;
		JObject getConfiguredNetworks() const;
		android::net::wifi::WifiInfo getConnectionInfo() const;
		android::net::DhcpInfo getDhcpInfo() const;
		jint getMaxNumberOfNetworkSuggestionsPerApp() const;
		jint getMaxSignalLevel() const;
		JObject getNetworkSuggestions() const;
		JObject getPasspointConfigurations() const;
		JObject getScanResults() const;
		jint getWifiState() const;
		jboolean is24GHzBandSupported() const;
		jboolean is5GHzBandSupported() const;
		jboolean is60GHzBandSupported() const;
		jboolean is6GHzBandSupported() const;
		jboolean isAutoWakeupEnabled() const;
		jboolean isBridgedApConcurrencySupported() const;
		jboolean isCarrierNetworkOffloadEnabled(jint arg0, jboolean arg1) const;
		jboolean isDecoratedIdentitySupported() const;
		jboolean isDeviceToApRttSupported() const;
		jboolean isEasyConnectEnrolleeResponderModeSupported() const;
		jboolean isEasyConnectSupported() const;
		jboolean isEnhancedOpenSupported() const;
		jboolean isEnhancedPowerReportingSupported() const;
		jboolean isMakeBeforeBreakWifiSwitchingSupported() const;
		jboolean isP2pSupported() const;
		jboolean isPasspointTermsAndConditionsSupported() const;
		jboolean isPreferredNetworkOffloadSupported() const;
		jboolean isScanAlwaysAvailable() const;
		jboolean isScanThrottleEnabled() const;
		jboolean isStaApConcurrencySupported() const;
		jboolean isStaBridgedApConcurrencySupported() const;
		jboolean isStaConcurrencyForLocalOnlyConnectionsSupported() const;
		jboolean isTdlsSupported() const;
		jboolean isWapiSupported() const;
		jboolean isWifiDisplayR2Supported() const;
		jboolean isWifiEnabled() const;
		jboolean isWifiStandardSupported(jint arg0) const;
		jboolean isWpa3SaeH2eSupported() const;
		jboolean isWpa3SaePublicKeySupported() const;
		jboolean isWpa3SaeSupported() const;
		jboolean isWpa3SuiteBSupported() const;
		jboolean pingSupplicant() const;
		jboolean reassociate() const;
		jboolean reconnect() const;
		void registerScanResultsCallback(JObject arg0, android::net::wifi::WifiManager_ScanResultsCallback arg1) const;
		void registerSubsystemRestartTrackingCallback(JObject arg0, android::net::wifi::WifiManager_SubsystemRestartTrackingCallback arg1) const;
		jboolean removeNetwork(jint arg0) const;
		jint removeNetworkSuggestions(JObject arg0) const;
		jboolean removeNonCallerConfiguredNetworks() const;
		void removePasspointConfiguration(JString arg0) const;
		void removeSuggestionConnectionStatusListener(JObject arg0) const;
		void removeSuggestionUserApprovalStatusListener(JObject arg0) const;
		jboolean saveConfiguration() const;
		void setTdlsEnabled(java::net::InetAddress arg0, jboolean arg1) const;
		void setTdlsEnabledWithMacAddress(JString arg0, jboolean arg1) const;
		jboolean setWifiEnabled(jboolean arg0) const;
		void startLocalOnlyHotspot(android::net::wifi::WifiManager_LocalOnlyHotspotCallback arg0, android::os::Handler arg1) const;
		jboolean startScan() const;
		void startWps(android::net::wifi::WpsInfo arg0, android::net::wifi::WifiManager_WpsCallback arg1) const;
		void unregisterScanResultsCallback(android::net::wifi::WifiManager_ScanResultsCallback arg0) const;
		void unregisterSubsystemRestartTrackingCallback(android::net::wifi::WifiManager_SubsystemRestartTrackingCallback arg0) const;
		jint updateNetwork(android::net::wifi::WifiConfiguration arg0) const;
	};
} // namespace android::net::wifi

