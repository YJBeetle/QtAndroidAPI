#include "./InetAddress.hpp"
#include "./Proxy.hpp"
#include "./URL.hpp"
#include "./URLConnection.hpp"
#include "./URLStreamHandler.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	URLStreamHandler::URLStreamHandler(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	URLStreamHandler::URLStreamHandler()
		: __JniBaseClass(
			"java.net.URLStreamHandler",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

