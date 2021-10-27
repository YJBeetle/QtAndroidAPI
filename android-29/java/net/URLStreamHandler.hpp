#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Proxy;
}
namespace java::net
{
	class URL;
}
namespace java::net
{
	class URLConnection;
}

namespace java::net
{
	class URLStreamHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		URLStreamHandler(QAndroidJniObject obj);
		// Constructors
		URLStreamHandler();
		
		// Methods
	};
} // namespace java::net

