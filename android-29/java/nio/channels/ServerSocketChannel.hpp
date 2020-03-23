#pragma once

#ifndef JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL
#define JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL

#include "spi/AbstractSelectableChannel.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
}
namespace __jni_impl::java::nio::channels
{
	class SocketChannel;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::net
{
	class ServerSocket;
}

namespace __jni_impl::java::nio::channels
{
	class ServerSocketChannel : public __jni_impl::java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject accept();
		static QAndroidJniObject open();
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0, jint arg1);
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0);
		QAndroidJniObject socket();
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		jint validOps();
	};
} // namespace __jni_impl::java::nio::channels

#include "spi/SelectorProvider.hpp"
#include "SocketChannel.hpp"
#include "../../net/SocketAddress.hpp"
#include "../../net/ServerSocket.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void ServerSocketChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ServerSocketChannel",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ServerSocketChannel::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Ljava/nio/channels/SocketChannel;");
	}
	QAndroidJniObject ServerSocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.ServerSocketChannel",
			"open",
			"()Ljava/nio/channels/ServerSocketChannel;");
	}
	QAndroidJniObject ServerSocketChannel::bind(__jni_impl::java::net::SocketAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ServerSocketChannel::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ServerSocketChannel::socket()
	{
		return __thiz.callObjectMethod(
			"socket",
			"()Ljava/net/ServerSocket;");
	}
	QAndroidJniObject ServerSocketChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;");
	}
	QAndroidJniObject ServerSocketChannel::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1);
	}
	jint ServerSocketChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I");
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class ServerSocketChannel : public __jni_impl::java::nio::channels::ServerSocketChannel
	{
	public:
		ServerSocketChannel(QAndroidJniObject obj) { __thiz = obj; }
		ServerSocketChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL

