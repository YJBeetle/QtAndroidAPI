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
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeIpv4AddrIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeIpv4AddrIdentification(QJniObject obj);
		
		// Constructors
		IkeIpv4AddrIdentification(java::net::Inet4Address arg0);
		
		// Methods
		jboolean equals(JObject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

