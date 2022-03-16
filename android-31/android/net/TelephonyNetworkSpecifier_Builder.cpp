#include "./TelephonyNetworkSpecifier.hpp"
#include "./TelephonyNetworkSpecifier_Builder.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	TelephonyNetworkSpecifier_Builder::TelephonyNetworkSpecifier_Builder()
		: JObject(
			"android.net.TelephonyNetworkSpecifier$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::TelephonyNetworkSpecifier TelephonyNetworkSpecifier_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/TelephonyNetworkSpecifier;"
		);
	}
	android::net::TelephonyNetworkSpecifier_Builder TelephonyNetworkSpecifier_Builder::setSubscriptionId(jint arg0) const
	{
		return callObjectMethod(
			"setSubscriptionId",
			"(I)Landroid/net/TelephonyNetworkSpecifier$Builder;",
			arg0
		);
	}
} // namespace android::net

