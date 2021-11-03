#pragma once

#include "./SSLException.hpp"

class JString;

namespace javax::net::ssl
{
	class SSLHandshakeException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLHandshakeException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLHandshakeException(QJniObject obj);
		
		// Constructors
		SSLHandshakeException(JString arg0);
		
		// Methods
	};
} // namespace javax::net::ssl

