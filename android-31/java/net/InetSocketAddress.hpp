#pragma once

#include "../../JObject.hpp"
#include "./SocketAddress.hpp"

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
		InetSocketAddress(jstring arg0, jint arg1);
		InetSocketAddress(java::net::InetAddress arg0, jint arg1);
		
		// Methods
		static java::net::InetSocketAddress createUnresolved(jstring arg0, jint arg1);
		jboolean equals(jobject arg0);
		java::net::InetAddress getAddress();
		jstring getHostName();
		jstring getHostString();
		jint getPort();
		jint hashCode();
		jboolean isUnresolved();
		jstring toString();
	};
} // namespace java::net

