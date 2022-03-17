#pragma once

#include "./SocketAddress.def.hpp"

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
	class InetAddress;
}

namespace java::net
{
	class InetSocketAddress : public java::net::SocketAddress
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InetSocketAddress(const char *className, const char *sig, Ts...agv) : java::net::SocketAddress(className, sig, std::forward<Ts>(agv)...) {}
		InetSocketAddress(QAndroidJniObject obj) : java::net::SocketAddress(obj) {}
		
		// Constructors
		InetSocketAddress(jint arg0);
		InetSocketAddress(JString arg0, jint arg1);
		InetSocketAddress(java::net::InetAddress arg0, jint arg1);
		
		// Methods
		static java::net::InetSocketAddress createUnresolved(JString arg0, jint arg1);
		jboolean equals(JObject arg0) const;
		java::net::InetAddress getAddress() const;
		JString getHostName() const;
		JString getHostString() const;
		jint getPort() const;
		jint hashCode() const;
		jboolean isUnresolved() const;
		JString toString() const;
	};
} // namespace java::net

