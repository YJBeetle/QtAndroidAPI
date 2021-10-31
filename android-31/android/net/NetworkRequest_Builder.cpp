#include "./NetworkRequest.hpp"
#include "./NetworkSpecifier.hpp"
#include "./NetworkRequest_Builder.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	NetworkRequest_Builder::NetworkRequest_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NetworkRequest_Builder::NetworkRequest_Builder()
		: __JniBaseClass(
			"android.net.NetworkRequest$Builder",
			"()V"
		) {}
	NetworkRequest_Builder::NetworkRequest_Builder(android::net::NetworkRequest arg0)
		: __JniBaseClass(
			"android.net.NetworkRequest$Builder",
			"(Landroid/net/NetworkRequest;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::NetworkRequest_Builder NetworkRequest_Builder::addCapability(jint arg0)
	{
		return callObjectMethod(
			"addCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::addTransportType(jint arg0)
	{
		return callObjectMethod(
			"addTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	android::net::NetworkRequest NetworkRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/NetworkRequest;"
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::clearCapabilities()
	{
		return callObjectMethod(
			"clearCapabilities",
			"()Landroid/net/NetworkRequest$Builder;"
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::removeCapability(jint arg0)
	{
		return callObjectMethod(
			"removeCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::removeTransportType(jint arg0)
	{
		return callObjectMethod(
			"removeTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::setIncludeOtherUidNetworks(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludeOtherUidNetworks",
			"(Z)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::setNetworkSpecifier(android::net::NetworkSpecifier arg0)
	{
		return callObjectMethod(
			"setNetworkSpecifier",
			"(Landroid/net/NetworkSpecifier;)Landroid/net/NetworkRequest$Builder;",
			arg0.object()
		);
	}
	android::net::NetworkRequest_Builder NetworkRequest_Builder::setNetworkSpecifier(jstring arg0)
	{
		return callObjectMethod(
			"setNetworkSpecifier",
			"(Ljava/lang/String;)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
} // namespace android::net

