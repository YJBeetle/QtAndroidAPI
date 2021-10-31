#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::net
{
	class Socket;
}
namespace javax::net::ssl
{
	class SSLEngine;
}

namespace javax::net::ssl
{
	class X509ExtendedTrustManager : public __JniBaseClass
	{
	public:
		// Fields
		
		X509ExtendedTrustManager(QAndroidJniObject obj);
		// Constructors
		X509ExtendedTrustManager();
		
		// Methods
		void checkClientTrusted(jarray arg0, jstring arg1, java::net::Socket arg2);
		void checkClientTrusted(jarray arg0, jstring arg1, javax::net::ssl::SSLEngine arg2);
		void checkServerTrusted(jarray arg0, jstring arg1, java::net::Socket arg2);
		void checkServerTrusted(jarray arg0, jstring arg1, javax::net::ssl::SSLEngine arg2);
	};
} // namespace javax::net::ssl

