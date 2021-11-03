#include "../../JString.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/Socket.hpp"
#include "./SocketFactory.hpp"

namespace javax::net
{
	// Fields
	
	// QAndroidJniObject forward
	SocketFactory::SocketFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::net::SocketFactory SocketFactory::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.SocketFactory",
			"getDefault",
			"()Ljavax/net/SocketFactory;"
		);
	}
	java::net::Socket SocketFactory::createSocket()
	{
		return callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;"
		);
	}
	java::net::Socket SocketFactory::createSocket(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;I)Ljava/net/Socket;",
			arg0.object<jstring>(),
			arg1
		);
	}
	java::net::Socket SocketFactory::createSocket(java::net::InetAddress arg0, jint arg1)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object(),
			arg1
		);
	}
	java::net::Socket SocketFactory::createSocket(JString arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	java::net::Socket SocketFactory::createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
} // namespace javax::net

