#pragma once

#include "../../JObject.hpp"

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
	class InetAddress : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InetAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InetAddress(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jarray getAllByName(jstring arg0);
		static java::net::InetAddress getByAddress(jbyteArray arg0);
		static java::net::InetAddress getByAddress(jstring arg0, jbyteArray arg1);
		static java::net::InetAddress getByName(jstring arg0);
		static java::net::InetAddress getLocalHost();
		static java::net::InetAddress getLoopbackAddress();
		jboolean equals(jobject arg0);
		jbyteArray getAddress();
		jstring getCanonicalHostName();
		jstring getHostAddress();
		jstring getHostName();
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
		jboolean isReachable(jint arg0);
		jboolean isReachable(java::net::NetworkInterface arg0, jint arg1, jint arg2);
		jboolean isSiteLocalAddress();
		jstring toString();
	};
} // namespace java::net

