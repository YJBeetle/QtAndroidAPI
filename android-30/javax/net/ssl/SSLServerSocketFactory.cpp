#include "../../../JArray.hpp"
#include "../ServerSocketFactory.hpp"
#include "./SSLServerSocketFactory.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	javax::net::ServerSocketFactory SSLServerSocketFactory::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLServerSocketFactory",
			"getDefault",
			"()Ljavax/net/ServerSocketFactory;"
		);
	}
	JArray SSLServerSocketFactory::getDefaultCipherSuites() const
	{
		return callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLServerSocketFactory::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
} // namespace javax::net::ssl

