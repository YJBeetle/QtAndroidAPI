#pragma once

#ifndef JAVA_NET_SERVERSOCKET
#define JAVA_NET_SERVERSOCKET

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::net
{
	class SocketImpl;
}
namespace __jni_impl::java::nio::channels
{
	class ServerSocketChannel;
}

namespace __jni_impl::java::net
{
	class ServerSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jint arg0, jint arg1, __jni_impl::java::net::InetAddress arg2);
		
		// Methods
		static void setSocketFactory(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject accept();
		void bind(__jni_impl::java::net::SocketAddress arg0);
		void bind(__jni_impl::java::net::SocketAddress arg0, jint arg1);
		void close();
		QAndroidJniObject getChannel();
		QAndroidJniObject getInetAddress();
		jint getLocalPort();
		QAndroidJniObject getLocalSocketAddress();
		jobject getOption(__jni_impl::__JniBaseClass arg0);
		jint getReceiveBufferSize();
		jboolean getReuseAddress();
		jint getSoTimeout();
		jboolean isBound();
		jboolean isClosed();
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		void setPerformancePreferences(jint arg0, jint arg1, jint arg2);
		void setReceiveBufferSize(jint arg0);
		void setReuseAddress(jboolean arg0);
		void setSoTimeout(jint arg0);
		QAndroidJniObject supportedOptions();
		jstring toString();
	};
} // namespace __jni_impl::java::net

#include "../lang/Void.hpp"
#include "InetAddress.hpp"
#include "Socket.hpp"
#include "SocketAddress.hpp"
#include "SocketImpl.hpp"
#include "../nio/channels/ServerSocketChannel.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void ServerSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"()V"
		);
	}
	void ServerSocket::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"(I)V",
			arg0
		);
	}
	void ServerSocket::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ServerSocket::__constructor(jint arg0, jint arg1, __jni_impl::java::net::InetAddress arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"(IILjava/net/InetAddress;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void ServerSocket::setSocketFactory(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.ServerSocket",
			"setSocketFactory",
			"(Ljava/net/SocketImplFactory;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ServerSocket::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Ljava/net/Socket;"
		);
	}
	void ServerSocket::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void ServerSocket::bind(__jni_impl::java::net::SocketAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ServerSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject ServerSocket::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	QAndroidJniObject ServerSocket::getInetAddress()
	{
		return __thiz.callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint ServerSocket::getLocalPort()
	{
		return __thiz.callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	QAndroidJniObject ServerSocket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jobject ServerSocket::getOption(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jint ServerSocket::getReceiveBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	jboolean ServerSocket::getReuseAddress()
	{
		return __thiz.callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	jint ServerSocket::getSoTimeout()
	{
		return __thiz.callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jboolean ServerSocket::isBound()
	{
		return __thiz.callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean ServerSocket::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	QAndroidJniObject ServerSocket::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/ServerSocket;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ServerSocket::setPerformancePreferences(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setPerformancePreferences",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ServerSocket::setReceiveBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void ServerSocket::setReuseAddress(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	void ServerSocket::setSoTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject ServerSocket::supportedOptions()
	{
		return __thiz.callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
	jstring ServerSocket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class ServerSocket : public __jni_impl::java::net::ServerSocket
	{
	public:
		ServerSocket(QAndroidJniObject obj) { __thiz = obj; }
		ServerSocket()
		{
			__constructor();
		}
		ServerSocket(jint arg0)
		{
			__constructor(
				arg0);
		}
		ServerSocket(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ServerSocket(jint arg0, jint arg1, __jni_impl::java::net::InetAddress arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::net

#endif // JAVA_NET_SERVERSOCKET

