#pragma once

#include "../../../__JniBaseClass.hpp"
#include "spi/AbstractInterruptibleChannel.hpp"
#include "SelectableChannel.hpp"
#include "spi/AbstractSelectableChannel.hpp"

namespace __jni_impl::java::net
{
	class ServerSocket;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::nio::channels
{
	class SocketChannel;
}
namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
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
		static QAndroidJniObject open();
		static QAndroidJniObject open(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject accept();
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0);
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0, jint arg1);
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject socket();
		jint validOps();
	};
} // namespace __jni_impl::java::nio::channels

#include "../../net/ServerSocket.hpp"
#include "../../net/SocketAddress.hpp"
#include "SocketChannel.hpp"
#include "spi/SelectorProvider.hpp"

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
	QAndroidJniObject ServerSocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.ServerSocketChannel",
			"open",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	QAndroidJniObject ServerSocketChannel::open(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.ServerSocketChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ServerSocketChannel::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	QAndroidJniObject ServerSocketChannel::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ServerSocketChannel::bind(__jni_impl::java::net::SocketAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ServerSocketChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject ServerSocketChannel::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ServerSocketChannel::socket()
	{
		return __thiz.callObjectMethod(
			"socket",
			"()Ljava/net/ServerSocket;"
		);
	}
	jint ServerSocketChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
		);
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

