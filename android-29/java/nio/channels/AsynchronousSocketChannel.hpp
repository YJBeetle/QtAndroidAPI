#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio::channels
{
	class AsynchronousChannelGroup;
}
namespace __jni_impl::java::nio::channels::spi
{
	class AsynchronousChannelProvider;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::nio::channels
{
	class AsynchronousSocketChannel : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject open();
		static QAndroidJniObject open(__jni_impl::java::nio::channels::AsynchronousChannelGroup arg0);
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0);
		QAndroidJniObject connect(__jni_impl::java::net::SocketAddress arg0);
		void connect(__jni_impl::java::net::SocketAddress arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject getRemoteAddress();
		QAndroidJniObject provider();
		QAndroidJniObject read(__jni_impl::java::nio::ByteBuffer arg0);
		void read(__jni_impl::java::nio::ByteBuffer arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		void read(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2, jobject arg3, __jni_impl::__JniBaseClass arg4);
		void read(jarray arg0, jint arg1, jint arg2, jlong arg3, __jni_impl::java::util::concurrent::TimeUnit arg4, jobject arg5, __jni_impl::__JniBaseClass arg6);
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject shutdownInput();
		QAndroidJniObject shutdownOutput();
		QAndroidJniObject write(__jni_impl::java::nio::ByteBuffer arg0);
		void write(__jni_impl::java::nio::ByteBuffer arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		void write(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2, jobject arg3, __jni_impl::__JniBaseClass arg4);
		void write(jarray arg0, jint arg1, jint arg2, jlong arg3, __jni_impl::java::util::concurrent::TimeUnit arg4, jobject arg5, __jni_impl::__JniBaseClass arg6);
	};
} // namespace __jni_impl::java::nio::channels

#include "../../net/SocketAddress.hpp"
#include "../ByteBuffer.hpp"
#include "./AsynchronousChannelGroup.hpp"
#include "./spi/AsynchronousChannelProvider.hpp"
#include "../../util/concurrent/TimeUnit.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void AsynchronousSocketChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AsynchronousSocketChannel",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AsynchronousSocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousSocketChannel",
			"open",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::open(__jni_impl::java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousSocketChannel",
			"open",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::connect(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"connect",
			"(Ljava/net/SocketAddress;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object()
		);
	}
	void AsynchronousSocketChannel::connect(__jni_impl::java::net::SocketAddress arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::getRemoteAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::read(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"read",
			"(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object()
		);
	}
	void AsynchronousSocketChannel::read(__jni_impl::java::nio::ByteBuffer arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AsynchronousSocketChannel::read(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2, jobject arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	void AsynchronousSocketChannel::read(jarray arg0, jint arg1, jint arg2, jlong arg3, __jni_impl::java::util::concurrent::TimeUnit arg4, jobject arg5, __jni_impl::__JniBaseClass arg6)
	{
		__thiz.callMethod<void>(
			"read",
			"([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::shutdownInput()
	{
		return __thiz.callObjectMethod(
			"shutdownInput",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::shutdownOutput()
	{
		return __thiz.callObjectMethod(
			"shutdownOutput",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	QAndroidJniObject AsynchronousSocketChannel::write(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"write",
			"(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object()
		);
	}
	void AsynchronousSocketChannel::write(__jni_impl::java::nio::ByteBuffer arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AsynchronousSocketChannel::write(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2, jobject arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	void AsynchronousSocketChannel::write(jarray arg0, jint arg1, jint arg2, jlong arg3, __jni_impl::java::util::concurrent::TimeUnit arg4, jobject arg5, __jni_impl::__JniBaseClass arg6)
	{
		__thiz.callMethod<void>(
			"write",
			"([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class AsynchronousSocketChannel : public __jni_impl::java::nio::channels::AsynchronousSocketChannel
	{
	public:
		AsynchronousSocketChannel(QAndroidJniObject obj) { __thiz = obj; }
		AsynchronousSocketChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

