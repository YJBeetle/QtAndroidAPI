#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class SocketAddress;
}

namespace java::net
{
	class SocketImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		SocketImpl(QAndroidJniObject obj);
		// Constructors
		SocketImpl();
		
		// Methods
		jstring toString();
	};
} // namespace java::net

