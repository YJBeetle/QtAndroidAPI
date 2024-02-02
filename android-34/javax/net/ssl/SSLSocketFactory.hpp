#pragma once

#include "../../../JArray.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/Socket.def.hpp"
#include "../SocketFactory.def.hpp"
#include "./SSLSocketFactory.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SSLSocketFactory::SSLSocketFactory()
		: javax::net::SocketFactory(
			"javax.net.ssl.SSLSocketFactory",
			"()V"
		) {}
	
	// Methods
	inline javax::net::SocketFactory SSLSocketFactory::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLSocketFactory",
			"getDefault",
			"()Ljavax/net/SocketFactory;"
		);
	}
	inline java::net::Socket SSLSocketFactory::createSocket(java::net::Socket arg0, java::io::InputStream arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/io/InputStream;Z)Ljava/net/Socket;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline java::net::Socket SSLSocketFactory::createSocket(java::net::Socket arg0, JString arg1, jint arg2, jboolean arg3) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	inline JArray SSLSocketFactory::getDefaultCipherSuites() const
	{
		return callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray SSLSocketFactory::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
} // namespace javax::net::ssl

// Base class headers
#include "../SocketFactory.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
