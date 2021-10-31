#include "../../net/ServerSocket.hpp"
#include "../../net/SocketAddress.hpp"
#include "./SocketChannel.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./ServerSocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	ServerSocketChannel::ServerSocketChannel(QAndroidJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ServerSocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.ServerSocketChannel",
			"open",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	QAndroidJniObject ServerSocketChannel::open(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.ServerSocketChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject ServerSocketChannel::accept()
	{
		return callObjectMethod(
			"accept",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	QAndroidJniObject ServerSocketChannel::bind(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject ServerSocketChannel::bind(java::net::SocketAddress arg0, jint arg1)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject ServerSocketChannel::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject ServerSocketChannel::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject ServerSocketChannel::socket()
	{
		return callObjectMethod(
			"socket",
			"()Ljava/net/ServerSocket;"
		);
	}
	jint ServerSocketChannel::validOps()
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

