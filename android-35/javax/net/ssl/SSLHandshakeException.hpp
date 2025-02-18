#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SSLHandshakeException.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SSLHandshakeException::SSLHandshakeException(JString arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLHandshakeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SSLHandshakeException::SSLHandshakeException(JString arg0, JThrowable arg1)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLHandshakeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./SSLException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
