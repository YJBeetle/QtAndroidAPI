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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InetAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InetAddress(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray getAllByName(JString arg0);
		static java::net::InetAddress getByAddress(JByteArray arg0);
		static java::net::InetAddress getByAddress(JString arg0, JByteArray arg1);
		static java::net::InetAddress getByName(JString arg0);
		static java::net::InetAddress getLocalHost();
		static java::net::InetAddress getLoopbackAddress();
		jboolean equals(JObject arg0) const;
		JByteArray getAddress() const;
		JString getCanonicalHostName() const;
		JString getHostAddress() const;
		JString getHostName() const;
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
		jboolean isReachable(jint arg0) const;
		jboolean isReachable(java::net::NetworkInterface arg0, jint arg1, jint arg2) const;
		jboolean isSiteLocalAddress() const;
		JString toString() const;
	};
} // namespace java::net

