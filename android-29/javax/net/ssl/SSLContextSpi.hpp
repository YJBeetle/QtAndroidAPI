#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JString;
namespace java::security
{
	class SecureRandom;
}
namespace javax::net::ssl
{
	class SSLEngine;
}
namespace javax::net::ssl
{
	class SSLParameters;
}
namespace javax::net::ssl
{
	class SSLServerSocketFactory;
}
namespace javax::net::ssl
{
	class SSLSocket;
}
namespace javax::net::ssl
{
	class SSLSocketFactory;
}

namespace javax::net::ssl
{
	class SSLContextSpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLContextSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLContextSpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SSLContextSpi();
		
		// Methods
	};
} // namespace javax::net::ssl

