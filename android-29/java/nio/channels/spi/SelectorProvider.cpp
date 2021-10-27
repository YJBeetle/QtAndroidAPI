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
	
	SelectorProvider::SelectorProvider(QAndroidJniObject obj) { __thiz = obj; }
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
		return __thiz.callObjectMethod(
			"inheritedChannel",
			"()Ljava/nio/channels/Channel;"
		);
	}
	QAndroidJniObject SelectorProvider::openDatagramChannel()
	{
		return __thiz.callObjectMethod(
			"openDatagramChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject SelectorProvider::openDatagramChannel(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"openDatagramChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SelectorProvider::openPipe()
	{
		return __thiz.callObjectMethod(
			"openPipe",
			"()Ljava/nio/channels/Pipe;"
		);
	}
	QAndroidJniObject SelectorProvider::openSelector()
	{
		return __thiz.callObjectMethod(
			"openSelector",
			"()Ljava/nio/channels/spi/AbstractSelector;"
		);
	}
	QAndroidJniObject SelectorProvider::openServerSocketChannel()
	{
		return __thiz.callObjectMethod(
			"openServerSocketChannel",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	QAndroidJniObject SelectorProvider::openServerSocketChannel(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"openServerSocketChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SelectorProvider::openSocketChannel()
	{
		return __thiz.callObjectMethod(
			"openSocketChannel",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	QAndroidJniObject SelectorProvider::openSocketChannel(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"openSocketChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::nio::channels::spi

