#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/net/Inet6Address.def.hpp"
#include "./IkeIpv6AddrIdentification.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	inline java::net::Inet6Address IkeIpv6AddrIdentification::ipv6Address()
	{
		return getObjectField(
			"ipv6Address",
			"Ljava/net/Inet6Address;"
		);
	}
	
	// Constructors
	inline IkeIpv6AddrIdentification::IkeIpv6AddrIdentification(java::net::Inet6Address arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeIpv6AddrIdentification",
			"(Ljava/net/Inet6Address;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean IkeIpv6AddrIdentification::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint IkeIpv6AddrIdentification::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers
#include "./IkeIdentification.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
