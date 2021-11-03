#include "../../../../JObject.hpp"
#include "../../../../java/net/Inet6Address.hpp"
#include "./IkeIpv6AddrIdentification.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	java::net::Inet6Address IkeIpv6AddrIdentification::ipv6Address()
	{
		return getObjectField(
			"ipv6Address",
			"Ljava/net/Inet6Address;"
		);
	}
	
	// QJniObject forward
	IkeIpv6AddrIdentification::IkeIpv6AddrIdentification(QJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
	
	// Constructors
	IkeIpv6AddrIdentification::IkeIpv6AddrIdentification(java::net::Inet6Address arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeIpv6AddrIdentification",
			"(Ljava/net/Inet6Address;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean IkeIpv6AddrIdentification::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint IkeIpv6AddrIdentification::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

