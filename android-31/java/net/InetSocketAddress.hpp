#pragma once

#include "./SocketAddress.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit InetSocketAddress(const char *className, const char *sig, Ts...agv) : java::net::SocketAddress(className, sig, std::forward<Ts>(agv)...) {}
		InetSocketAddress(QJniObject obj);
		
		// Constructors
		InetSocketAddress(jint arg0);
		InetSocketAddress(JString arg0, jint arg1);
		InetSocketAddress(java::net::InetAddress arg0, jint arg1);
		
		// Methods
		static java::net::InetSocketAddress createUnresolved(JString arg0, jint arg1);
		jboolean equals(JObject arg0);
		java::net::InetAddress getAddress();
		JString getHostName();
		JString getHostString();
		jint getPort();
		jint hashCode();
		jboolean isUnresolved();
		JString toString();
	};
} // namespace java::net

