#pragma once

#ifndef JAVA_NIO_CHANNELS_DATAGRAMCHANNEL
#define JAVA_NIO_CHANNELS_DATAGRAMCHANNEL

#include "../../../__JniBaseClass.hpp"
#include "spi/AbstractInterruptibleChannel.hpp"
#include "SelectableChannel.hpp"
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
	class DatagramSocket;
}

namespace __jni_impl::java::nio::channels
{
	class DatagramChannel : public __jni_impl::java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong write(jarray arg0);
		jlong write(jarray arg0, jint arg1, jint arg2);
		jint write(__jni_impl::java::nio::ByteBuffer arg0);
		jlong read(jarray arg0);
		jint read(__jni_impl::java::nio::ByteBuffer arg0);
		jlong read(jarray arg0, jint arg1, jint arg2);
		QAndroidJniObject connect(__jni_impl::java::net::SocketAddress arg0);
		static QAndroidJniObject open(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject open();
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0);
		QAndroidJniObject getRemoteAddress();
		QAndroidJniObject disconnect();
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject receive(__jni_impl::java::nio::ByteBuffer arg0);
		jint validOps();
		jint send(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::net::SocketAddress arg1);
		QAndroidJniObject socket();
		jboolean isConnected();
	};
} // namespace __jni_impl::java::nio::channels

#include "spi/SelectorProvider.hpp"
#include "../ByteBuffer.hpp"
#include "../../net/SocketAddress.hpp"
#include "../../net/DatagramSocket.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void DatagramChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.DatagramChannel",
			"(V)V");
	}
	
	// Methods
	jlong DatagramChannel::write(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong DatagramChannel::write(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
	jint DatagramChannel::write(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jlong DatagramChannel::read(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jint DatagramChannel::read(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jlong DatagramChannel::read(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DatagramChannel::connect(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"connect",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DatagramChannel::open(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.DatagramChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DatagramChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.DatagramChannel",
			"open",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject DatagramChannel::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DatagramChannel::getRemoteAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject DatagramChannel::disconnect()
	{
		return __thiz.callObjectMethod(
			"disconnect",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject DatagramChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject DatagramChannel::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DatagramChannel::receive(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"receive",
			"(Ljava/nio/ByteBuffer;)Ljava/net/SocketAddress;",
			arg0.__jniObject().object()
		);
	}
	jint DatagramChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
		);
	}
	jint DatagramChannel::send(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::net::SocketAddress arg1)
	{
		return __thiz.callMethod<jint>(
			"send",
			"(Ljava/nio/ByteBuffer;Ljava/net/SocketAddress;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DatagramChannel::socket()
	{
		return __thiz.callObjectMethod(
			"socket",
			"()Ljava/net/DatagramSocket;"
		);
	}
	jboolean DatagramChannel::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class DatagramChannel : public __jni_impl::java::nio::channels::DatagramChannel
	{
	public:
		DatagramChannel(QAndroidJniObject obj) { __thiz = obj; }
		DatagramChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_DATAGRAMCHANNEL

