#include "../io/FileDescriptor.hpp"
#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "./InetAddress.hpp"
#include "./SocketAddress.hpp"
#include "./SocketImpl.hpp"

namespace java::net
{
	// Fields
	
	SocketImpl::SocketImpl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SocketImpl::SocketImpl()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketImpl",
			"()V"
		);
	}
	
	// Methods
	jstring SocketImpl::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

