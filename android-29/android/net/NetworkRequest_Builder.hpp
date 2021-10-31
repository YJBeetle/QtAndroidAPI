#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class NetworkRequest;
}
namespace android::net
{
	class NetworkSpecifier;
}

namespace android::net
{
	class NetworkRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkRequest_Builder(QJniObject obj);
		
		// Constructors
		NetworkRequest_Builder();
		
		// Methods
		android::net::NetworkRequest_Builder addCapability(jint arg0);
		android::net::NetworkRequest_Builder addTransportType(jint arg0);
		android::net::NetworkRequest build();
		android::net::NetworkRequest_Builder removeCapability(jint arg0);
		android::net::NetworkRequest_Builder removeTransportType(jint arg0);
		android::net::NetworkRequest_Builder setNetworkSpecifier(android::net::NetworkSpecifier arg0);
		android::net::NetworkRequest_Builder setNetworkSpecifier(jstring arg0);
	};
} // namespace android::net

