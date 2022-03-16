#pragma once

#include "./TelephonyNetworkSpecifier.def.hpp"
#include "./TelephonyNetworkSpecifier_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline TelephonyNetworkSpecifier_Builder::TelephonyNetworkSpecifier_Builder()
		: JObject(
			"android.net.TelephonyNetworkSpecifier$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::TelephonyNetworkSpecifier TelephonyNetworkSpecifier_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/TelephonyNetworkSpecifier;"
		);
	}
	inline android::net::TelephonyNetworkSpecifier_Builder TelephonyNetworkSpecifier_Builder::setSubscriptionId(jint arg0) const
	{
		return callObjectMethod(
			"setSubscriptionId",
			"(I)Landroid/net/TelephonyNetworkSpecifier$Builder;",
			arg0
		);
	}
} // namespace android::net

// Base class headers

