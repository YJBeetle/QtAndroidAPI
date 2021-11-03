#pragma once

#include "./InetAddress.hpp"

class JByteArray;
class JObject;
class JString;

namespace java::net
{
	class Inet4Address : public java::net::InetAddress
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Inet4Address(const char *className, const char *sig, Ts...agv) : java::net::InetAddress(className, sig, std::forward<Ts>(agv)...) {}
		Inet4Address(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getAddress() const;
		JString getHostAddress() const;
		jint hashCode() const;
		jboolean isAnyLocalAddress() const;
		jboolean isLinkLocalAddress() const;
		jboolean isLoopbackAddress() const;
		jboolean isMCGlobal() const;
		jboolean isMCLinkLocal() const;
		jboolean isMCNodeLocal() const;
		jboolean isMCOrgLocal() const;
		jboolean isMCSiteLocal() const;
		jboolean isMulticastAddress() const;
		jboolean isSiteLocalAddress() const;
	};
} // namespace java::net

