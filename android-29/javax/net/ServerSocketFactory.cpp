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
	QAndroidJniObject ServerSocketFactory::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ServerSocketFactory",
			"getDefault",
			"()Ljavax/net/ServerSocketFactory;"
		);
	}
	QAndroidJniObject ServerSocketFactory::createServerSocket()
	{
		return callObjectMethod(
			"createServerSocket",
			"()Ljava/net/ServerSocket;"
		);
	}
	QAndroidJniObject ServerSocketFactory::createServerSocket(jint arg0)
	{
		return callObjectMethod(
			"createServerSocket",
			"(I)Ljava/net/ServerSocket;",
			arg0
		);
	}
	QAndroidJniObject ServerSocketFactory::createServerSocket(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"createServerSocket",
			"(II)Ljava/net/ServerSocket;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ServerSocketFactory::createServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2)
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

