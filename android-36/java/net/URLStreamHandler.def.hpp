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
		
		// QJniObject forward
		template<typename ...Ts> explicit URLStreamHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URLStreamHandler(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		URLStreamHandler();
		
		// Methods
	};
} // namespace java::net

