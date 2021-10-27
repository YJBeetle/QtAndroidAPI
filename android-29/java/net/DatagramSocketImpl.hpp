#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::net
{
	class DatagramPacket;
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
#include "DatagramPacket.hpp"
#include "InetAddress.hpp"
#include "NetworkInterface.hpp"
#include "SocketAddress.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void DatagramSocketImpl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocketImpl",
			"()V"
		);
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

