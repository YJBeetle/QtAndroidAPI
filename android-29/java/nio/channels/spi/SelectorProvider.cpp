#include "../../../lang/Void.hpp"
#include "../DatagramChannel.hpp"
#include "../Pipe.hpp"
#include "../ServerSocketChannel.hpp"
#include "../SocketChannel.hpp"
#include "./AbstractSelector.hpp"
#include "./SelectorProvider.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QAndroidJniObject forward
	SelectorProvider::SelectorProvider(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject SelectorProvider::provider()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.spi.SelectorProvider",
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	QAndroidJniObject SelectorProvider::inheritedChannel()
	{
		return callObjectMethod(
			"inheritedChannel",
			"()Ljava/nio/channels/Channel;"
		);
	}
	QAndroidJniObject SelectorProvider::openDatagramChannel()
	{
		return callObjectMethod(
			"openDatagramChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject SelectorProvider::openDatagramChannel(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"openDatagramChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject SelectorProvider::openPipe()
	{
		return callObjectMethod(
			"openPipe",
			"()Ljava/nio/channels/Pipe;"
		);
	}
	QAndroidJniObject SelectorProvider::openSelector()
	{
		return callObjectMethod(
			"openSelector",
			"()Ljava/nio/channels/spi/AbstractSelector;"
		);
	}
	QAndroidJniObject SelectorProvider::openServerSocketChannel()
	{
		return callObjectMethod(
			"openServerSocketChannel",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	QAndroidJniObject SelectorProvider::openServerSocketChannel(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"openServerSocketChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject SelectorProvider::openSocketChannel()
	{
		return callObjectMethod(
			"openSocketChannel",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	QAndroidJniObject SelectorProvider::openSocketChannel(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"openSocketChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
} // namespace java::nio::channels::spi

