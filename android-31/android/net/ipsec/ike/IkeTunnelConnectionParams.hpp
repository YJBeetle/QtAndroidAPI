#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::ipsec::ike
{
	class IkeSessionParams;
}
namespace android::net::ipsec::ike
{
	class TunnelModeChildSessionParams;
}

namespace android::net::ipsec::ike
{
	class IkeTunnelConnectionParams : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeTunnelConnectionParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IkeTunnelConnectionParams(QJniObject obj);
		
		// Constructors
		IkeTunnelConnectionParams(android::net::ipsec::ike::IkeSessionParams arg0, android::net::ipsec::ike::TunnelModeChildSessionParams arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		android::net::ipsec::ike::IkeSessionParams getIkeSessionParams();
		android::net::ipsec::ike::TunnelModeChildSessionParams getTunnelModeChildSessionParams();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

