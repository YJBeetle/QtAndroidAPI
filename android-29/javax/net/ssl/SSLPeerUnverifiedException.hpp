#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./SSLException.hpp"


namespace javax::net::ssl
{
	class SSLPeerUnverifiedException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		SSLPeerUnverifiedException(QAndroidJniObject obj);
		// Constructors
		SSLPeerUnverifiedException(jstring &arg0);
		SSLPeerUnverifiedException(const QString &arg0);
		SSLPeerUnverifiedException() = default;
		
		// Methods
	};
} // namespace javax::net::ssl

