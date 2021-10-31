#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./SSLException.hpp"


namespace javax::net::ssl
{
	class SSLKeyException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLKeyException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLKeyException(QAndroidJniObject obj);
		
		// Constructors
		SSLKeyException(jstring arg0);
		
		// Methods
	};
} // namespace javax::net::ssl

