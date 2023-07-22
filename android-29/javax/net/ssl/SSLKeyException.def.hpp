#pragma once

#include "./SSLException.def.hpp"

class JString;
class JThrowable;

namespace javax::net::ssl
{
	class SSLKeyException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLKeyException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLKeyException(QJniObject obj) : javax::net::ssl::SSLException(obj) {}
		
		// Constructors
		SSLKeyException(JString arg0);
		SSLKeyException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace javax::net::ssl

