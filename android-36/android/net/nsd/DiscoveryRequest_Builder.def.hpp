#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Network;
}
namespace android::net::nsd
{
	class DiscoveryRequest;
}
class JString;

namespace android::net::nsd
{
	class DiscoveryRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DiscoveryRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DiscoveryRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DiscoveryRequest_Builder(JString arg0);
		
		// Methods
		android::net::nsd::DiscoveryRequest build() const;
		android::net::nsd::DiscoveryRequest_Builder setNetwork(android::net::Network arg0) const;
		android::net::nsd::DiscoveryRequest_Builder setSubtype(JString arg0) const;
	};
} // namespace android::net::nsd

