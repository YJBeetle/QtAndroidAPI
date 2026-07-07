#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::p2p
{
	class WifiP2pUsdBasedLocalServiceAdvertisementConfig;
}

namespace android::net::wifi::p2p
{
	class WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder();
		
		// Methods
		android::net::wifi::p2p::WifiP2pUsdBasedLocalServiceAdvertisementConfig build() const;
		android::net::wifi::p2p::WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder setFrequencyMhz(jint arg0) const;
	};
} // namespace android::net::wifi::p2p

