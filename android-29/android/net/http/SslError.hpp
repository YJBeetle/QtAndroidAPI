#pragma once

#ifndef ANDROID_NET_HTTP_SSLERROR
#define ANDROID_NET_HTTP_SSLERROR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}
namespace __jni_impl::android::net::http
{
	class SslCertificate;
}

namespace __jni_impl::android::net::http
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
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::java::security::cert::X509Certificate arg1, jstring arg2);
		void __constructor(jint arg0, __jni_impl::android::net::http::SslCertificate arg1, jstring arg2);
		void __constructor(jint arg0, __jni_impl::java::security::cert::X509Certificate arg1);
		void __constructor(jint arg0, __jni_impl::android::net::http::SslCertificate arg1);
		
		// Methods
		jstring toString();
		QAndroidJniObject getCertificate();
		jstring getUrl();
		jboolean addError(jint arg0);
		jboolean hasError(jint arg0);
		jint getPrimaryError();
	};
} // namespace __jni_impl::android::net::http

#include "../../../java/security/cert/X509Certificate.hpp"
#include "SslCertificate.hpp"

namespace __jni_impl::android::net::http
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
	
	// Constructors
	void SslError::__constructor(jint arg0, __jni_impl::java::security::cert::X509Certificate arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILjava/security/cert/X509Certificate;Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	void SslError::__constructor(jint arg0, __jni_impl::android::net::http::SslCertificate arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILandroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	void SslError::__constructor(jint arg0, __jni_impl::java::security::cert::X509Certificate arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILjava/security/cert/X509Certificate;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void SslError::__constructor(jint arg0, __jni_impl::android::net::http::SslCertificate arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslError",
			"(ILandroid/net/http/SslCertificate;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring SslError::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SslError::getCertificate()
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"()Landroid/net/http/SslCertificate;"
		);
	}
	jstring SslError::getUrl()
	{
		return __thiz.callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SslError::addError(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addError",
			"(I)Z",
			arg0
		);
	}
	jboolean SslError::hasError(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasError",
			"(I)Z",
			arg0
		);
	}
	jint SslError::getPrimaryError()
	{
		return __thiz.callMethod<jint>(
			"getPrimaryError",
			"()I"
		);
	}
} // namespace __jni_impl::android::net::http

namespace android::net::http
{
	class SslError : public __jni_impl::android::net::http::SslError
	{
	public:
		SslError(QAndroidJniObject obj) { __thiz = obj; }
		SslError(jint arg0, __jni_impl::java::security::cert::X509Certificate arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SslError(jint arg0, __jni_impl::android::net::http::SslCertificate arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SslError(jint arg0, __jni_impl::java::security::cert::X509Certificate arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SslError(jint arg0, __jni_impl::android::net::http::SslCertificate arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::net::http

#endif // ANDROID_NET_HTTP_SSLERROR

