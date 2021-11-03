#pragma once

#include "../../JObject.hpp"

class JString;
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
	class URLStreamHandler : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URLStreamHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URLStreamHandler(QAndroidJniObject obj);
		
		// Constructors
		URLStreamHandler();
		
		// Methods
	};
} // namespace java::net

