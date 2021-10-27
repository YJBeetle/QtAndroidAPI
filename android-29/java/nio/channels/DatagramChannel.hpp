#pragma once

#include "../../../__JniBaseClass.hpp"
#include "spi/AbstractInterruptibleChannel.hpp"
#include "SelectableChannel.hpp"
#include "spi/AbstractSelectableChannel.hpp"

namespace __jni_impl::java::net
{
	class DatagramSocket;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
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
		static QAndroidJniObject open();
		static QAndroidJniObject open(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject bind(__jni_impl::java::net::SocketAddress arg0);
		QAndroidJniObject connect(__jni_impl::java::net::SocketAddress arg0);
		QAndroidJniObject disconnect();
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject getRemoteAddress();
		jboolean isConnected();
		jint read(__jni_impl::java::nio::ByteBuffer arg0);
		jlong read(jarray arg0);
		jlong read(jarray arg0, jint arg1, jint arg2);
		QAndroidJniObject receive(__jni_impl::java::nio::ByteBuffer arg0);
		jint send(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::net::SocketAddress arg1);
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject socket();
		jint validOps();
		jint write(__jni_impl::java::nio::ByteBuffer arg0);
		jlong write(jarray arg0);
		jlong write(jarray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::nio::channels

#include "../../net/DatagramSocket.hpp"
#include "../../net/SocketAddress.hpp"
#include "../ByteBuffer.hpp"
#include "spi/SelectorProvider.hpp"

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
	QAndroidJniObject DatagramChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.DatagramChannel",
			"open",
			"()Ljava/nio/channels/DatagramChannel;"
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
	QAndroidJniObject DatagramChannel::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object()
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
	QAndroidJniObject DatagramChannel::getRemoteAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean DatagramChannel::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
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
	jlong DatagramChannel::read(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
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
	QAndroidJniObject DatagramChannel::receive(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"receive",
			"(Ljava/nio/ByteBuffer;)Ljava/net/SocketAddress;",
			arg0.__jniObject().object()
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
	QAndroidJniObject DatagramChannel::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DatagramChannel::socket()
	{
		return __thiz.callObjectMethod(
			"socket",
			"()Ljava/net/DatagramSocket;"
		);
	}
	jint DatagramChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
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

