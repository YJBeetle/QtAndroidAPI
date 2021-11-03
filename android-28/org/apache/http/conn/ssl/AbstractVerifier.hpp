#pragma once

#include "../../../../../JObject.hpp"

class JArray;
class JString;
namespace java::security::cert
{
	class X509Certificate;
}
namespace javax::net::ssl
{
	class SSLSocket;
}

namespace org::apache::http::conn::ssl
{
	class AbstractVerifier : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractVerifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractVerifier(QAndroidJniObject obj);
		
		// Constructors
		AbstractVerifier();
		
		// Methods
		static jboolean acceptableCountryWildcard(JString arg0);
		static jint countDots(JString arg0);
		static JArray getCNs(java::security::cert::X509Certificate arg0);
		static JArray getDNSSubjectAlts(java::security::cert::X509Certificate arg0);
		jboolean verify(JString arg0, JObject arg1);
		void verify(JString arg0, java::security::cert::X509Certificate arg1);
		void verify(JString arg0, javax::net::ssl::SSLSocket arg1);
		void verify(JString arg0, JArray arg1, JArray arg2, jboolean arg3);
	};
} // namespace org::apache::http::conn::ssl

