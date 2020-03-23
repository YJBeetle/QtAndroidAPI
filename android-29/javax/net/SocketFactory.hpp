#pragma once

#ifndef JAVAX_NET_SOCKETFACTORY
#define JAVAX_NET_SOCKETFACTORY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::javax::net
{
	class SocketFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		QAndroidJniObject createSocket(__jni_impl::java::net::InetAddress arg0, jint arg1);
		QAndroidJniObject createSocket(jstring arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3);
		QAndroidJniObject createSocket(__jni_impl::java::net::InetAddress arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3);
		QAndroidJniObject createSocket(jstring arg0, jint arg1);
		QAndroidJniObject createSocket();
	};
} // namespace __jni_impl::javax::net

#include "../../java/net/Socket.hpp"
#include "../../java/net/InetAddress.hpp"

namespace __jni_impl::javax::net
{
	// Fields
	
	// Constructors
	void SocketFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.SocketFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SocketFactory::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.SocketFactory",
			"getDefault",
			"()Ljavax/net/SocketFactory;");
	}
	QAndroidJniObject SocketFactory::createSocket(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SocketFactory::createSocket(jstring arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject SocketFactory::createSocket(__jni_impl::java::net::InetAddress arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject SocketFactory::createSocket(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;I)Ljava/net/Socket;",
			arg0,
			arg1);
	}
	QAndroidJniObject SocketFactory::createSocket()
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;");
	}
} // namespace __jni_impl::javax::net

namespace javax::net
{
	class SocketFactory : public __jni_impl::javax::net::SocketFactory
	{
	public:
		SocketFactory(QAndroidJniObject obj) { __thiz = obj; }
		SocketFactory()
		{
			__constructor();
		}
	};
} // namespace javax::net

#endif // JAVAX_NET_SOCKETFACTORY

