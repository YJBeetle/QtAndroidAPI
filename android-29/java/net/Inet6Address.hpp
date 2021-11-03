#pragma once

#include "./InetAddress.hpp"

class JByteArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::net
{
	class NetworkInterface;
}

namespace java::net
{
	class Inet6Address : public java::net::InetAddress
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Inet6Address(const char *className, const char *sig, Ts...agv) : java::net::InetAddress(className, sig, std::forward<Ts>(agv)...) {}
		Inet6Address(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::net::Inet6Address getByAddress(JString arg0, JByteArray arg1, jint arg2);
		static java::net::Inet6Address getByAddress(JString arg0, JByteArray arg1, java::net::NetworkInterface arg2);
		jboolean equals(JObject arg0) const;
		JByteArray getAddress() const;
		JString getHostAddress() const;
		jint getScopeId() const;
		java::net::NetworkInterface getScopedInterface() const;
		jint hashCode() const;
		jboolean isAnyLocalAddress() const;
		jboolean isIPv4CompatibleAddress() const;
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

