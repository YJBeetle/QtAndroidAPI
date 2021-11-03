#include "../../JString.hpp"
#include "./InetAddress.hpp"
#include "./Proxy.hpp"
#include "./URL.hpp"
#include "./URLConnection.hpp"
#include "./URLStreamHandler.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	URLStreamHandler::URLStreamHandler(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	URLStreamHandler::URLStreamHandler()
		: JObject(
			"java.net.URLStreamHandler",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

