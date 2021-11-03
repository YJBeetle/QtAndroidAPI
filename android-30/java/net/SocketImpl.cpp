#include "../io/FileDescriptor.hpp"
#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "./InetAddress.hpp"
#include "./SocketAddress.hpp"
#include "./SocketImpl.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	SocketImpl::SocketImpl(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SocketImpl::SocketImpl()
		: JObject(
			"java.net.SocketImpl",
			"()V"
		) {}
	
	// Methods
	jstring SocketImpl::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

