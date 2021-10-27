#pragma once

#ifndef ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER
#define ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLSocket;
}

namespace __jni_impl::org::apache::http::conn::ssl
{
	class AbstractVerifier : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean acceptableCountryWildcard(jstring arg0);
		static jboolean acceptableCountryWildcard(const QString &arg0);
		static jint countDots(jstring arg0);
		static jint countDots(const QString &arg0);
		static jarray getCNs(__jni_impl::java::security::cert::X509Certificate arg0);
		static jarray getDNSSubjectAlts(__jni_impl::java::security::cert::X509Certificate arg0);
		jboolean verify(jstring arg0, __jni_impl::__JniBaseClass arg1);
		jboolean verify(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void verify(jstring arg0, __jni_impl::java::security::cert::X509Certificate arg1);
		void verify(const QString &arg0, __jni_impl::java::security::cert::X509Certificate arg1);
		void verify(jstring arg0, __jni_impl::javax::net::ssl::SSLSocket arg1);
		void verify(const QString &arg0, __jni_impl::javax::net::ssl::SSLSocket arg1);
		void verify(jstring arg0, jarray arg1, jarray arg2, jboolean arg3);
		void verify(const QString &arg0, jarray arg1, jarray arg2, jboolean arg3);
	};
} // namespace __jni_impl::org::apache::http::conn::ssl

#include "../../../../../java/security/cert/X509Certificate.hpp"
#include "../../../../../javax/net/ssl/SSLSocket.hpp"

namespace __jni_impl::org::apache::http::conn::ssl
{
	// Fields
	
	// Constructors
	void AbstractVerifier::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"()V"
		);
	}
	
	// Methods
	jboolean AbstractVerifier::acceptableCountryWildcard(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"acceptableCountryWildcard",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean AbstractVerifier::acceptableCountryWildcard(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"acceptableCountryWildcard",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint AbstractVerifier::countDots(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"countDots",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint AbstractVerifier::countDots(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"countDots",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray AbstractVerifier::getCNs(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"getCNs",
			"(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jarray AbstractVerifier::getDNSSubjectAlts(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"getDNSSubjectAlts",
			"(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jboolean AbstractVerifier::verify(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AbstractVerifier::verify(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AbstractVerifier::verify(jstring arg0, __jni_impl::java::security::cert::X509Certificate arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbstractVerifier::verify(const QString &arg0, __jni_impl::java::security::cert::X509Certificate arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AbstractVerifier::verify(jstring arg0, __jni_impl::javax::net::ssl::SSLSocket arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbstractVerifier::verify(const QString &arg0, __jni_impl::javax::net::ssl::SSLSocket arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AbstractVerifier::verify(jstring arg0, jarray arg1, jarray arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Z)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void AbstractVerifier::verify(const QString &arg0, jarray arg1, jarray arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::org::apache::http::conn::ssl

namespace org::apache::http::conn::ssl
{
	class AbstractVerifier : public __jni_impl::org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		AbstractVerifier(QAndroidJniObject obj) { __thiz = obj; }
		AbstractVerifier()
		{
			__constructor();
		}
	};
} // namespace org::apache::http::conn::ssl

#endif // ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER

