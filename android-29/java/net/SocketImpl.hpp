#pragma once

#ifndef JAVA_NET_SOCKETIMPL
#define JAVA_NET_SOCKETIMPL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::net
{
	class SocketImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::java::net

#include "../io/FileDescriptor.hpp"
#include "InetAddress.hpp"
#include "SocketAddress.hpp"
#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void SocketImpl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketImpl",
			"()V");
	}
	
	// Methods
	QAndroidJniObject SocketImpl::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class SocketImpl : public __jni_impl::java::net::SocketImpl
	{
	public:
		SocketImpl(QAndroidJniObject obj) { __thiz = obj; }
		SocketImpl()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_SOCKETIMPL

