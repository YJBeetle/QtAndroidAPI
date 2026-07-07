#pragma once

#include "../../../java/net/HttpURLConnection.def.hpp"

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
		HttpsURLConnection(QJniObject obj) : java::net::HttpURLConnection(obj) {}
		
		// Constructors
		
		// Methods
		static JObject getDefaultHostnameVerifier();
		static javax::net::ssl::SSLSocketFactory getDefaultSSLSocketFactory();
		static void setDefaultHostnameVerifier(JObject arg0);
		static void setDefaultSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0);
		JString getCipherSuite() const;
		JObject getHostnameVerifier() const;
		JArray getLocalCertificates() const;
		JObject getLocalPrincipal() const;
		JObject getPeerPrincipal() const;
		java::util::Optional getSSLSession() const;
		javax::net::ssl::SSLSocketFactory getSSLSocketFactory() const;
		JArray getServerCertificates() const;
		void setHostnameVerifier(JObject arg0) const;
		void setSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0) const;
	};
} // namespace javax::net::ssl

