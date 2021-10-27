#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InetAddress.hpp"


namespace java::net
{
	class Inet4Address : public java::net::InetAddress
	{
	public:
		// Fields
		
		Inet4Address(QAndroidJniObject obj);
		// Constructors
		Inet4Address() = default;
		
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

