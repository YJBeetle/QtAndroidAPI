#include "./SslCertificate.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "./SslError.hpp"

namespace android::net::http
{
	// Fields
	jint SslError::SSL_DATE_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_DATE_INVALID"
		);
	}
	jint SslError::SSL_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_EXPIRED"
		);
	}
	jint SslError::SSL_IDMISMATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_IDMISMATCH"
		);
	}
	jint SslError::SSL_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_INVALID"
		);
	}
	jint SslError::SSL_MAX_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_MAX_ERROR"
		);
	}
	jint SslError::SSL_NOTYETVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_NOTYETVALID"
		);
	}
	jint SslError::SSL_UNTRUSTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_UNTRUSTED"
		);
	}
	
	SslError::SslError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SslError::SslError(jint &arg0, android::net::http::SslCertificate &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILandroid/net/http/SslCertificate;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	SslError::SslError(jint &arg0, java::security::cert::X509Certificate &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILjava/security/cert/X509Certificate;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	SslError::SslError(jint &arg0, android::net::http::SslCertificate &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILandroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	SslError::SslError(jint &arg0, android::net::http::SslCertificate &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILandroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	SslError::SslError(jint &arg0, java::security::cert::X509Certificate &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILjava/security/cert/X509Certificate;Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	SslError::SslError(jint &arg0, java::security::cert::X509Certificate &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILjava/security/cert/X509Certificate;Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jboolean SslError::addError(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addError",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject SslError::getCertificate()
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"()Landroid/net/http/SslCertificate;"
		);
	}
	jint SslError::getPrimaryError()
	{
		return __thiz.callMethod<jint>(
			"getPrimaryError",
			"()I"
		);
	}
	jstring SslError::getUrl()
	{
		return __thiz.callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SslError::hasError(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasError",
			"(I)Z",
			arg0
		);
	}
	jstring SslError::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::http

