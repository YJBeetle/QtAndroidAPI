#pragma once

#include "../../../content/Context.def.hpp"
#include "../../MacAddress.def.hpp"
#include "./WifiP2pConfig.def.hpp"
#include "./WifiP2pDirInfo.def.hpp"
#include "./WifiP2pDiscoveryConfig.def.hpp"
#include "./WifiP2pManager_Channel.def.hpp"
#include "./WifiP2pUsdBasedLocalServiceAdvertisementConfig.def.hpp"
#include "./WifiP2pUsdBasedServiceDiscoveryConfig.def.hpp"
#include "./WifiP2pWfdInfo.def.hpp"
#include "./nsd/WifiP2pServiceInfo.def.hpp"
#include "./nsd/WifiP2pServiceRequest.def.hpp"
#include "../../../os/Looper.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pManager.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JString WifiP2pManager::ACTION_WIFI_P2P_LISTEN_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"ACTION_WIFI_P2P_LISTEN_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::ACTION_WIFI_P2P_REQUEST_RESPONSE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"ACTION_WIFI_P2P_REQUEST_RESPONSE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiP2pManager::BUSY()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"BUSY"
		);
	}
	inline jint WifiP2pManager::CONNECTION_REQUEST_ACCEPT()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"CONNECTION_REQUEST_ACCEPT"
		);
	}
	inline jint WifiP2pManager::CONNECTION_REQUEST_DEFER_SHOW_PIN_TO_SERVICE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"CONNECTION_REQUEST_DEFER_SHOW_PIN_TO_SERVICE"
		);
	}
	inline jint WifiP2pManager::CONNECTION_REQUEST_DEFER_TO_SERVICE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"CONNECTION_REQUEST_DEFER_TO_SERVICE"
		);
	}
	inline jint WifiP2pManager::CONNECTION_REQUEST_REJECT()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"CONNECTION_REQUEST_REJECT"
		);
	}
	inline jint WifiP2pManager::ERROR()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"ERROR"
		);
	}
	inline JString WifiP2pManager::EXTRA_DISCOVERY_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_DISCOVERY_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::EXTRA_LISTEN_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_LISTEN_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::EXTRA_NETWORK_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::EXTRA_P2P_DEVICE_LIST()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_P2P_DEVICE_LIST",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::EXTRA_REQUEST_CONFIG()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_REQUEST_CONFIG",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::EXTRA_REQUEST_RESPONSE()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_REQUEST_RESPONSE",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::EXTRA_WIFI_P2P_DEVICE()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_P2P_DEVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::EXTRA_WIFI_P2P_GROUP()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_P2P_GROUP",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::EXTRA_WIFI_P2P_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_P2P_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::EXTRA_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_STATE",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiP2pManager::GROUP_CREATION_FAILURE_REASON_CONNECTION_CANCELLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"GROUP_CREATION_FAILURE_REASON_CONNECTION_CANCELLED"
		);
	}
	inline jint WifiP2pManager::GROUP_CREATION_FAILURE_REASON_GROUP_REMOVED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"GROUP_CREATION_FAILURE_REASON_GROUP_REMOVED"
		);
	}
	inline jint WifiP2pManager::GROUP_CREATION_FAILURE_REASON_INVITATION_FAILED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"GROUP_CREATION_FAILURE_REASON_INVITATION_FAILED"
		);
	}
	inline jint WifiP2pManager::GROUP_CREATION_FAILURE_REASON_PROVISION_DISCOVERY_FAILED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"GROUP_CREATION_FAILURE_REASON_PROVISION_DISCOVERY_FAILED"
		);
	}
	inline jint WifiP2pManager::GROUP_CREATION_FAILURE_REASON_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"GROUP_CREATION_FAILURE_REASON_TIMED_OUT"
		);
	}
	inline jint WifiP2pManager::GROUP_CREATION_FAILURE_REASON_USER_REJECTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"GROUP_CREATION_FAILURE_REASON_USER_REJECTED"
		);
	}
	inline jint WifiP2pManager::NO_PERMISSION()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"NO_PERMISSION"
		);
	}
	inline jint WifiP2pManager::NO_SERVICE_REQUESTS()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"NO_SERVICE_REQUESTS"
		);
	}
	inline jint WifiP2pManager::P2P_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"P2P_UNSUPPORTED"
		);
	}
	inline JString WifiP2pManager::WIFI_P2P_CONNECTION_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_CONNECTION_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pManager::WIFI_P2P_DISCOVERY_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_DISCOVERY_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiP2pManager::WIFI_P2P_DISCOVERY_STARTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_DISCOVERY_STARTED"
		);
	}
	inline jint WifiP2pManager::WIFI_P2P_DISCOVERY_STOPPED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_DISCOVERY_STOPPED"
		);
	}
	inline jint WifiP2pManager::WIFI_P2P_LISTEN_STARTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_LISTEN_STARTED"
		);
	}
	inline jint WifiP2pManager::WIFI_P2P_LISTEN_STOPPED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_LISTEN_STOPPED"
		);
	}
	inline JString WifiP2pManager::WIFI_P2P_PEERS_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_PEERS_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiP2pManager::WIFI_P2P_SCAN_FULL()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_SCAN_FULL"
		);
	}
	inline jint WifiP2pManager::WIFI_P2P_SCAN_SINGLE_FREQ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_SCAN_SINGLE_FREQ"
		);
	}
	inline jint WifiP2pManager::WIFI_P2P_SCAN_SOCIAL()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_SCAN_SOCIAL"
		);
	}
	inline JString WifiP2pManager::WIFI_P2P_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiP2pManager::WIFI_P2P_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_STATE_DISABLED"
		);
	}
	inline jint WifiP2pManager::WIFI_P2P_STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_STATE_ENABLED"
		);
	}
	inline JString WifiP2pManager::WIFI_P2P_THIS_DEVICE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_THIS_DEVICE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiP2pManager::getP2pMaxAllowedVendorElementsLengthBytes()
	{
		return callStaticMethod<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"getP2pMaxAllowedVendorElementsLengthBytes",
			"()I"
		);
	}
	inline void WifiP2pManager::addExternalApprover(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, JObject arg2) const
	{
		callMethod<void>(
			"addExternalApprover",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/MacAddress;Landroid/net/wifi/p2p/WifiP2pManager$ExternalApproverRequestListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::addLocalService(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, JObject arg2) const
	{
		callMethod<void>(
			"addLocalService",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceInfo;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::addServiceRequest(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, JObject arg2) const
	{
		callMethod<void>(
			"addServiceRequest",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::cancelConnect(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"cancelConnect",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::clearLocalServices(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"clearLocalServices",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::clearServiceRequests(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"clearServiceRequests",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::connect(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pConfig arg1, JObject arg2) const
	{
		callMethod<void>(
			"connect",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::createGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"createGroup",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::createGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pConfig arg1, JObject arg2) const
	{
		callMethod<void>(
			"createGroup",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::discoverPeers(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"discoverPeers",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::discoverPeersOnSocialChannels(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"discoverPeersOnSocialChannels",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::discoverPeersOnSpecificFrequency(android::net::wifi::p2p::WifiP2pManager_Channel arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"discoverPeersOnSpecificFrequency",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;ILandroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void WifiP2pManager::discoverServices(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"discoverServices",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::discoverUsdBasedServices(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pUsdBasedServiceDiscoveryConfig arg1, JObject arg2) const
	{
		callMethod<void>(
			"discoverUsdBasedServices",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pUsdBasedServiceDiscoveryConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::getListenState(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getListenState",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::net::wifi::p2p::WifiP2pManager_Channel WifiP2pManager::initialize(android::content::Context arg0, android::os::Looper arg1, JObject arg2) const
	{
		return callObjectMethod(
			"initialize",
			"(Landroid/content/Context;Landroid/os/Looper;Landroid/net/wifi/p2p/WifiP2pManager$ChannelListener;)Landroid/net/wifi/p2p/WifiP2pManager$Channel;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean WifiP2pManager::isChannelConstrainedDiscoverySupported() const
	{
		return callMethod<jboolean>(
			"isChannelConstrainedDiscoverySupported",
			"()Z"
		);
	}
	inline jboolean WifiP2pManager::isGroupClientRemovalSupported() const
	{
		return callMethod<jboolean>(
			"isGroupClientRemovalSupported",
			"()Z"
		);
	}
	inline jboolean WifiP2pManager::isGroupOwnerIPv6LinkLocalAddressProvided() const
	{
		return callMethod<jboolean>(
			"isGroupOwnerIPv6LinkLocalAddressProvided",
			"()Z"
		);
	}
	inline jboolean WifiP2pManager::isPccModeSupported() const
	{
		return callMethod<jboolean>(
			"isPccModeSupported",
			"()Z"
		);
	}
	inline jboolean WifiP2pManager::isSetVendorElementsSupported() const
	{
		return callMethod<jboolean>(
			"isSetVendorElementsSupported",
			"()Z"
		);
	}
	inline jboolean WifiP2pManager::isWiFiDirectR2Supported() const
	{
		return callMethod<jboolean>(
			"isWiFiDirectR2Supported",
			"()Z"
		);
	}
	inline void WifiP2pManager::registerWifiP2pListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerWifiP2pListener",
			"(Ljava/util/concurrent/Executor;Landroid/net/wifi/p2p/WifiP2pManager$WifiP2pListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::removeClient(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, JObject arg2) const
	{
		callMethod<void>(
			"removeClient",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/MacAddress;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::removeExternalApprover(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, JObject arg2) const
	{
		callMethod<void>(
			"removeExternalApprover",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/MacAddress;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::removeGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"removeGroup",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::removeLocalService(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, JObject arg2) const
	{
		callMethod<void>(
			"removeLocalService",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceInfo;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::removeServiceRequest(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, JObject arg2) const
	{
		callMethod<void>(
			"removeServiceRequest",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::requestConnectionInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestConnectionInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ConnectionInfoListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::requestDeviceInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestDeviceInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$DeviceInfoListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::requestDirInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"requestDirInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::requestDiscoveryState(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestDiscoveryState",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$DiscoveryStateListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::requestGroupInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestGroupInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$GroupInfoListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::requestNetworkInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestNetworkInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$NetworkInfoListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::requestP2pState(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestP2pState",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$P2pStateListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::requestPeers(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestPeers",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$PeerListListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::setConnectionRequestResult(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, jint arg2, JObject arg3) const
	{
		callMethod<void>(
			"setConnectionRequestResult",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/MacAddress;ILandroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline void WifiP2pManager::setConnectionRequestResult(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, jint arg2, JString arg3, JObject arg4) const
	{
		callMethod<void>(
			"setConnectionRequestResult",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/MacAddress;ILjava/lang/String;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jstring>(),
			arg4.object()
		);
	}
	inline void WifiP2pManager::setDnsSdResponseListeners(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"setDnsSdResponseListeners",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$DnsSdServiceResponseListener;Landroid/net/wifi/p2p/WifiP2pManager$DnsSdTxtRecordListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::setServiceResponseListener(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"setServiceResponseListener",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ServiceResponseListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::setUpnpServiceResponseListener(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"setUpnpServiceResponseListener",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$UpnpServiceResponseListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::setVendorElements(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"setVendorElements",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Ljava/util/List;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::setWfdInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pWfdInfo arg1, JObject arg2) const
	{
		callMethod<void>(
			"setWfdInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pWfdInfo;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::startListening(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"startListening",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::startPeerDiscovery(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pDiscoveryConfig arg1, JObject arg2) const
	{
		callMethod<void>(
			"startPeerDiscovery",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pDiscoveryConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiP2pManager::startUsdBasedLocalServiceAdvertisement(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, android::net::wifi::p2p::WifiP2pUsdBasedLocalServiceAdvertisementConfig arg2, JObject arg3) const
	{
		callMethod<void>(
			"startUsdBasedLocalServiceAdvertisement",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceInfo;Landroid/net/wifi/p2p/WifiP2pUsdBasedLocalServiceAdvertisementConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void WifiP2pManager::stopListening(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"stopListening",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::stopPeerDiscovery(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"stopPeerDiscovery",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiP2pManager::unregisterWifiP2pListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterWifiP2pListener",
			"(Landroid/net/wifi/p2p/WifiP2pManager$WifiP2pListener;)V",
			arg0.object()
		);
	}
	inline void WifiP2pManager::validateDirInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pDirInfo arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"validateDirInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pDirInfo;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::net::wifi::p2p

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p;
#endif
