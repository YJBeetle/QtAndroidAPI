#pragma once

#include "../../JObject.hpp"
#include "./InetAddress.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
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
		static java::net::Inet6Address getByAddress(jstring arg0, jbyteArray arg1, jint arg2);
		static java::net::Inet6Address getByAddress(jstring arg0, jbyteArray arg1, java::net::NetworkInterface arg2);
		jboolean equals(jobject arg0);
		jbyteArray getAddress();
		jstring getHostAddress();
		jint getScopeId();
		java::net::NetworkInterface getScopedInterface();
		jint hashCode();
		jboolean isAnyLocalAddress();
		jboolean isIPv4CompatibleAddress();
		jboolean isLinkLocalAddress();
		jboolean isLoopbackAddress();
		jboolean isMCGlobal();
		jboolean isMCLinkLocal();
		jboolean isMCNodeLocal();
		jboolean isMCOrgLocal();
		jboolean isMCSiteLocal();
		jboolean isMulticastAddress();
		jboolean isSiteLocalAddress();
	};
} // namespace java::net

