#pragma once

#include "../../../../JObject.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi::p2p
{
	class WifiP2pConfig;
}
class JString;

namespace android::net::wifi::p2p
{
	class WifiP2pConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pConfig_Builder();
		
		// Methods
		android::net::wifi::p2p::WifiP2pConfig build() const;
		android::net::wifi::p2p::WifiP2pConfig_Builder enablePersistentMode(jboolean arg0) const;
		android::net::wifi::p2p::WifiP2pConfig_Builder setDeviceAddress(android::net::MacAddress arg0) const;
		android::net::wifi::p2p::WifiP2pConfig_Builder setGroupOperatingBand(jint arg0) const;
		android::net::wifi::p2p::WifiP2pConfig_Builder setGroupOperatingFrequency(jint arg0) const;
		android::net::wifi::p2p::WifiP2pConfig_Builder setNetworkName(JString arg0) const;
		android::net::wifi::p2p::WifiP2pConfig_Builder setPassphrase(JString arg0) const;
	};
} // namespace android::net::wifi::p2p

