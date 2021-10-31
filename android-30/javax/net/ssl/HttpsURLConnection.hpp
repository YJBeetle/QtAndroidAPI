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
		
		// QJniObject forward
		template<typename ...Ts> explicit HttpsURLConnection(const char *className, const char *sig, Ts...agv) : java::net::HttpURLConnection(className, sig, std::forward<Ts>(agv)...) {}
		HttpsURLConnection(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass getDefaultHostnameVerifier();
		static javax::net::ssl::SSLSocketFactory getDefaultSSLSocketFactory();
		static void setDefaultHostnameVerifier(__JniBaseClass arg0);
		static void setDefaultSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0);
		jstring getCipherSuite();
		__JniBaseClass getHostnameVerifier();
		jarray getLocalCertificates();
		__JniBaseClass getLocalPrincipal();
		__JniBaseClass getPeerPrincipal();
		java::util::Optional getSSLSession();
		javax::net::ssl::SSLSocketFactory getSSLSocketFactory();
		jarray getServerCertificates();
		void setHostnameVerifier(__JniBaseClass arg0);
		void setSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0);
	};
} // namespace javax::net::ssl

