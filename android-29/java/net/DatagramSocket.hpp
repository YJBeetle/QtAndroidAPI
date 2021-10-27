#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class IOException;
}
namespace __jni_impl::java::net
{
	class DatagramPacket;
}
namespace __jni_impl::java::net
{
	class DatagramSocketImpl;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::net
{
	class SocketException;
}
namespace __jni_impl::java::nio::channels
{
	class DatagramChannel;
}

namespace __jni_impl::java::net
{
	class DatagramSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::java::net::SocketAddress arg0);
		void __constructor(jint arg0, __jni_impl::java::net::InetAddress arg1);
		
		// Methods
		static void setDatagramSocketImplFactory(__jni_impl::__JniBaseClass arg0);
		void bind(__jni_impl::java::net::SocketAddress arg0);
		void close();
		void connect(__jni_impl::java::net::SocketAddress arg0);
		void connect(__jni_impl::java::net::InetAddress arg0, jint arg1);
		void disconnect();
		jboolean getBroadcast();
		QAndroidJniObject getChannel();
		QAndroidJniObject getInetAddress();
		QAndroidJniObject getLocalAddress();
		jint getLocalPort();
		QAndroidJniObject getLocalSocketAddress();
		jobject getOption(__jni_impl::__JniBaseClass arg0);
		jint getPort();
		jint getReceiveBufferSize();
		QAndroidJniObject getRemoteSocketAddress();
		jboolean getReuseAddress();
		jint getSendBufferSize();
		jint getSoTimeout();
		jint getTrafficClass();
		jboolean isBound();
		jboolean isClosed();
		jboolean isConnected();
		void receive(__jni_impl::java::net::DatagramPacket arg0);
		void send(__jni_impl::java::net::DatagramPacket arg0);
		void setBroadcast(jboolean arg0);
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		void setReceiveBufferSize(jint arg0);
		void setReuseAddress(jboolean arg0);
		void setSendBufferSize(jint arg0);
		void setSoTimeout(jint arg0);
		void setTrafficClass(jint arg0);
		QAndroidJniObject supportedOptions();
	};
} // namespace __jni_impl::java::net

#include "../io/IOException.hpp"
#include "./DatagramPacket.hpp"
#include "./DatagramSocketImpl.hpp"
#include "./InetAddress.hpp"
#include "./SocketAddress.hpp"
#include "./SocketException.hpp"
#include "../nio/channels/DatagramChannel.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void DatagramSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"()V"
		);
	}
	void DatagramSocket::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::__constructor(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::__constructor(jint arg0, __jni_impl::java::net::InetAddress arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"(ILjava/net/InetAddress;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void DatagramSocket::setDatagramSocketImplFactory(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.DatagramSocket",
			"setDatagramSocketImplFactory",
			"(Ljava/net/DatagramSocketImplFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void DatagramSocket::connect(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::connect(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatagramSocket::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	jboolean DatagramSocket::getBroadcast()
	{
		return __thiz.callMethod<jboolean>(
			"getBroadcast",
			"()Z"
		);
	}
	QAndroidJniObject DatagramSocket::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject DatagramSocket::getInetAddress()
	{
		return __thiz.callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	QAndroidJniObject DatagramSocket::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint DatagramSocket::getLocalPort()
	{
		return __thiz.callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	QAndroidJniObject DatagramSocket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jobject DatagramSocket::getOption(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jint DatagramSocket::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint DatagramSocket::getReceiveBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	QAndroidJniObject DatagramSocket::getRemoteSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean DatagramSocket::getReuseAddress()
	{
		return __thiz.callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	jint DatagramSocket::getSendBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	jint DatagramSocket::getSoTimeout()
	{
		return __thiz.callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jint DatagramSocket::getTrafficClass()
	{
		return __thiz.callMethod<jint>(
			"getTrafficClass",
			"()I"
		);
	}
	jboolean DatagramSocket::isBound()
	{
		return __thiz.callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean DatagramSocket::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean DatagramSocket::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void DatagramSocket::receive(__jni_impl::java::net::DatagramPacket arg0)
	{
		__thiz.callMethod<void>(
			"receive",
			"(Ljava/net/DatagramPacket;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::send(__jni_impl::java::net::DatagramPacket arg0)
	{
		__thiz.callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramSocket::setBroadcast(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBroadcast",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject DatagramSocket::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/DatagramSocket;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatagramSocket::setReceiveBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setReuseAddress(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	void DatagramSocket::setSendBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setSoTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setTrafficClass(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject DatagramSocket::supportedOptions()
	{
		return __thiz.callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class DatagramSocket : public __jni_impl::java::net::DatagramSocket
	{
	public:
		DatagramSocket(QAndroidJniObject obj) { __thiz = obj; }
		DatagramSocket()
		{
			__constructor();
		}
		DatagramSocket(jint arg0)
		{
			__constructor(
				arg0);
		}
		DatagramSocket(__jni_impl::java::net::SocketAddress arg0)
		{
			__constructor(
				arg0);
		}
		DatagramSocket(jint arg0, __jni_impl::java::net::InetAddress arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

