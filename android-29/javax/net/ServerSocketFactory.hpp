#pragma once

#ifndef JAVAX_NET_SERVERSOCKETFACTORY
#define JAVAX_NET_SERVERSOCKETFACTORY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class ServerSocket;
}

namespace __jni_impl::javax::net
{
	class ServerSocketFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		QAndroidJniObject createServerSocket();
		QAndroidJniObject createServerSocket(jint arg0);
		QAndroidJniObject createServerSocket(jint arg0, jint arg1);
		QAndroidJniObject createServerSocket(jint arg0, jint arg1, __jni_impl::java::net::InetAddress arg2);
	};
} // namespace __jni_impl::javax::net

#include "../../java/net/InetAddress.hpp"
#include "../../java/net/ServerSocket.hpp"

namespace __jni_impl::javax::net
{
	// Fields
	
	// Constructors
	void ServerSocketFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ServerSocketFactory",
			"(V)V");
	}
	
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
	QAndroidJniObject ServerSocketFactory::createServerSocket(jint arg0, jint arg1, __jni_impl::java::net::InetAddress arg2)
	{
		return __thiz.callObjectMethod(
			"createServerSocket",
			"(IILjava/net/InetAddress;)Ljava/net/ServerSocket;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::net

namespace javax::net
{
	class ServerSocketFactory : public __jni_impl::javax::net::ServerSocketFactory
	{
	public:
		ServerSocketFactory(QAndroidJniObject obj) { __thiz = obj; }
		ServerSocketFactory()
		{
			__constructor();
		}
	};
} // namespace javax::net

#endif // JAVAX_NET_SERVERSOCKETFACTORY

