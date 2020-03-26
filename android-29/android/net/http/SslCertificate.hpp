#pragma once

#ifndef ANDROID_NET_HTTP_SSLCERTIFICATE
#define ANDROID_NET_HTTP_SSLCERTIFICATE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::android::net::http
{
	class SslCertificate_DName;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::net::http
{
	class SslCertificate : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::cert::X509Certificate arg0);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::java::util::Date arg2, __jni_impl::java::util::Date arg3);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		
		// Methods
		jstring toString();
		QAndroidJniObject getValidNotBeforeDate();
		jstring getValidNotBefore();
		QAndroidJniObject getValidNotAfterDate();
		jstring getValidNotAfter();
		QAndroidJniObject getIssuedTo();
		QAndroidJniObject getIssuedBy();
		QAndroidJniObject getX509Certificate();
		static QAndroidJniObject saveState(__jni_impl::android::net::http::SslCertificate arg0);
		static QAndroidJniObject restoreState(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::net::http

#include "../../../java/security/cert/X509Certificate.hpp"
#include "../../../java/util/Date.hpp"
#include "SslCertificate_DName.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::net::http
{
	// Fields
	
	// Constructors
	void SslCertificate::__constructor(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object());
	}
	void SslCertificate::__constructor(jstring arg0, jstring arg1, __jni_impl::java::util::Date arg2, __jni_impl::java::util::Date arg3)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void SslCertificate::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jstring SslCertificate::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SslCertificate::getValidNotBeforeDate()
	{
		return __thiz.callObjectMethod(
			"getValidNotBeforeDate",
			"()Ljava/util/Date;"
		);
	}
	jstring SslCertificate::getValidNotBefore()
	{
		return __thiz.callObjectMethod(
			"getValidNotBefore",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SslCertificate::getValidNotAfterDate()
	{
		return __thiz.callObjectMethod(
			"getValidNotAfterDate",
			"()Ljava/util/Date;"
		);
	}
	jstring SslCertificate::getValidNotAfter()
	{
		return __thiz.callObjectMethod(
			"getValidNotAfter",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SslCertificate::getIssuedTo()
	{
		return __thiz.callObjectMethod(
			"getIssuedTo",
			"()Landroid/net/http/SslCertificate$DName;"
		);
	}
	QAndroidJniObject SslCertificate::getIssuedBy()
	{
		return __thiz.callObjectMethod(
			"getIssuedBy",
			"()Landroid/net/http/SslCertificate$DName;"
		);
	}
	QAndroidJniObject SslCertificate::getX509Certificate()
	{
		return __thiz.callObjectMethod(
			"getX509Certificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	QAndroidJniObject SslCertificate::saveState(__jni_impl::android::net::http::SslCertificate arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.http.SslCertificate",
			"saveState",
			"(Landroid/net/http/SslCertificate;)Landroid/os/Bundle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SslCertificate::restoreState(__jni_impl::android::os::Bundle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.http.SslCertificate",
			"restoreState",
			"(Landroid/os/Bundle;)Landroid/net/http/SslCertificate;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::http

namespace android::net::http
{
	class SslCertificate : public __jni_impl::android::net::http::SslCertificate
	{
	public:
		SslCertificate(QAndroidJniObject obj) { __thiz = obj; }
		SslCertificate(__jni_impl::java::security::cert::X509Certificate arg0)
		{
			__constructor(
				arg0);
		}
		SslCertificate(jstring arg0, jstring arg1, __jni_impl::java::util::Date arg2, __jni_impl::java::util::Date arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SslCertificate(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::net::http

#endif // ANDROID_NET_HTTP_SSLCERTIFICATE

