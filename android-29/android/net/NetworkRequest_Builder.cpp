#include "./NetworkRequest.hpp"
#include "./NetworkSpecifier.hpp"
#include "../../JString.hpp"
#include "./NetworkRequest_Builder.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkRequest_Builder::NetworkRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkRequest_Builder::NetworkRequest_Builder()
		: JObject(
			"android.net.NetworkRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::NetworkRequest_Builder NetworkRequest_Builder::addCapability(jint arg0) const
	{
		return callObjectMethod(
			"addCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::addTransportType(jint arg0) const
	{
		return callObjectMethod(
			"addTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	android::net::NetworkRequest NetworkRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/NetworkRequest;"
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::removeCapability(jint arg0) const
	{
		return callObjectMethod(
			"removeCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::removeTransportType(jint arg0) const
	{
		return callObjectMethod(
			"removeTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::setNetworkSpecifier(android::net::NetworkSpecifier arg0) const
	{
		return callObjectMethod(
			"setNetworkSpecifier",
			"(Landroid/net/NetworkSpecifier;)Landroid/net/NetworkRequest$Builder;",
			arg0.object()
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::setNetworkSpecifier(JString arg0) const
	{
		return callObjectMethod(
			"setNetworkSpecifier",
			"(Ljava/lang/String;)Landroid/net/NetworkRequest$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net

