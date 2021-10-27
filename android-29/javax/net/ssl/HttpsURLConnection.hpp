#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/net/URLConnection.hpp"
#include "../../../java/net/HttpURLConnection.hpp"

namespace java::net
{
	class URL;
}
namespace java::util
{
	class Optional;
}
namespace javax::net::ssl
{
	class SSLSocketFactory;
}

namespace javax::net::ssl
{
	class HttpsURLConnection : public java::net::HttpURLConnection
	{
	public:
		// Fields
		
		HttpsURLConnection(QAndroidJniObject obj);
		// Constructors
		HttpsURLConnection() = default;
		
		// Methods
		static QAndroidJniObject getDefaultHostnameVerifier();
		static QAndroidJniObject getDefaultSSLSocketFactory();
		static void setDefaultHostnameVerifier(__JniBaseClass arg0);
		static void setDefaultSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0);
		jstring getCipherSuite();
		QAndroidJniObject getHostnameVerifier();
		jarray getLocalCertificates();
		QAndroidJniObject getLocalPrincipal();
		QAndroidJniObject getPeerPrincipal();
		QAndroidJniObject getSSLSession();
		QAndroidJniObject getSSLSocketFactory();
		jarray getServerCertificates();
		void setHostnameVerifier(__JniBaseClass arg0);
		void setSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0);
	};
} // namespace javax::net::ssl

