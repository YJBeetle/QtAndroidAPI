#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../ServerSocketFactory.hpp"

namespace javax::net
{
	class ServerSocketFactory;
}

namespace javax::net::ssl
{
	class SSLServerSocketFactory : public javax::net::ServerSocketFactory
	{
	public:
		// Fields
		
		SSLServerSocketFactory(QAndroidJniObject obj);
		// Constructors
		SSLServerSocketFactory() = default;
		
		// Methods
		static QAndroidJniObject getDefault();
		jarray getDefaultCipherSuites();
		jarray getSupportedCipherSuites();
	};
} // namespace javax::net::ssl

