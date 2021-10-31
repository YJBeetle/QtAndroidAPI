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
		
		SSLKeyException(QAndroidJniObject obj);
		// Constructors
		SSLKeyException(jstring arg0);
		SSLKeyException() = default;
		
		// Methods
	};
} // namespace javax::net::ssl

