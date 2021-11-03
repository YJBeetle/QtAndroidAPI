#pragma once

#include "../../../java/net/HttpURLConnection.hpp"

class JArray;
class JString;
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
		static JObject getDefaultHostnameVerifier();
		static javax::net::ssl::SSLSocketFactory getDefaultSSLSocketFactory();
		static void setDefaultHostnameVerifier(JObject arg0);
		static void setDefaultSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0);
		JString getCipherSuite();
		JObject getHostnameVerifier();
		JArray getLocalCertificates();
		JObject getLocalPrincipal();
		JObject getPeerPrincipal();
		java::util::Optional getSSLSession();
		javax::net::ssl::SSLSocketFactory getSSLSocketFactory();
		JArray getServerCertificates();
		void setHostnameVerifier(JObject arg0);
		void setSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0);
	};
} // namespace javax::net::ssl

