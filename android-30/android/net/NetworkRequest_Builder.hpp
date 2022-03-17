#pragma once

#include "./NetworkRequest.def.hpp"
#include "./NetworkSpecifier.def.hpp"
#include "../../JString.hpp"
#include "./NetworkRequest_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline NetworkRequest_Builder::NetworkRequest_Builder()
		: JObject(
			"android.net.NetworkRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::NetworkRequest_Builder NetworkRequest_Builder::addCapability(jint arg0) const
	{
		return callObjectMethod(
			"addCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	inline android::net::NetworkRequest_Builder NetworkRequest_Builder::addTransportType(jint arg0) const
	{
		return callObjectMethod(
			"addTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	inline android::net::NetworkRequest NetworkRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/NetworkRequest;"
		);
	}
	inline android::net::NetworkRequest_Builder NetworkRequest_Builder::clearCapabilities() const
	{
		return callObjectMethod(
			"clearCapabilities",
			"()Landroid/net/NetworkRequest$Builder;"
		);
	}
	inline android::net::NetworkRequest_Builder NetworkRequest_Builder::removeCapability(jint arg0) const
	{
		return callObjectMethod(
			"removeCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	inline android::net::NetworkRequest_Builder NetworkRequest_Builder::removeTransportType(jint arg0) const
	{
		return callObjectMethod(
			"removeTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	inline android::net::NetworkRequest_Builder NetworkRequest_Builder::setNetworkSpecifier(android::net::NetworkSpecifier arg0) const
	{
		return callObjectMethod(
			"setNetworkSpecifier",
			"(Landroid/net/NetworkSpecifier;)Landroid/net/NetworkRequest$Builder;",
			arg0.object()
		);
	}
	inline android::net::NetworkRequest_Builder NetworkRequest_Builder::setNetworkSpecifier(JString arg0) const
	{
		return callObjectMethod(
			"setNetworkSpecifier",
			"(Ljava/lang/String;)Landroid/net/NetworkRequest$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
