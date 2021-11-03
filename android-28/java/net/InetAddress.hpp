#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
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
	class InetAddress : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InetAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InetAddress(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray getAllByName(JString arg0);
		static java::net::InetAddress getByAddress(JByteArray arg0);
		static java::net::InetAddress getByAddress(JString arg0, JByteArray arg1);
		static java::net::InetAddress getByName(JString arg0);
		static java::net::InetAddress getLocalHost();
		static java::net::InetAddress getLoopbackAddress();
		jboolean equals(JObject arg0);
		JByteArray getAddress();
		JString getCanonicalHostName();
		JString getHostAddress();
		JString getHostName();
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
		JString toString();
	};
} // namespace java::net

