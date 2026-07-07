#pragma once

#include "../../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUsdBasedServiceConfig;
}
class JString;

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUsdBasedServiceConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pUsdBasedServiceConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pUsdBasedServiceConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pUsdBasedServiceConfig_Builder(JString arg0);
		
		// Methods
		android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig build() const;
		android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig_Builder setServiceProtocolType(jint arg0) const;
		android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig_Builder setServiceSpecificInfo(JByteArray arg0) const;
	};
} // namespace android::net::wifi::p2p::nsd

