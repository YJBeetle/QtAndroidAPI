#pragma once

#include "./SSLException.def.hpp"

class JString;

namespace javax::net::ssl
{
	class SSLHandshakeException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLHandshakeException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLHandshakeException(QAndroidJniObject obj) : javax::net::ssl::SSLException(obj) {}
		
		// Constructors
		SSLHandshakeException(JString arg0);
		
		// Methods
	};
} // namespace javax::net::ssl

