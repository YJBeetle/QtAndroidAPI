#pragma once

#include "./SSLException.hpp"

class JString;

namespace javax::net::ssl
{
	class SSLProtocolException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLProtocolException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLProtocolException(QJniObject obj);
		
		// Constructors
		SSLProtocolException(JString arg0);
		
		// Methods
	};
} // namespace javax::net::ssl

