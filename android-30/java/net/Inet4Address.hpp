#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InetAddress.hpp"


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
		jboolean equals(jobject arg0);
		jbyteArray getAddress();
		jstring getHostAddress();
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

