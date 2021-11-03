#include "../../net/SocketAddress.hpp"
#include "../ByteBuffer.hpp"
#include "./AsynchronousChannelGroup.hpp"
#include "./spi/AsynchronousChannelProvider.hpp"
#include "../../util/concurrent/TimeUnit.hpp"
#include "./AsynchronousSocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	AsynchronousSocketChannel::AsynchronousSocketChannel(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousSocketChannel",
			"open",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::open(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousSocketChannel",
			"open",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object()
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::bind(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object()
		);
	}
	JObject AsynchronousSocketChannel::connect(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"connect",
			"(Ljava/net/SocketAddress;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	void AsynchronousSocketChannel::connect(java::net::SocketAddress arg0, jobject arg1, JObject arg2)
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	java::net::SocketAddress AsynchronousSocketChannel::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	java::net::SocketAddress AsynchronousSocketChannel::getRemoteAddress()
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	java::nio::channels::spi::AsynchronousChannelProvider AsynchronousSocketChannel::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	JObject AsynchronousSocketChannel::read(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"read",
			"(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	void AsynchronousSocketChannel::read(java::nio::ByteBuffer arg0, jobject arg1, JObject arg2)
	{
		callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void AsynchronousSocketChannel::read(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, jobject arg3, JObject arg4)
	{
		callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	void AsynchronousSocketChannel::read(jarray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, jobject arg5, JObject arg6)
	{
		callMethod<void>(
			"read",
			"([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5,
			arg6.object()
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::setOption(JObject arg0, jobject arg1)
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object(),
			arg1
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::shutdownInput()
	{
		return callObjectMethod(
			"shutdownInput",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::shutdownOutput()
	{
		return callObjectMethod(
			"shutdownOutput",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	JObject AsynchronousSocketChannel::write(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"write",
			"(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	void AsynchronousSocketChannel::write(java::nio::ByteBuffer arg0, jobject arg1, JObject arg2)
	{
		callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void AsynchronousSocketChannel::write(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, jobject arg3, JObject arg4)
	{
		callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	void AsynchronousSocketChannel::write(jarray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, jobject arg5, JObject arg6)
	{
		callMethod<void>(
			"write",
			"([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5,
			arg6.object()
		);
	}
} // namespace java::nio::channels

