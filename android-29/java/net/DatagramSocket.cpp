#include "../io/IOException.hpp"
#include "./DatagramPacket.hpp"
#include "./DatagramSocketImpl.hpp"
#include "./InetAddress.hpp"
#include "./SocketAddress.hpp"
#include "./SocketException.hpp"
#include "../nio/channels/DatagramChannel.hpp"
#include "./DatagramSocket.hpp"

namespace java::net
{
	// Fields
	
	DatagramSocket::DatagramSocket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DatagramSocket::DatagramSocket()
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"()V"
		);
	}
	DatagramSocket::DatagramSocket(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"(I)V",
			arg0
		);
	}
	DatagramSocket::DatagramSocket(java::net::SocketAddress &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	DatagramSocket::DatagramSocket(jint &arg0, java::net::InetAddress &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"(ILjava/net/InetAddress;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void DatagramSocket::setDatagramSocketImplFactory(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.DatagramSocket",
			"setDatagramSocketImplFactory",
			"(Ljava/net/DatagramSocketImplFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::bind(java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void DatagramSocket::connect(java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::connect(java::net::InetAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatagramSocket::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	jboolean DatagramSocket::getBroadcast()
	{
		return __thiz.callMethod<jboolean>(
			"getBroadcast",
			"()Z"
		);
	}
	QAndroidJniObject DatagramSocket::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject DatagramSocket::getInetAddress()
	{
		return __thiz.callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	QAndroidJniObject DatagramSocket::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint DatagramSocket::getLocalPort()
	{
		return __thiz.callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	QAndroidJniObject DatagramSocket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jobject DatagramSocket::getOption(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jint DatagramSocket::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint DatagramSocket::getReceiveBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	QAndroidJniObject DatagramSocket::getRemoteSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean DatagramSocket::getReuseAddress()
	{
		return __thiz.callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	jint DatagramSocket::getSendBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	jint DatagramSocket::getSoTimeout()
	{
		return __thiz.callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jint DatagramSocket::getTrafficClass()
	{
		return __thiz.callMethod<jint>(
			"getTrafficClass",
			"()I"
		);
	}
	jboolean DatagramSocket::isBound()
	{
		return __thiz.callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean DatagramSocket::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean DatagramSocket::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void DatagramSocket::receive(java::net::DatagramPacket arg0)
	{
		__thiz.callMethod<void>(
			"receive",
			"(Ljava/net/DatagramPacket;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::send(java::net::DatagramPacket arg0)
	{
		__thiz.callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::setBroadcast(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBroadcast",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject DatagramSocket::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/DatagramSocket;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatagramSocket::setReceiveBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setReuseAddress(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	void DatagramSocket::setSendBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setSoTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setTrafficClass(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject DatagramSocket::supportedOptions()
	{
		return __thiz.callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::net

