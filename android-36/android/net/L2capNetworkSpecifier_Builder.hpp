#pragma once

#include "./L2capNetworkSpecifier.def.hpp"
#include "./MacAddress.def.hpp"
#include "./L2capNetworkSpecifier_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline L2capNetworkSpecifier_Builder::L2capNetworkSpecifier_Builder()
		: JObject(
			"android.net.L2capNetworkSpecifier$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::L2capNetworkSpecifier L2capNetworkSpecifier_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/L2capNetworkSpecifier;"
		);
	}
	inline android::net::L2capNetworkSpecifier_Builder L2capNetworkSpecifier_Builder::setHeaderCompression(jint arg0) const
	{
		return callObjectMethod(
			"setHeaderCompression",
			"(I)Landroid/net/L2capNetworkSpecifier$Builder;",
			arg0
		);
	}
	inline android::net::L2capNetworkSpecifier_Builder L2capNetworkSpecifier_Builder::setPsm(jint arg0) const
	{
		return callObjectMethod(
			"setPsm",
			"(I)Landroid/net/L2capNetworkSpecifier$Builder;",
			arg0
		);
	}
	inline android::net::L2capNetworkSpecifier_Builder L2capNetworkSpecifier_Builder::setRemoteAddress(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setRemoteAddress",
			"(Landroid/net/MacAddress;)Landroid/net/L2capNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	inline android::net::L2capNetworkSpecifier_Builder L2capNetworkSpecifier_Builder::setRole(jint arg0) const
	{
		return callObjectMethod(
			"setRole",
			"(I)Landroid/net/L2capNetworkSpecifier$Builder;",
			arg0
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
