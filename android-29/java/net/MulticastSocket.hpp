#pragma once

#ifndef JAVA_NET_MULTICASTSOCKET
#define JAVA_NET_MULTICASTSOCKET

#include "../../__JniBaseClass.hpp"
#include "DatagramSocket.hpp"

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
	class NetworkInterface;
}
namespace __jni_impl::java::net
{
	class DatagramPacket;
}

namespace __jni_impl::java::net
{
	class MulticastSocket : public __jni_impl::java::net::DatagramSocket
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::net::SocketAddress arg0);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jint getTimeToLive();
		void setTTL(jbyte arg0);
		jbyte getTTL();
		void setTimeToLive(jint arg0);
		void joinGroup(__jni_impl::java::net::SocketAddress arg0, __jni_impl::java::net::NetworkInterface arg1);
		void joinGroup(__jni_impl::java::net::InetAddress arg0);
		void leaveGroup(__jni_impl::java::net::SocketAddress arg0, __jni_impl::java::net::NetworkInterface arg1);
		void leaveGroup(__jni_impl::java::net::InetAddress arg0);
		void send(__jni_impl::java::net::DatagramPacket arg0, jbyte arg1);
		QAndroidJniObject getInterface();
		void setInterface(__jni_impl::java::net::InetAddress arg0);
		void setNetworkInterface(__jni_impl::java::net::NetworkInterface arg0);
		QAndroidJniObject getNetworkInterface();
		void setLoopbackMode(jboolean arg0);
		jboolean getLoopbackMode();
		QAndroidJniObject supportedOptions();
	};
} // namespace __jni_impl::java::net

#include "InetAddress.hpp"
#include "SocketAddress.hpp"
#include "NetworkInterface.hpp"
#include "DatagramPacket.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void MulticastSocket::__constructor(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.MulticastSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object());
	}
	void MulticastSocket::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.MulticastSocket",
			"(I)V",
			arg0);
	}
	void MulticastSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.MulticastSocket",
			"()V");
	}
	
	// Methods
	jint MulticastSocket::getTimeToLive()
	{
		return __thiz.callMethod<jint>(
			"getTimeToLive",
			"()I"
		);
	}
	void MulticastSocket::setTTL(jbyte arg0)
	{
		__thiz.callMethod<void>(
			"setTTL",
			"(B)V",
			arg0
		);
	}
	jbyte MulticastSocket::getTTL()
	{
		return __thiz.callMethod<jbyte>(
			"getTTL",
			"()B"
		);
	}
	void MulticastSocket::setTimeToLive(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeToLive",
			"(I)V",
			arg0
		);
	}
	void MulticastSocket::joinGroup(__jni_impl::java::net::SocketAddress arg0, __jni_impl::java::net::NetworkInterface arg1)
	{
		__thiz.callMethod<void>(
			"joinGroup",
			"(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MulticastSocket::joinGroup(__jni_impl::java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"joinGroup",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void MulticastSocket::leaveGroup(__jni_impl::java::net::SocketAddress arg0, __jni_impl::java::net::NetworkInterface arg1)
	{
		__thiz.callMethod<void>(
			"leaveGroup",
			"(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MulticastSocket::leaveGroup(__jni_impl::java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"leaveGroup",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void MulticastSocket::send(__jni_impl::java::net::DatagramPacket arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MulticastSocket::getInterface()
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"()Ljava/net/InetAddress;"
		);
	}
	void MulticastSocket::setInterface(__jni_impl::java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"setInterface",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void MulticastSocket::setNetworkInterface(__jni_impl::java::net::NetworkInterface arg0)
	{
		__thiz.callMethod<void>(
			"setNetworkInterface",
			"(Ljava/net/NetworkInterface;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MulticastSocket::getNetworkInterface()
	{
		return __thiz.callObjectMethod(
			"getNetworkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	void MulticastSocket::setLoopbackMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLoopbackMode",
			"(Z)V",
			arg0
		);
	}
	jboolean MulticastSocket::getLoopbackMode()
	{
		return __thiz.callMethod<jboolean>(
			"getLoopbackMode",
			"()Z"
		);
	}
	QAndroidJniObject MulticastSocket::supportedOptions()
	{
		return __thiz.callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class MulticastSocket : public __jni_impl::java::net::MulticastSocket
	{
	public:
		MulticastSocket(QAndroidJniObject obj) { __thiz = obj; }
		MulticastSocket(__jni_impl::java::net::SocketAddress arg0)
		{
			__constructor(
				arg0);
		}
		MulticastSocket(jint arg0)
		{
			__constructor(
				arg0);
		}
		MulticastSocket()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_MULTICASTSOCKET

