#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net::vcn
{
	class VcnConfig;
}
namespace android::net::vcn
{
	class VcnGatewayConnectionConfig;
}

namespace android::net::vcn
{
	class VcnConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VcnConfig_Builder(QJniObject obj);
		
		// Constructors
		VcnConfig_Builder(android::content::Context arg0);
		
		// Methods
		android::net::vcn::VcnConfig_Builder addGatewayConnectionConfig(android::net::vcn::VcnGatewayConnectionConfig arg0);
		android::net::vcn::VcnConfig build();
	};
} // namespace android::net::vcn

