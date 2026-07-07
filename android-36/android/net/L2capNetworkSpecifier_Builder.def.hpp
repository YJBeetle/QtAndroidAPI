#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class L2capNetworkSpecifier;
}
namespace android::net
{
	class MacAddress;
}

namespace android::net
{
	class L2capNetworkSpecifier_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit L2capNetworkSpecifier_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		L2capNetworkSpecifier_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		L2capNetworkSpecifier_Builder();
		
		// Methods
		android::net::L2capNetworkSpecifier build() const;
		android::net::L2capNetworkSpecifier_Builder setHeaderCompression(jint arg0) const;
		android::net::L2capNetworkSpecifier_Builder setPsm(jint arg0) const;
		android::net::L2capNetworkSpecifier_Builder setRemoteAddress(android::net::MacAddress arg0) const;
		android::net::L2capNetworkSpecifier_Builder setRole(jint arg0) const;
	};
} // namespace android::net

