#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class SslCertificate;
}
class JString;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::http
{
	class SslError : public JObject
	{
	public:
		// Fields
		static jint SSL_DATE_INVALID();
		static jint SSL_EXPIRED();
		static jint SSL_IDMISMATCH();
		static jint SSL_INVALID();
		static jint SSL_MAX_ERROR();
		static jint SSL_NOTYETVALID();
		static jint SSL_UNTRUSTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit SslError(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SslError(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SslError(jint arg0, android::net::http::SslCertificate arg1);
		SslError(jint arg0, java::security::cert::X509Certificate arg1);
		SslError(jint arg0, android::net::http::SslCertificate arg1, JString arg2);
		SslError(jint arg0, java::security::cert::X509Certificate arg1, JString arg2);
		
		// Methods
		jboolean addError(jint arg0) const;
		android::net::http::SslCertificate getCertificate() const;
		jint getPrimaryError() const;
		JString getUrl() const;
		jboolean hasError(jint arg0) const;
		JString toString() const;
	};
} // namespace android::net::http

