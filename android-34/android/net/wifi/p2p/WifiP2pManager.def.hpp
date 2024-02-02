#pragma once

#include "../../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi::p2p
{
	class WifiP2pConfig;
}
namespace android::net::wifi::p2p
{
	class WifiP2pManager_Channel;
}
namespace android::net::wifi::p2p
{
	class WifiP2pWfdInfo;
}
namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceInfo;
}
namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceRequest;
}
namespace android::os
{
	class Looper;
}
class JString;

namespace android::net::wifi::p2p
{
	class WifiP2pManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_WIFI_P2P_LISTEN_STATE_CHANGED();
		static JString ACTION_WIFI_P2P_REQUEST_RESPONSE_CHANGED();
		static jint BUSY();
		static jint CONNECTION_REQUEST_ACCEPT();
		static jint CONNECTION_REQUEST_DEFER_SHOW_PIN_TO_SERVICE();
		static jint CONNECTION_REQUEST_DEFER_TO_SERVICE();
		static jint CONNECTION_REQUEST_REJECT();
		static jint ERROR();
		static JString EXTRA_DISCOVERY_STATE();
		static JString EXTRA_LISTEN_STATE();
		static JString EXTRA_NETWORK_INFO();
		static JString EXTRA_P2P_DEVICE_LIST();
		static JString EXTRA_REQUEST_CONFIG();
		static JString EXTRA_REQUEST_RESPONSE();
		static JString EXTRA_WIFI_P2P_DEVICE();
		static JString EXTRA_WIFI_P2P_GROUP();
		static JString EXTRA_WIFI_P2P_INFO();
		static JString EXTRA_WIFI_STATE();
		static jint NO_SERVICE_REQUESTS();
		static jint P2P_UNSUPPORTED();
		static JString WIFI_P2P_CONNECTION_CHANGED_ACTION();
		static JString WIFI_P2P_DISCOVERY_CHANGED_ACTION();
		static jint WIFI_P2P_DISCOVERY_STARTED();
		static jint WIFI_P2P_DISCOVERY_STOPPED();
		static jint WIFI_P2P_LISTEN_STARTED();
		static jint WIFI_P2P_LISTEN_STOPPED();
		static JString WIFI_P2P_PEERS_CHANGED_ACTION();
		static JString WIFI_P2P_STATE_CHANGED_ACTION();
		static jint WIFI_P2P_STATE_DISABLED();
		static jint WIFI_P2P_STATE_ENABLED();
		static JString WIFI_P2P_THIS_DEVICE_CHANGED_ACTION();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getP2pMaxAllowedVendorElementsLengthBytes();
		void addExternalApprover(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, JObject arg2) const;
		void addLocalService(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, JObject arg2) const;
		void addServiceRequest(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, JObject arg2) const;
		void cancelConnect(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void clearLocalServices(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void clearServiceRequests(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void connect(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pConfig arg1, JObject arg2) const;
		void createGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void createGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pConfig arg1, JObject arg2) const;
		void discoverPeers(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void discoverPeersOnSocialChannels(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void discoverPeersOnSpecificFrequency(android::net::wifi::p2p::WifiP2pManager_Channel arg0, jint arg1, JObject arg2) const;
		void discoverServices(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void getListenState(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1, JObject arg2) const;
		android::net::wifi::p2p::WifiP2pManager_Channel initialize(android::content::Context arg0, android::os::Looper arg1, JObject arg2) const;
		jboolean isChannelConstrainedDiscoverySupported() const;
		jboolean isGroupClientRemovalSupported() const;
		jboolean isGroupOwnerIPv6LinkLocalAddressProvided() const;
		jboolean isSetVendorElementsSupported() const;
		void removeClient(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, JObject arg2) const;
		void removeExternalApprover(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, JObject arg2) const;
		void removeGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void removeLocalService(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, JObject arg2) const;
		void removeServiceRequest(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, JObject arg2) const;
		void requestConnectionInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void requestDeviceInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void requestDiscoveryState(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void requestGroupInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void requestNetworkInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void requestP2pState(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void requestPeers(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void setConnectionRequestResult(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, jint arg2, JObject arg3) const;
		void setConnectionRequestResult(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::MacAddress arg1, jint arg2, JString arg3, JObject arg4) const;
		void setDnsSdResponseListeners(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1, JObject arg2) const;
		void setServiceResponseListener(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void setUpnpServiceResponseListener(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void setVendorElements(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1, JObject arg2) const;
		void setWfdInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pWfdInfo arg1, JObject arg2) const;
		void startListening(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void stopListening(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
		void stopPeerDiscovery(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const;
	};
} // namespace android::net::wifi::p2p

