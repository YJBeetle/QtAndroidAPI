#pragma once

#ifndef JAVA_NET_SOCKET
#define JAVA_NET_SOCKET

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class SocketImpl;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::net
{
	class Proxy;
}
namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::nio::channels
{
	class SocketChannel;
}

namespace __jni_impl::java::net
{
	class Socket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::net::InetAddress arg0, jint arg1);
		void __constructor(jstring arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3);
		void __constructor(__jni_impl::java::net::InetAddress arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3);
		void __constructor(jstring arg0, jint arg1, jboolean arg2);
		void __constructor(__jni_impl::java::net::InetAddress arg0, jint arg1, jboolean arg2);
		void __constructor();
		void __constructor(__jni_impl::java::net::Proxy arg0);
		void __constructor(jstring arg0, jint arg1);
		
		// Methods
		QAndroidJniObject toString();
		void connect(__jni_impl::java::net::SocketAddress arg0);
		void connect(__jni_impl::java::net::SocketAddress arg0, jint arg1);
		void close();
		jint getPort();
		QAndroidJniObject getInputStream();
		QAndroidJniObject getChannel();
		void bind(__jni_impl::java::net::SocketAddress arg0);
		jboolean isConnected();
		jboolean isClosed();
		QAndroidJniObject getOutputStream();
		jboolean isBound();
		QAndroidJniObject getOption(__jni_impl::__JniBaseClass arg0);
		jint getLocalPort();
		QAndroidJniObject getLocalAddress();
		jboolean isInputShutdown();
		jboolean isOutputShutdown();
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		void sendUrgentData(jint arg0);
		void shutdownInput();
		void shutdownOutput();
		QAndroidJniObject supportedOptions();
		QAndroidJniObject getRemoteSocketAddress();
		QAndroidJniObject getLocalSocketAddress();
		void setTcpNoDelay(jboolean arg0);
		jboolean getTcpNoDelay();
		void setSoLinger(jboolean arg0, jint arg1);
		jint getSoLinger();
		void setOOBInline(jboolean arg0);
		jboolean getOOBInline();
		void setSoTimeout(jint arg0);
		jint getSoTimeout();
		void setSendBufferSize(jint arg0);
		jint getSendBufferSize();
		void setReceiveBufferSize(jint arg0);
		jint getReceiveBufferSize();
		void setKeepAlive(jboolean arg0);
		jboolean getKeepAlive();
		void setTrafficClass(jint arg0);
		jint getTrafficClass();
		void setReuseAddress(jboolean arg0);
		jboolean getReuseAddress();
		static void setSocketImplFactory(__jni_impl::__JniBaseClass arg0);
		void setPerformancePreferences(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject getInetAddress();
	};
} // namespace __jni_impl::java::net

#include "SocketImpl.hpp"
#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "InetAddress.hpp"
#include "SocketAddress.hpp"
#include "Proxy.hpp"
#include "../lang/Void.hpp"
#include "../nio/channels/SocketChannel.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void Socket::__constructor(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Socket::__constructor(jstring arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void Socket::__constructor(__jni_impl::java::net::InetAddress arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;ILjava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void Socket::__constructor(jstring arg0, jint arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/lang/String;IZ)V",
			arg0,
			arg1,
			arg2);
	}
	void Socket::__constructor(__jni_impl::java::net::InetAddress arg0, jint arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void Socket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"()V");
	}
	void Socket::__constructor(__jni_impl::java::net::Proxy arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/net/Proxy;)V",
			arg0.__jniObject().object());
	}
	void Socket::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject Socket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void Socket::connect(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object());
	}
	void Socket::connect(__jni_impl::java::net::SocketAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Socket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jint Socket::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	QAndroidJniObject Socket::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;");
	}
	QAndroidJniObject Socket::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/SocketChannel;");
	}
	void Socket::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object());
	}
	jboolean Socket::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z");
	}
	jboolean Socket::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z");
	}
	QAndroidJniObject Socket::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;");
	}
	jboolean Socket::isBound()
	{
		return __thiz.callMethod<jboolean>(
			"isBound",
			"()Z");
	}
	QAndroidJniObject Socket::getOption(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	jint Socket::getLocalPort()
	{
		return __thiz.callMethod<jint>(
			"getLocalPort",
			"()I");
	}
	QAndroidJniObject Socket::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;");
	}
	jboolean Socket::isInputShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isInputShutdown",
			"()Z");
	}
	jboolean Socket::isOutputShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isOutputShutdown",
			"()Z");
	}
	QAndroidJniObject Socket::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1);
	}
	void Socket::sendUrgentData(jint arg0)
	{
		__thiz.callMethod<void>(
			"sendUrgentData",
			"(I)V",
			arg0);
	}
	void Socket::shutdownInput()
	{
		__thiz.callMethod<void>(
			"shutdownInput",
			"()V");
	}
	void Socket::shutdownOutput()
	{
		__thiz.callMethod<void>(
			"shutdownOutput",
			"()V");
	}
	QAndroidJniObject Socket::supportedOptions()
	{
		return __thiz.callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject Socket::getRemoteSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;");
	}
	QAndroidJniObject Socket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;");
	}
	void Socket::setTcpNoDelay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTcpNoDelay",
			"(Z)V",
			arg0);
	}
	jboolean Socket::getTcpNoDelay()
	{
		return __thiz.callMethod<jboolean>(
			"getTcpNoDelay",
			"()Z");
	}
	void Socket::setSoLinger(jboolean arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSoLinger",
			"(ZI)V",
			arg0,
			arg1);
	}
	jint Socket::getSoLinger()
	{
		return __thiz.callMethod<jint>(
			"getSoLinger",
			"()I");
	}
	void Socket::setOOBInline(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOOBInline",
			"(Z)V",
			arg0);
	}
	jboolean Socket::getOOBInline()
	{
		return __thiz.callMethod<jboolean>(
			"getOOBInline",
			"()Z");
	}
	void Socket::setSoTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0);
	}
	jint Socket::getSoTimeout()
	{
		return __thiz.callMethod<jint>(
			"getSoTimeout",
			"()I");
	}
	void Socket::setSendBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0);
	}
	jint Socket::getSendBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getSendBufferSize",
			"()I");
	}
	void Socket::setReceiveBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0);
	}
	jint Socket::getReceiveBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getReceiveBufferSize",
			"()I");
	}
	void Socket::setKeepAlive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setKeepAlive",
			"(Z)V",
			arg0);
	}
	jboolean Socket::getKeepAlive()
	{
		return __thiz.callMethod<jboolean>(
			"getKeepAlive",
			"()Z");
	}
	void Socket::setTrafficClass(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0);
	}
	jint Socket::getTrafficClass()
	{
		return __thiz.callMethod<jint>(
			"getTrafficClass",
			"()I");
	}
	void Socket::setReuseAddress(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0);
	}
	jboolean Socket::getReuseAddress()
	{
		return __thiz.callMethod<jboolean>(
			"getReuseAddress",
			"()Z");
	}
	void Socket::setSocketImplFactory(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.Socket",
			"setSocketImplFactory",
			"(Ljava/net/SocketImplFactory;)V",
			arg0.__jniObject().object());
	}
	void Socket::setPerformancePreferences(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setPerformancePreferences",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject Socket::getInetAddress()
	{
		return __thiz.callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;");
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class Socket : public __jni_impl::java::net::Socket
	{
	public:
		Socket(QAndroidJniObject obj) { __thiz = obj; }
		Socket(__jni_impl::java::net::InetAddress arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Socket(jstring arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Socket(__jni_impl::java::net::InetAddress arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Socket(jstring arg0, jint arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Socket(__jni_impl::java::net::InetAddress arg0, jint arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Socket()
		{
			__constructor();
		}
		Socket(__jni_impl::java::net::Proxy arg0)
		{
			__constructor(
				arg0);
		}
		Socket(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

#endif // JAVA_NET_SOCKET

