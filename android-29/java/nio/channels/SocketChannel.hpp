#pragma once

#ifndef JAVA_NIO_CHANNELS_SOCKETCHANNEL
#define JAVA_NIO_CHANNELS_SOCKETCHANNEL

#include "spi/AbstractSelectableChannel.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::net
{
	class Socket;
}

namespace __jni_impl::java::nio::channels
{
	class SocketChannel : public __jni_impl::java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong write(jarray arg0);
		jlong write(jarray arg0, jint arg1, jint arg2);
		jint write(__jni_impl::java::nio::ByteBuffer arg0);
		jint read(__jni_impl::java::nio::ByteBuffer arg0);
		jlong read(jarray arg0, jint arg1, jint arg2);
		jlong read(jarray arg0);
		jboolean connect(__jni_impl::java::net::SocketAddress arg0);
		static QAndroidJniObject open();
		static QAndroidJniObject open(__jni_impl::java::net::SocketAddress arg0);
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0);
		jboolean isConnected();
		QAndroidJniObject getRemoteAddress();
		QAndroidJniObject socket();
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject shutdownInput();
		QAndroidJniObject shutdownOutput();
		jint validOps();
		jboolean isConnectionPending();
		jboolean finishConnect();
	};
} // namespace __jni_impl::java::nio::channels

#include "spi/SelectorProvider.hpp"
#include "../ByteBuffer.hpp"
#include "../../net/SocketAddress.hpp"
#include "../../net/Socket.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void SocketChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.SocketChannel",
			"(V)V");
	}
	
	// Methods
	jlong SocketChannel::write(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0);
	}
	jlong SocketChannel::write(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2);
	}
	jint SocketChannel::write(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object());
	}
	jint SocketChannel::read(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object());
	}
	jlong SocketChannel::read(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2);
	}
	jlong SocketChannel::read(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0);
	}
	jboolean SocketChannel::connect(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callMethod<jboolean>(
			"connect",
			"(Ljava/net/SocketAddress;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"()Ljava/nio/channels/SocketChannel;");
	}
	QAndroidJniObject SocketChannel::open(__jni_impl::java::net::SocketAddress arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SocketChannel::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;",
			arg0.__jniObject().object());
	}
	jboolean SocketChannel::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z");
	}
	QAndroidJniObject SocketChannel::getRemoteAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;");
	}
	QAndroidJniObject SocketChannel::socket()
	{
		return __thiz.callObjectMethod(
			"socket",
			"()Ljava/net/Socket;");
	}
	QAndroidJniObject SocketChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;");
	}
	QAndroidJniObject SocketChannel::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/SocketChannel;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SocketChannel::shutdownInput()
	{
		return __thiz.callObjectMethod(
			"shutdownInput",
			"()Ljava/nio/channels/SocketChannel;");
	}
	QAndroidJniObject SocketChannel::shutdownOutput()
	{
		return __thiz.callObjectMethod(
			"shutdownOutput",
			"()Ljava/nio/channels/SocketChannel;");
	}
	jint SocketChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I");
	}
	jboolean SocketChannel::isConnectionPending()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectionPending",
			"()Z");
	}
	jboolean SocketChannel::finishConnect()
	{
		return __thiz.callMethod<jboolean>(
			"finishConnect",
			"()Z");
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class SocketChannel : public __jni_impl::java::nio::channels::SocketChannel
	{
	public:
		SocketChannel(QAndroidJniObject obj) { __thiz = obj; }
		SocketChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_SOCKETCHANNEL

