#pragma once

#ifndef JAVA_NET_DATAGRAMSOCKET
#define JAVA_NET_DATAGRAMSOCKET

#include "../../__JniBaseClass.hpp"

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
namespace __jni_impl::java::nio::channels
{
	class DatagramChannel;
}
namespace __jni_impl::java::net
{
	class DatagramPacket;
}

namespace __jni_impl::java::net
{
	class DatagramSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(__jni_impl::java::net::SocketAddress arg0);
		void __constructor();
		void __constructor(jint arg0, __jni_impl::java::net::InetAddress arg1);
		
		// Methods
		void connect(__jni_impl::java::net::InetAddress arg0, jint arg1);
		void connect(__jni_impl::java::net::SocketAddress arg0);
		void close();
		jint getPort();
		QAndroidJniObject getChannel();
		void bind(__jni_impl::java::net::SocketAddress arg0);
		jboolean getBroadcast();
		jboolean isConnected();
		void send(__jni_impl::java::net::DatagramPacket arg0);
		void disconnect();
		jboolean isClosed();
		jboolean isBound();
		QAndroidJniObject getOption(__jni_impl::__JniBaseClass arg0);
		jint getLocalPort();
		QAndroidJniObject getLocalAddress();
		QAndroidJniObject setOption(__jni_impl::__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject supportedOptions();
		QAndroidJniObject getRemoteSocketAddress();
		QAndroidJniObject getLocalSocketAddress();
		void setSoTimeout(jint arg0);
		jint getSoTimeout();
		void setSendBufferSize(jint arg0);
		jint getSendBufferSize();
		void setReceiveBufferSize(jint arg0);
		jint getReceiveBufferSize();
		void setTrafficClass(jint arg0);
		jint getTrafficClass();
		void setReuseAddress(jboolean arg0);
		jboolean getReuseAddress();
		void receive(__jni_impl::java::net::DatagramPacket arg0);
		void setBroadcast(jboolean arg0);
		static void setDatagramSocketImplFactory(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getInetAddress();
	};
} // namespace __jni_impl::java::net

#include "DatagramSocketImpl.hpp"
#include "InetAddress.hpp"
#include "SocketAddress.hpp"
#include "../nio/channels/DatagramChannel.hpp"
#include "DatagramPacket.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void DatagramSocket::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"(I)V",
			arg0);
	}
	void DatagramSocket::__constructor(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object());
	}
	void DatagramSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"()V");
	}
	void DatagramSocket::__constructor(jint arg0, __jni_impl::java::net::InetAddress arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocket",
			"(ILjava/net/InetAddress;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	void DatagramSocket::connect(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void DatagramSocket::connect(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object());
	}
	void DatagramSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jint DatagramSocket::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	QAndroidJniObject DatagramSocket::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/DatagramChannel;");
	}
	void DatagramSocket::bind(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object());
	}
	jboolean DatagramSocket::getBroadcast()
	{
		return __thiz.callMethod<jboolean>(
			"getBroadcast",
			"()Z");
	}
	jboolean DatagramSocket::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z");
	}
	void DatagramSocket::send(__jni_impl::java::net::DatagramPacket arg0)
	{
		__thiz.callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;)V",
			arg0.__jniObject().object());
	}
	void DatagramSocket::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V");
	}
	jboolean DatagramSocket::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z");
	}
	jboolean DatagramSocket::isBound()
	{
		return __thiz.callMethod<jboolean>(
			"isBound",
			"()Z");
	}
	QAndroidJniObject DatagramSocket::getOption(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	jint DatagramSocket::getLocalPort()
	{
		return __thiz.callMethod<jint>(
			"getLocalPort",
			"()I");
	}
	QAndroidJniObject DatagramSocket::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;");
	}
	QAndroidJniObject DatagramSocket::setOption(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/DatagramSocket;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject DatagramSocket::supportedOptions()
	{
		return __thiz.callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject DatagramSocket::getRemoteSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;");
	}
	QAndroidJniObject DatagramSocket::getLocalSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;");
	}
	void DatagramSocket::setSoTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0);
	}
	jint DatagramSocket::getSoTimeout()
	{
		return __thiz.callMethod<jint>(
			"getSoTimeout",
			"()I");
	}
	void DatagramSocket::setSendBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0);
	}
	jint DatagramSocket::getSendBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getSendBufferSize",
			"()I");
	}
	void DatagramSocket::setReceiveBufferSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0);
	}
	jint DatagramSocket::getReceiveBufferSize()
	{
		return __thiz.callMethod<jint>(
			"getReceiveBufferSize",
			"()I");
	}
	void DatagramSocket::setTrafficClass(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0);
	}
	jint DatagramSocket::getTrafficClass()
	{
		return __thiz.callMethod<jint>(
			"getTrafficClass",
			"()I");
	}
	void DatagramSocket::setReuseAddress(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0);
	}
	jboolean DatagramSocket::getReuseAddress()
	{
		return __thiz.callMethod<jboolean>(
			"getReuseAddress",
			"()Z");
	}
	void DatagramSocket::receive(__jni_impl::java::net::DatagramPacket arg0)
	{
		__thiz.callMethod<void>(
			"receive",
			"(Ljava/net/DatagramPacket;)V",
			arg0.__jniObject().object());
	}
	void DatagramSocket::setBroadcast(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBroadcast",
			"(Z)V",
			arg0);
	}
	void DatagramSocket::setDatagramSocketImplFactory(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.DatagramSocket",
			"setDatagramSocketImplFactory",
			"(Ljava/net/DatagramSocketImplFactory;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DatagramSocket::getInetAddress()
	{
		return __thiz.callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;");
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class DatagramSocket : public __jni_impl::java::net::DatagramSocket
	{
	public:
		DatagramSocket(QAndroidJniObject obj) { __thiz = obj; }
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
		DatagramSocket()
		{
			__constructor();
		}
		DatagramSocket(jint arg0, __jni_impl::java::net::InetAddress arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

#endif // JAVA_NET_DATAGRAMSOCKET

