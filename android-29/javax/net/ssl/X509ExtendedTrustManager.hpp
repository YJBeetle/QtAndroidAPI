#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;
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
	class X509ExtendedTrustManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit X509ExtendedTrustManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		X509ExtendedTrustManager(QJniObject obj);
		
		// Constructors
		X509ExtendedTrustManager();
		
		// Methods
		void checkClientTrusted(JArray arg0, JString arg1, java::net::Socket arg2);
		void checkClientTrusted(JArray arg0, JString arg1, javax::net::ssl::SSLEngine arg2);
		void checkServerTrusted(JArray arg0, JString arg1, java::net::Socket arg2);
		void checkServerTrusted(JArray arg0, JString arg1, javax::net::ssl::SSLEngine arg2);
	};
} // namespace javax::net::ssl

