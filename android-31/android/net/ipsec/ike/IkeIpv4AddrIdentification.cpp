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
	
	// QAndroidJniObject forward
	IkeIpv4AddrIdentification::IkeIpv4AddrIdentification(QAndroidJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
	
	// Constructors
	IkeIpv4AddrIdentification::IkeIpv4AddrIdentification(java::net::Inet4Address arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeIpv4AddrIdentification",
			"(Ljava/net/Inet4Address;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean IkeIpv4AddrIdentification::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint IkeIpv4AddrIdentification::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike
