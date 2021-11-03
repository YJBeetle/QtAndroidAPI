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
class JObject;
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SocketImpl(QJniObject obj);
		
		// Constructors
		SocketImpl();
		
		// Methods
		JString toString();
	};
} // namespace java::net

