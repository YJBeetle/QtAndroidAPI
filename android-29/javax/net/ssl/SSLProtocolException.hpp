#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./SSLException.hpp"


namespace javax::net::ssl
{
	class SSLProtocolException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		SSLProtocolException(QAndroidJniObject obj);
		// Constructors
		SSLProtocolException(jstring &arg0);
		SSLProtocolException(const QString &arg0);
		SSLProtocolException() = default;
		
		// Methods
	};
} // namespace javax::net::ssl

