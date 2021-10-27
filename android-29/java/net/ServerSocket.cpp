#include "../lang/Void.hpp"
#include "./InetAddress.hpp"
#include "./Socket.hpp"
#include "./SocketAddress.hpp"
#include "./SocketImpl.hpp"
#include "../nio/channels/ServerSocketChannel.hpp"
#include "./ServerSocket.hpp"

namespace java::net
{
	// Fields
	
	ServerSocket::ServerSocket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ServerSocket::ServerSocket()
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"()V"
		);
	}
	ServerSocket::ServerSocket(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"(I)V",
			arg0
		);
	}
	ServerSocket::ServerSocket(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.ServerSocket",
			"(II)V",
			arg0,
			arg1
		);
	}
	ServerSocket::ServerSocket(jint &arg0, jint &arg1, java::net::InetAddress &arg2)
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
	void ServerSocket::setSocketFactory(__JniBaseClass arg0)
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
	void ServerSocket::bind(java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void ServerSocket::bind(java::net::SocketAddress arg0, jint arg1)
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
	jobject ServerSocket::getOption(__JniBaseClass arg0)
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
	QAndroidJniObject ServerSocket::setOption(__JniBaseClass arg0, jobject arg1)
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
} // namespace java::net

