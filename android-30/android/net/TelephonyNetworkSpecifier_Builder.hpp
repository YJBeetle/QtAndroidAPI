#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class TelephonyNetworkSpecifier;
}

namespace android::net
{
	class TelephonyNetworkSpecifier_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyNetworkSpecifier_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyNetworkSpecifier_Builder(QJniObject obj);
		
		// Constructors
		TelephonyNetworkSpecifier_Builder();
		
		// Methods
		android::net::TelephonyNetworkSpecifier build();
		android::net::TelephonyNetworkSpecifier_Builder setSubscriptionId(jint arg0);
	};
} // namespace android::net

