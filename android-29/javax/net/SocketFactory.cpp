#include "../../java/net/InetAddress.hpp"
#include "../../java/net/Socket.hpp"
#include "./SocketFactory.hpp"

namespace javax::net
{
	// Fields
	
	// QAndroidJniObject forward
	SocketFactory::SocketFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject SocketFactory::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.SocketFactory",
			"getDefault",
			"()Ljavax/net/SocketFactory;"
		);
	}
	QAndroidJniObject SocketFactory::createSocket()
	{
		return callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;"
		);
	}
	QAndroidJniObject SocketFactory::createSocket(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;I)Ljava/net/Socket;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SocketFactory::createSocket(java::net::InetAddress arg0, jint arg1)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject SocketFactory::createSocket(jstring arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	QAndroidJniObject SocketFactory::createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
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
