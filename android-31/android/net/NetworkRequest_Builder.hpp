#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class NetworkRequest;
}
namespace android::net
{
	class NetworkSpecifier;
}
class JString;

namespace android::net
{
	class NetworkRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		NetworkRequest_Builder();
		NetworkRequest_Builder(android::net::NetworkRequest arg0);
		
		// Methods
		android::net::NetworkRequest_Builder addCapability(jint arg0);
		android::net::NetworkRequest_Builder addTransportType(jint arg0);
		android::net::NetworkRequest build();
		android::net::NetworkRequest_Builder clearCapabilities();
		android::net::NetworkRequest_Builder removeCapability(jint arg0);
		android::net::NetworkRequest_Builder removeTransportType(jint arg0);
		android::net::NetworkRequest_Builder setIncludeOtherUidNetworks(jboolean arg0);
		android::net::NetworkRequest_Builder setNetworkSpecifier(android::net::NetworkSpecifier arg0);
		android::net::NetworkRequest_Builder setNetworkSpecifier(JString arg0);
	};
} // namespace android::net

