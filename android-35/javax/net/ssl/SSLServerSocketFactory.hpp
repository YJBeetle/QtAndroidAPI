#pragma once

#include "../../../JArray.hpp"
#include "../ServerSocketFactory.def.hpp"
#include "./SSLServerSocketFactory.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::net::ServerSocketFactory SSLServerSocketFactory::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLServerSocketFactory",
			"getDefault",
			"()Ljavax/net/ServerSocketFactory;"
		);
	}
	inline JArray SSLServerSocketFactory::getDefaultCipherSuites() const
	{
		return callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray SSLServerSocketFactory::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
} // namespace javax::net::ssl

// Base class headers
#include "../ServerSocketFactory.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
