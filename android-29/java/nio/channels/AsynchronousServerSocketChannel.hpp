#pragma once

#ifndef JAVA_NIO_CHANNELS_ASYNCHRONOUSSERVERSOCKETCHANNEL
#define JAVA_NIO_CHANNELS_ASYNCHRONOUSSERVERSOCKETCHANNEL

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	class AsynchronousChannelProvider;
}
namespace __jni_impl::java::nio::channels
{
	class AsynchronousChannelGroup;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}

namespace __jni_impl::java::nio::channels
{
	class AsynchronousServerSocketChannel : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject provider();
		QAndroidJniObject accept();
		void accept(jobject arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject open();
		static QAndroidJniObject open(__jni_impl::java::nio::channels::AsynchronousChannelGroup arg0);
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0, jint arg1);
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0);
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
	};
} // namespace __jni_impl::java::nio::channels

#include "spi/AsynchronousChannelProvider.hpp"
#include "AsynchronousChannelGroup.hpp"
#include "../../net/SocketAddress.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void AsynchronousServerSocketChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AsynchronousServerSocketChannel",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AsynchronousServerSocketChannel::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Ljava/util/concurrent/Future;"
		);
	}
	void AsynchronousServerSocketChannel::accept(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"accept",
			"(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousServerSocketChannel",
			"open",
			"()Ljava/nio/channels/AsynchronousServerSocketChannel;"
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::open(__jni_impl::java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousServerSocketChannel",
			"open",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::bind(__jni_impl::java::net::SocketAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class AsynchronousServerSocketChannel : public __jni_impl::java::nio::channels::AsynchronousServerSocketChannel
	{
	public:
		AsynchronousServerSocketChannel(QAndroidJniObject obj) { __thiz = obj; }
		AsynchronousServerSocketChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_ASYNCHRONOUSSERVERSOCKETCHANNEL

