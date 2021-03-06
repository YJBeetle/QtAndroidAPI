#pragma once

#ifndef JAVA_NET_DATAGRAMSOCKETIMPL
#define JAVA_NET_DATAGRAMSOCKETIMPL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
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
	class DatagramSocketImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::net

#include "../io/FileDescriptor.hpp"
#include "DatagramSocket.hpp"
#include "InetAddress.hpp"
#include "SocketAddress.hpp"
#include "NetworkInterface.hpp"
#include "DatagramPacket.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void DatagramSocketImpl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocketImpl",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class DatagramSocketImpl : public __jni_impl::java::net::DatagramSocketImpl
	{
	public:
		DatagramSocketImpl(QAndroidJniObject obj) { __thiz = obj; }
		DatagramSocketImpl()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_DATAGRAMSOCKETIMPL

