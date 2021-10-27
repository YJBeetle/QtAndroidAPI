#include "./InetAddress.hpp"
#include "./Proxy.hpp"
#include "./URL.hpp"
#include "./URLConnection.hpp"
#include "./URLStreamHandler.hpp"

namespace java::net
{
	// Fields
	
	URLStreamHandler::URLStreamHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	URLStreamHandler::URLStreamHandler()
	{
		__thiz = QAndroidJniObject(
			"java.net.URLStreamHandler",
			"()V"
		);
	}
	
	// Methods
} // namespace java::net

