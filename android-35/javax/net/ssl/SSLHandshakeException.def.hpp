#pragma once

#include "./SSLException.def.hpp"

class JString;
class JThrowable;

namespace javax::net::ssl
{
	class SSLHandshakeException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLHandshakeException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLHandshakeException(QJniObject obj) : javax::net::ssl::SSLException(obj) {}
		
		// Constructors
		SSLHandshakeException(JString arg0);
		SSLHandshakeException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace javax::net::ssl

