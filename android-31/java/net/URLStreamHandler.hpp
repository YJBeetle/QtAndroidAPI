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
		
		// QJniObject forward
		template<typename ...Ts> explicit URLStreamHandler(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		URLStreamHandler(QJniObject obj);
		
		// Constructors
		URLStreamHandler();
		
		// Methods
	};
} // namespace java::net

