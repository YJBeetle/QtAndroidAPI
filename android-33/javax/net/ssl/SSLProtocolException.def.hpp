#pragma once

#include "./SSLException.def.hpp"

class JString;
class JThrowable;

namespace javax::net::ssl
{
	class SSLProtocolException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLProtocolException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLProtocolException(QAndroidJniObject obj) : javax::net::ssl::SSLException(obj) {}
		
		// Constructors
		SSLProtocolException(JString arg0);
		SSLProtocolException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace javax::net::ssl

