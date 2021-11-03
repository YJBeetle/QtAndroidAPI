#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./SSLException.hpp"


namespace javax::net::ssl
{
	class SSLPeerUnverifiedException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLPeerUnverifiedException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLPeerUnverifiedException(QAndroidJniObject obj);
		
		// Constructors
		SSLPeerUnverifiedException(jstring arg0);
		
		// Methods
	};
} // namespace javax::net::ssl

