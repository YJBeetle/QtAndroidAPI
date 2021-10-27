#pragma once

#ifndef ANDROID_NET_HTTP_SSLCERTIFICATE_DNAME
#define ANDROID_NET_HTTP_SSLCERTIFICATE_DNAME

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::http
{
	class SslCertificate;
}

namespace __jni_impl::android::net::http
{
	class SslCertificate_DName : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::net::http::SslCertificate arg0, jstring arg1);
		void __constructor(__jni_impl::android::net::http::SslCertificate arg0, const QString &arg1);
		
		// Methods
		jstring getCName();
		jstring getDName();
		jstring getOName();
		jstring getUName();
	};
} // namespace __jni_impl::android::net::http

#include "SslCertificate.hpp"

namespace __jni_impl::android::net::http
{
	// Fields
	
	// Constructors
	void SslCertificate_DName::__constructor(__jni_impl::android::net::http::SslCertificate arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate$DName",
			"(Landroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SslCertificate_DName::__constructor(__jni_impl::android::net::http::SslCertificate arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate$DName",
			"(Landroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jstring SslCertificate_DName::getCName()
	{
		return __thiz.callObjectMethod(
			"getCName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SslCertificate_DName::getDName()
	{
		return __thiz.callObjectMethod(
			"getDName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SslCertificate_DName::getOName()
	{
		return __thiz.callObjectMethod(
			"getOName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SslCertificate_DName::getUName()
	{
		return __thiz.callObjectMethod(
			"getUName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::net::http

namespace android::net::http
{
	class SslCertificate_DName : public __jni_impl::android::net::http::SslCertificate_DName
	{
	public:
		SslCertificate_DName(QAndroidJniObject obj) { __thiz = obj; }
		SslCertificate_DName(__jni_impl::android::net::http::SslCertificate arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::net::http

#endif // ANDROID_NET_HTTP_SSLCERTIFICATE_DNAME

