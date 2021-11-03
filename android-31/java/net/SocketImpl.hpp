#pragma once

#include "../../JObject.hpp"

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
	class SocketImpl : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SocketImpl(QAndroidJniObject obj);
		
		// Constructors
		SocketImpl();
		
		// Methods
		jstring toString();
	};
} // namespace java::net

