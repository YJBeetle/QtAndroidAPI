#pragma once

#ifndef JAVA_NET_SERVERSOCKET
#define JAVA_NET_SERVERSOCKET

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class SocketImpl;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::nio::channels
{
	class ServerSocketChannel;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}

namespace __jni_impl::java::net
{
	class ServerSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, __jni_impl::java::net::InetAddress arg2);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject accept();
		void close();
		QAndroidJniObject getChannel();
		void bind(__jni_impl::java::net::SocketAddress arg0);
		void bind(__jni_impl::java::net::SocketAddress arg0, jint arg1);
		QAndroidJniObject getInetAddress();
		jboolean isBound();
		QAndroidJniObject getOption(__jni_impl::__JniBaseClass arg0);
		jint getLocalPort();
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject supportedOptions();
		QAndroidJniObject getLocalSocketAddress();
		void setSoTimeout(jint arg0);
		jint getSoTimeout();
		void setReceiveBufferSize(jint arg0);
		jint getReceiveBufferSize();
		void setReuseAddress(jboolean arg0);
		jboolean getReuseAddress();
		void setPerformancePreferences(jint arg0, jint arg1, jint arg2);
		static void setSocketFactory(__jni_impl::__JniBaseClass arg0);
		jboolean isClosed();
	};
} // namespace __jni_impl::java::net

#include "SocketImpl.hpp"
#include "InetAddress.hpp"
#include "../lang/Void.hpp"
#include "Socket.hpp"
#include "../nio/channels/ServerSocketChannel.hpp"
#include "SocketAddress.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void ServerSocket::__constructor(jint arg0, jint arg1, __jni_impl::java::net::InetAddress arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"(IILjava/net/InetAddress;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void ServerSocket::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"(II)V",
			arg0,
			arg1);
	}
	void ServerSocket::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"(I)V",
			arg0);
	}
	void ServerSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ServerSocket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ServerSocket::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Ljava/net/Socket;");
	}
	void ServerSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject ServerSocket::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/ServerSocketChannel;");
	}
	void ServerSocket::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object());
	}
	void ServerSocket::bind(__jni_impl::java::net::SocketAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ServerSocket::getInetAddress()
	{
		return __thiz.callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;");
	}
	jboolean ServerSocket::isBound()
	{
		return __thiz.callMethod<jboolean>(
			"isBound",
			"()Z");
	}
	QAndroidJniObject ServerSocket::getOption(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	jint ServerSocket::getLocalPort()
	{
		return __thiz.callMethod<jint>(
			"getLocalPort",
			"()I");
	}
	QAndroidJniObject ServerSocket::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/ServerSocket;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ServerSocket::supportedOptions()
	{
		return __thiz.callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject ServerSocket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;");
	}
	void ServerSocket::setSoTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0);
	}
	jint ServerSocket::getSoTimeout()
	{
		return __thiz.callMethod<jint>(
			"getSoTimeout",
			"()I");
	}
	void ServerSocket::setReceiveBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0);
	}
	jint ServerSocket::getReceiveBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getReceiveBufferSize",
			"()I");
	}
	void ServerSocket::setReuseAddress(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0);
	}
	jboolean ServerSocket::getReuseAddress()
	{
		return __thiz.callMethod<jboolean>(
			"getReuseAddress",
			"()Z");
	}
	void ServerSocket::setPerformancePreferences(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setPerformancePreferences",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void ServerSocket::setSocketFactory(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.ServerSocket",
			"setSocketFactory",
			"(Ljava/net/SocketImplFactory;)V",
			arg0.__jniObject().object());
	}
	jboolean ServerSocket::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z");
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class ServerSocket : public __jni_impl::java::net::ServerSocket
	{
	public:
		ServerSocket(QAndroidJniObject obj) { __thiz = obj; }
		ServerSocket(jint arg0, jint arg1, __jni_impl::java::net::InetAddress arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ServerSocket(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ServerSocket(jint arg0)
		{
			__constructor(
				arg0);
		}
		ServerSocket()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_SERVERSOCKET

