#pragma once

#include "../../../../../__JniBaseClass.hpp"

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
	class AbstractVerifier : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractVerifier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractVerifier(QJniObject obj);
		
		// Constructors
		AbstractVerifier();
		
		// Methods
		static jboolean acceptableCountryWildcard(jstring arg0);
		static jint countDots(jstring arg0);
		static jarray getCNs(java::security::cert::X509Certificate arg0);
		static jarray getDNSSubjectAlts(java::security::cert::X509Certificate arg0);
		jboolean verify(jstring arg0, __JniBaseClass arg1);
		void verify(jstring arg0, java::security::cert::X509Certificate arg1);
		void verify(jstring arg0, javax::net::ssl::SSLSocket arg1);
		void verify(jstring arg0, jarray arg1, jarray arg2, jboolean arg3);
	};
} // namespace org::apache::http::conn::ssl

