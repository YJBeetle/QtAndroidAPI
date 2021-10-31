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
	AsynchronousSocketChannel::AsynchronousSocketChannel(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AsynchronousSocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousSocketChannel",
			"open",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::open(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousSocketChannel",
			"open",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::bind(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::connect(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"connect",
			"(Ljava/net/SocketAddress;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	void AsynchronousSocketChannel::connect(java::net::SocketAddress arg0, jobject arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::getRemoteAddress()
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::read(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"read",
			"(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	void AsynchronousSocketChannel::read(java::nio::ByteBuffer arg0, jobject arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void AsynchronousSocketChannel::read(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, jobject arg3, __JniBaseClass arg4)
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
	void AsynchronousSocketChannel::read(jarray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, jobject arg5, __JniBaseClass arg6)
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
	QAndroidJniObject AsynchronousSocketChannel::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::shutdownInput()
	{
		return callObjectMethod(
			"shutdownInput",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::shutdownOutput()
	{
		return callObjectMethod(
			"shutdownOutput",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::write(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"write",
			"(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	void AsynchronousSocketChannel::write(java::nio::ByteBuffer arg0, jobject arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void AsynchronousSocketChannel::write(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, jobject arg3, __JniBaseClass arg4)
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
	void AsynchronousSocketChannel::write(jarray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, jobject arg5, __JniBaseClass arg6)
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

