#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::http
{
	class SslCertificate;
}
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::http
{
	class SslError : public __JniBaseClass
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
		
		SslError(QAndroidJniObject obj);
		// Constructors
		SslError(jint arg0, android::net::http::SslCertificate arg1);
		SslError(jint arg0, java::security::cert::X509Certificate arg1);
		SslError(jint arg0, android::net::http::SslCertificate arg1, jstring arg2);
		SslError(jint arg0, java::security::cert::X509Certificate arg1, jstring arg2);
		SslError() = default;
		
		// Methods
		jboolean addError(jint arg0);
		QAndroidJniObject getCertificate();
		jint getPrimaryError();
		jstring getUrl();
		jboolean hasError(jint arg0);
		jstring toString();
	};
} // namespace android::net::http

