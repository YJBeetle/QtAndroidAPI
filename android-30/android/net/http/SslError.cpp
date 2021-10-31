#include "./SslCertificate.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "./SslError.hpp"

namespace android::net::http
{
	// Fields
	jint SslError::SSL_DATE_INVALID()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_DATE_INVALID"
		);
	}
	jint SslError::SSL_EXPIRED()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_EXPIRED"
		);
	}
	jint SslError::SSL_IDMISMATCH()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_IDMISMATCH"
		);
	}
	jint SslError::SSL_INVALID()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_INVALID"
		);
	}
	jint SslError::SSL_MAX_ERROR()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_MAX_ERROR"
		);
	}
	jint SslError::SSL_NOTYETVALID()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_NOTYETVALID"
		);
	}
	jint SslError::SSL_UNTRUSTED()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_UNTRUSTED"
		);
	}
	
	// QAndroidJniObject forward
	SslError::SslError(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SslError::SslError(jint arg0, android::net::http::SslCertificate arg1)
		: __JniBaseClass(
			"android.net.http.SslError",
			"(ILandroid/net/http/SslCertificate;)V",
			arg0,
			arg1.object()
		) {}
	SslError::SslError(jint arg0, java::security::cert::X509Certificate arg1)
		: __JniBaseClass(
			"android.net.http.SslError",
			"(ILjava/security/cert/X509Certificate;)V",
			arg0,
			arg1.object()
		) {}
	SslError::SslError(jint arg0, android::net::http::SslCertificate arg1, jstring arg2)
		: __JniBaseClass(
			"android.net.http.SslError",
			"(ILandroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	SslError::SslError(jint arg0, java::security::cert::X509Certificate arg1, jstring arg2)
		: __JniBaseClass(
			"android.net.http.SslError",
			"(ILjava/security/cert/X509Certificate;Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jboolean SslError::addError(jint arg0)
	{
		return callMethod<jboolean>(
			"addError",
			"(I)Z",
			arg0
		);
	}
	android::net::http::SslCertificate SslError::getCertificate()
	{
		return callObjectMethod(
			"getCertificate",
			"()Landroid/net/http/SslCertificate;"
		);
	}
	jint SslError::getPrimaryError()
	{
		return callMethod<jint>(
			"getPrimaryError",
			"()I"
		);
	}
	jstring SslError::getUrl()
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SslError::hasError(jint arg0)
	{
		return callMethod<jboolean>(
			"hasError",
			"(I)Z",
			arg0
		);
	}
	jstring SslError::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::http
