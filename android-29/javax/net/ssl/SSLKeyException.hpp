#pragma once

#include "./SSLException.hpp"

class JString;

namespace javax::net::ssl
{
	class SSLKeyException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLKeyException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLKeyException(QAndroidJniObject obj) : javax::net::ssl::SSLException(obj) {}
		
		// Constructors
		SSLKeyException(JString arg0);
		
		// Methods
	};
} // namespace javax::net::ssl

