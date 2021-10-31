#include "../../java/net/InetAddress.hpp"
#include "../../java/net/ServerSocket.hpp"
#include "./ServerSocketFactory.hpp"

namespace javax::net
{
	// Fields
	
	// QAndroidJniObject forward
	ServerSocketFactory::ServerSocketFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	javax::net::ServerSocketFactory ServerSocketFactory::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.ServerSocketFactory",
			"getDefault",
			"()Ljavax/net/ServerSocketFactory;"
		);
	}
	java::net::ServerSocket ServerSocketFactory::createServerSocket()
	{
		return callObjectMethod(
			"createServerSocket",
			"()Ljava/net/ServerSocket;"
		);
	}
	java::net::ServerSocket ServerSocketFactory::createServerSocket(jint arg0)
	{
		return callObjectMethod(
			"createServerSocket",
			"(I)Ljava/net/ServerSocket;",
			arg0
		);
	}
	java::net::ServerSocket ServerSocketFactory::createServerSocket(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"createServerSocket",
			"(II)Ljava/net/ServerSocket;",
			arg0,
			arg1
		);
	}
	java::net::ServerSocket ServerSocketFactory::createServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2)
	{
		return callObjectMethod(
			"createServerSocket",
			"(IILjava/net/InetAddress;)Ljava/net/ServerSocket;",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace javax::net

