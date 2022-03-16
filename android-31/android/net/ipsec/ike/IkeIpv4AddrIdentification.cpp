#include "../../../../JObject.hpp"
#include "../../../../java/net/Inet4Address.hpp"
#include "./IkeIpv4AddrIdentification.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	java::net::Inet4Address IkeIpv4AddrIdentification::ipv4Address()
	{
		return getObjectField(
			"ipv4Address",
			"Ljava/net/Inet4Address;"
		);
	}
	
	// Constructors
	IkeIpv4AddrIdentification::IkeIpv4AddrIdentification(java::net::Inet4Address arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeIpv4AddrIdentification",
			"(Ljava/net/Inet4Address;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean IkeIpv4AddrIdentification::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint IkeIpv4AddrIdentification::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

