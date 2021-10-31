#include "./TelephonyNetworkSpecifier.hpp"
#include "./TelephonyNetworkSpecifier_Builder.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	TelephonyNetworkSpecifier_Builder::TelephonyNetworkSpecifier_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TelephonyNetworkSpecifier_Builder::TelephonyNetworkSpecifier_Builder()
		: __JniBaseClass(
			"android.net.TelephonyNetworkSpecifier$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::TelephonyNetworkSpecifier TelephonyNetworkSpecifier_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/TelephonyNetworkSpecifier;"
		);
	}
	android::net::TelephonyNetworkSpecifier_Builder TelephonyNetworkSpecifier_Builder::setSubscriptionId(jint arg0)
	{
		return callObjectMethod(
			"setSubscriptionId",
			"(I)Landroid/net/TelephonyNetworkSpecifier$Builder;",
			arg0
		);
	}
} // namespace android::net

