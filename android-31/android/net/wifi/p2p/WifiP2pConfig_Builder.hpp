#pragma once

#include "../../../../__JniBaseClass.hpp"

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
	class WifiP2pConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pConfig_Builder(QJniObject obj);
		
		// Constructors
		WifiP2pConfig_Builder();
		
		// Methods
		android::net::wifi::p2p::WifiP2pConfig build();
		android::net::wifi::p2p::WifiP2pConfig_Builder enablePersistentMode(jboolean arg0);
		android::net::wifi::p2p::WifiP2pConfig_Builder setDeviceAddress(android::net::MacAddress arg0);
		android::net::wifi::p2p::WifiP2pConfig_Builder setGroupOperatingBand(jint arg0);
		android::net::wifi::p2p::WifiP2pConfig_Builder setGroupOperatingFrequency(jint arg0);
		android::net::wifi::p2p::WifiP2pConfig_Builder setNetworkName(jstring arg0);
		android::net::wifi::p2p::WifiP2pConfig_Builder setPassphrase(jstring arg0);
	};
} // namespace android::net::wifi::p2p

