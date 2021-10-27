#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class SSLContextSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		SSLContextSpi(QAndroidJniObject obj);
		// Constructors
		SSLContextSpi();
		
		// Methods
	};
} // namespace javax::net::ssl

