#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../lang/Void.hpp"
#include "./InetAddress.hpp"
#include "./Proxy.hpp"
#include "./SocketAddress.hpp"
#include "./SocketImpl.hpp"
#include "../nio/channels/SocketChannel.hpp"
#include "./Socket.hpp"

namespace java::net
{
	// Fields
	
	Socket::Socket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Socket::Socket()
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"()V"
		);
	}
	Socket::Socket(java::net::Proxy arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/net/Proxy;)V",
			arg0.__jniObject().object()
		);
	}
	Socket::Socket(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	Socket::Socket(java::net::InetAddress arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Socket::Socket(jstring arg0, jint arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/lang/String;IZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	Socket::Socket(java::net::InetAddress arg0, jint arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	Socket::Socket(jstring arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	Socket::Socket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;ILjava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	void Socket::setSocketImplFactory(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.Socket",
			"setSocketImplFactory",
			"(Ljava/net/SocketImplFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void Socket::bind(java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void Socket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Socket::connect(java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void Socket::connect(java::net::SocketAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Socket::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	QAndroidJniObject Socket::getInetAddress()
	{
		return __thiz.callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	QAndroidJniObject Socket::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jboolean Socket::getKeepAlive()
	{
		return __thiz.callMethod<jboolean>(
			"getKeepAlive",
			"()Z"
		);
	}
	QAndroidJniObject Socket::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint Socket::getLocalPort()
	{
		return __thiz.callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	QAndroidJniObject Socket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean Socket::getOOBInline()
	{
		return __thiz.callMethod<jboolean>(
			"getOOBInline",
			"()Z"
		);
	}
	jobject Socket::getOption(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Socket::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jint Socket::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint Socket::getReceiveBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	QAndroidJniObject Socket::getRemoteSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean Socket::getReuseAddress()
	{
		return __thiz.callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	jint Socket::getSendBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	jint Socket::getSoLinger()
	{
		return __thiz.callMethod<jint>(
			"getSoLinger",
			"()I"
		);
	}
	jint Socket::getSoTimeout()
	{
		return __thiz.callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jboolean Socket::getTcpNoDelay()
	{
		return __thiz.callMethod<jboolean>(
			"getTcpNoDelay",
			"()Z"
		);
	}
	jint Socket::getTrafficClass()
	{
		return __thiz.callMethod<jint>(
			"getTrafficClass",
			"()I"
		);
	}
	jboolean Socket::isBound()
	{
		return __thiz.callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean Socket::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean Socket::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean Socket::isInputShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isInputShutdown",
			"()Z"
		);
	}
	jboolean Socket::isOutputShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isOutputShutdown",
			"()Z"
		);
	}
	void Socket::sendUrgentData(jint arg0)
	{
		__thiz.callMethod<void>(
			"sendUrgentData",
			"(I)V",
			arg0
		);
	}
	void Socket::setKeepAlive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setKeepAlive",
			"(Z)V",
			arg0
		);
	}
	void Socket::setOOBInline(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOOBInline",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject Socket::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Socket::setPerformancePreferences(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setPerformancePreferences",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Socket::setReceiveBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void Socket::setReuseAddress(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	void Socket::setSendBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	void Socket::setSoLinger(jboolean arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSoLinger",
			"(ZI)V",
			arg0,
			arg1
		);
	}
	void Socket::setSoTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	void Socket::setTcpNoDelay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTcpNoDelay",
			"(Z)V",
			arg0
		);
	}
	void Socket::setTrafficClass(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0
		);
	}
	void Socket::shutdownInput()
	{
		__thiz.callMethod<void>(
			"shutdownInput",
			"()V"
		);
	}
	void Socket::shutdownOutput()
	{
		__thiz.callMethod<void>(
			"shutdownOutput",
			"()V"
		);
	}
	QAndroidJniObject Socket::supportedOptions()
	{
		return __thiz.callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
	jstring Socket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

