#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		InetSocketAddress(QAndroidJniObject obj);
		// Constructors
		InetSocketAddress(jint arg0);
		InetSocketAddress(jstring arg0, jint arg1);
		InetSocketAddress(java::net::InetAddress arg0, jint arg1);
		InetSocketAddress() = default;
		
		// Methods
		static QAndroidJniObject createUnresolved(jstring arg0, jint arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject getAddress();
		jstring getHostName();
		jstring getHostString();
		jint getPort();
		jint hashCode();
		jboolean isUnresolved();
		jstring toString();
	};
} // namespace java::net

