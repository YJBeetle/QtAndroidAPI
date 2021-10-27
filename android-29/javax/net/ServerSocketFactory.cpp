#include "../../java/net/InetAddress.hpp"
#include "../../java/net/ServerSocket.hpp"
#include "./ServerSocketFactory.hpp"

namespace javax::net
{
	// Fields
	
	ServerSocketFactory::ServerSocketFactory(QAndroidJniObject obj) { __thiz = obj; }
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
		return __thiz.callObjectMethod(
			"createServerSocket",
			"()Ljava/net/ServerSocket;"
		);
	}
	QAndroidJniObject ServerSocketFactory::createServerSocket(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createServerSocket",
			"(I)Ljava/net/ServerSocket;",
			arg0
		);
	}
	QAndroidJniObject ServerSocketFactory::createServerSocket(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createServerSocket",
			"(II)Ljava/net/ServerSocket;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ServerSocketFactory::createServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2)
	{
		return __thiz.callObjectMethod(
			"createServerSocket",
			"(IILjava/net/InetAddress;)Ljava/net/ServerSocket;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace javax::net

