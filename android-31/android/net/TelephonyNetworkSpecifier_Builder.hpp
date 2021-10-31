#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class TelephonyNetworkSpecifier;
}

namespace android::net
{
	class TelephonyNetworkSpecifier_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyNetworkSpecifier_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyNetworkSpecifier_Builder(QAndroidJniObject obj);
		
		// Constructors
		TelephonyNetworkSpecifier_Builder();
		
		// Methods
		android::net::TelephonyNetworkSpecifier build();
		android::net::TelephonyNetworkSpecifier_Builder setSubscriptionId(jint arg0);
	};
} // namespace android::net

