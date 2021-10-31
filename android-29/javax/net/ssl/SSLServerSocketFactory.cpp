#include "../ServerSocketFactory.hpp"
#include "./SSLServerSocketFactory.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLServerSocketFactory::SSLServerSocketFactory(QAndroidJniObject obj) : javax::net::ServerSocketFactory(obj) {}
	
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
	jarray SSLServerSocketFactory::getDefaultCipherSuites()
	{
		return callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLServerSocketFactory::getSupportedCipherSuites()
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
} // namespace javax::net::ssl

