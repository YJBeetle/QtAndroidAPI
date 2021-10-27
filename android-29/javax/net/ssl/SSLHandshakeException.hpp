#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./SSLException.hpp"


namespace javax::net::ssl
{
	class SSLHandshakeException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		SSLHandshakeException(QAndroidJniObject obj);
		// Constructors
		SSLHandshakeException(jstring &arg0);
		SSLHandshakeException(const QString &arg0);
		SSLHandshakeException() = default;
		
		// Methods
	};
} // namespace javax::net::ssl

