#pragma once

#include "./IkeIdentification.hpp"

class JObject;
namespace java::net
{
	class Inet4Address;
}

namespace android::net::ipsec::ike
{
	class IkeIpv4AddrIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		java::net::Inet4Address ipv4Address();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeIpv4AddrIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeIpv4AddrIdentification(QAndroidJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
		
		// Constructors
		IkeIpv4AddrIdentification(java::net::Inet4Address arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

