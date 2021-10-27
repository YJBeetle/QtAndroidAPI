#pragma once

#include "../../__JniBaseClass.hpp"
#include "DatagramSocket.hpp"

namespace __jni_impl::java::net
{
	class DatagramPacket;
}
namespace __jni_impl::java::net
{
	class DatagramSocket;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class NetworkInterface;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}

namespace __jni_impl::java::net
{
	class MulticastSocket : public __jni_impl::java::net::DatagramSocket
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::java::net::SocketAddress arg0);
		
		// Methods
		QAndroidJniObject getInterface();
		jboolean getLoopbackMode();
		QAndroidJniObject getNetworkInterface();
		jbyte getTTL();
		jint getTimeToLive();
		void joinGroup(__jni_impl::java::net::InetAddress arg0);
		void joinGroup(__jni_impl::java::net::SocketAddress arg0, __jni_impl::java::net::NetworkInterface arg1);
		void leaveGroup(__jni_impl::java::net::InetAddress arg0);
		void leaveGroup(__jni_impl::java::net::SocketAddress arg0, __jni_impl::java::net::NetworkInterface arg1);
		void send(__jni_impl::java::net::DatagramPacket arg0, jbyte arg1);
		void setInterface(__jni_impl::java::net::InetAddress arg0);
		void setLoopbackMode(jboolean arg0);
		void setNetworkInterface(__jni_impl::java::net::NetworkInterface arg0);
		void setTTL(jbyte arg0);
		void setTimeToLive(jint arg0);
	};
} // namespace __jni_impl::java::net

#include "DatagramPacket.hpp"
#include "DatagramSocket.hpp"
#include "InetAddress.hpp"
#include "NetworkInterface.hpp"
#include "SocketAddress.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void MulticastSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.MulticastSocket",
			"()V"
		);
	}
	void MulticastSocket::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.MulticastSocket",
			"(I)V",
			arg0
		);
	}
	void MulticastSocket::__constructor(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.MulticastSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MulticastSocket::getInterface()
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"()Ljava/net/InetAddress;"
		);
	}
	jboolean MulticastSocket::getLoopbackMode()
	{
		return __thiz.callMethod<jboolean>(
			"getLoopbackMode",
			"()Z"
		);
	}
	QAndroidJniObject MulticastSocket::getNetworkInterface()
	{
		return __thiz.callObjectMethod(
			"getNetworkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	jbyte MulticastSocket::getTTL()
	{
		return __thiz.callMethod<jbyte>(
			"getTTL",
			"()B"
		);
	}
	jint MulticastSocket::getTimeToLive()
	{
		return __thiz.callMethod<jint>(
			"getTimeToLive",
			"()I"
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
	void MulticastSocket::joinGroup(__jni_impl::java::net::SocketAddress arg0, __jni_impl::java::net::NetworkInterface arg1)
	{
		__thiz.callMethod<void>(
			"joinGroup",
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
	void MulticastSocket::leaveGroup(__jni_impl::java::net::SocketAddress arg0, __jni_impl::java::net::NetworkInterface arg1)
	{
		__thiz.callMethod<void>(
			"leaveGroup",
			"(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	void MulticastSocket::setInterface(__jni_impl::java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"setInterface",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
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
	void MulticastSocket::setNetworkInterface(__jni_impl::java::net::NetworkInterface arg0)
	{
		__thiz.callMethod<void>(
			"setNetworkInterface",
			"(Ljava/net/NetworkInterface;)V",
			arg0.__jniObject().object()
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
	void MulticastSocket::setTimeToLive(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeToLive",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class MulticastSocket : public __jni_impl::java::net::MulticastSocket
	{
	public:
		MulticastSocket(QAndroidJniObject obj) { __thiz = obj; }
		MulticastSocket()
		{
			__constructor();
		}
		MulticastSocket(jint arg0)
		{
			__constructor(
				arg0);
		}
		MulticastSocket(__jni_impl::java::net::SocketAddress arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net

