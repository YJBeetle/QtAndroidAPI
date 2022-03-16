#pragma once

#include "../../../JString.hpp"
#include "./SSLPeerUnverifiedException.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SSLPeerUnverifiedException::SSLPeerUnverifiedException(JString arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLPeerUnverifiedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./SSLException.hpp"

