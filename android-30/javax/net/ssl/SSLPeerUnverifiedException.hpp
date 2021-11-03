#pragma once

#include "./SSLException.hpp"

class JString;

namespace javax::net::ssl
{
	class SSLPeerUnverifiedException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLPeerUnverifiedException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLPeerUnverifiedException(QJniObject obj);
		
		// Constructors
		SSLPeerUnverifiedException(JString arg0);
		
		// Methods
	};
} // namespace javax::net::ssl

