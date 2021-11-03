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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Inet4Address(const char *className, const char *sig, Ts...agv) : java::net::InetAddress(className, sig, std::forward<Ts>(agv)...) {}
		Inet4Address(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JByteArray getAddress();
		JString getHostAddress();
		jint hashCode();
		jboolean isAnyLocalAddress();
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

