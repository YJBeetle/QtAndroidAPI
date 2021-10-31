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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLServerSocketFactory(const char *className, const char *sig, Ts...agv) : javax::net::ServerSocketFactory(className, sig, std::forward<Ts>(agv)...) {}
		SSLServerSocketFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::net::ServerSocketFactory getDefault();
		jarray getDefaultCipherSuites();
		jarray getSupportedCipherSuites();
	};
} // namespace javax::net::ssl

