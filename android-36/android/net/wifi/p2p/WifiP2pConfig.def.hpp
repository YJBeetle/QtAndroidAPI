#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi
{
	class WpsInfo;
}
namespace android::net::wifi::p2p
{
	class WifiP2pPairingBootstrappingConfig;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi::p2p
{
	class WifiP2pConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint GROUP_CLIENT_IP_PROVISIONING_MODE_IPV4_DHCP();
		static jint GROUP_CLIENT_IP_PROVISIONING_MODE_IPV6_LINK_LOCAL();
		static jint GROUP_OWNER_BAND_2GHZ();
		static jint GROUP_OWNER_BAND_5GHZ();
		static jint GROUP_OWNER_BAND_6GHZ();
		static jint GROUP_OWNER_BAND_AUTO();
		static jint GROUP_OWNER_INTENT_AUTO();
		static jint GROUP_OWNER_INTENT_MAX();
		static jint GROUP_OWNER_INTENT_MIN();
		static jint P2P_VERSION_1();
		static jint P2P_VERSION_2();
		static jint PCC_MODE_CONNECTION_TYPE_LEGACY_ONLY();
		static jint PCC_MODE_CONNECTION_TYPE_LEGACY_OR_R2();
		static jint PCC_MODE_CONNECTION_TYPE_R2_ONLY();
		JString deviceAddress();
		jint groupOwnerIntent();
		android::net::wifi::WpsInfo wps();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pConfig();
		WifiP2pConfig(android::net::wifi::p2p::WifiP2pConfig &arg0);
		
		// Methods
		jint describeContents() const;
		jint getGroupClientIpProvisioningMode() const;
		jint getGroupOwnerBand() const;
		jint getGroupOwnerVersion() const;
		jint getNetworkId() const;
		JString getNetworkName() const;
		android::net::wifi::p2p::WifiP2pPairingBootstrappingConfig getPairingBootstrappingConfig() const;
		JString getPassphrase() const;
		jint getPccModeConnectionType() const;
		jboolean isAuthorizeConnectionFromPeerEnabled() const;
		void setGroupOwnerVersion(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p

