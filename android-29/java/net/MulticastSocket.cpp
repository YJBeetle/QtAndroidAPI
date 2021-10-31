#include "./DatagramPacket.hpp"
#include "./DatagramSocket.hpp"
#include "./InetAddress.hpp"
#include "./NetworkInterface.hpp"
#include "./SocketAddress.hpp"
#include "./MulticastSocket.hpp"

namespace java::net
{
	// Fields
	
	MulticastSocket::MulticastSocket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MulticastSocket::MulticastSocket()
	{
		__thiz = QAndroidJniObject(
			"java.net.MulticastSocket",
			"()V"
		);
	}
	MulticastSocket::MulticastSocket(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.MulticastSocket",
			"(I)V",
			arg0
		);
	}
	MulticastSocket::MulticastSocket(java::net::SocketAddress arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.MulticastSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MulticastSocket::getInterface()
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"()Ljava/net/InetAddress;"
		);
	}
	jboolean MulticastSocket::getLoopbackMode()
	{
		return __thiz.callMethod<jboolean>(
			"getLoopbackMode",
			"()Z"
		);
	}
	QAndroidJniObject MulticastSocket::getNetworkInterface()
	{
		return __thiz.callObjectMethod(
			"getNetworkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	jbyte MulticastSocket::getTTL()
	{
		return __thiz.callMethod<jbyte>(
			"getTTL",
			"()B"
		);
	}
	jint MulticastSocket::getTimeToLive()
	{
		return __thiz.callMethod<jint>(
			"getTimeToLive",
			"()I"
		);
	}
	void MulticastSocket::joinGroup(java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"joinGroup",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void MulticastSocket::joinGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1)
	{
		__thiz.callMethod<void>(
			"joinGroup",
			"(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MulticastSocket::leaveGroup(java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"leaveGroup",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void MulticastSocket::leaveGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1)
	{
		__thiz.callMethod<void>(
			"leaveGroup",
			"(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MulticastSocket::send(java::net::DatagramPacket arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MulticastSocket::setInterface(java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"setInterface",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void MulticastSocket::setLoopbackMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLoopbackMode",
			"(Z)V",
			arg0
		);
	}
	void MulticastSocket::setNetworkInterface(java::net::NetworkInterface arg0)
	{
		__thiz.callMethod<void>(
			"setNetworkInterface",
			"(Ljava/net/NetworkInterface;)V",
			arg0.__jniObject().object()
		);
	}
	void MulticastSocket::setTTL(jbyte arg0)
	{
		__thiz.callMethod<void>(
			"setTTL",
			"(B)V",
			arg0
		);
	}
	void MulticastSocket::setTimeToLive(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeToLive",
			"(I)V",
			arg0
		);
	}
} // namespace java::net

