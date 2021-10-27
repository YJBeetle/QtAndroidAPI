#include "../../../../../java/security/cert/X509Certificate.hpp"
#include "../../../../../javax/net/ssl/SSLSocket.hpp"
#include "./AbstractVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	AbstractVerifier::AbstractVerifier(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractVerifier::AbstractVerifier()
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
	jarray AbstractVerifier::getCNs(java::security::cert::X509Certificate arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"getCNs",
			"(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jarray AbstractVerifier::getDNSSubjectAlts(java::security::cert::X509Certificate arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"getDNSSubjectAlts",
			"(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jboolean AbstractVerifier::verify(jstring arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AbstractVerifier::verify(const QString &arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AbstractVerifier::verify(jstring arg0, java::security::cert::X509Certificate arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbstractVerifier::verify(const QString &arg0, java::security::cert::X509Certificate arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AbstractVerifier::verify(jstring arg0, javax::net::ssl::SSLSocket arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbstractVerifier::verify(const QString &arg0, javax::net::ssl::SSLSocket arg1)
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
} // namespace org::apache::http::conn::ssl

