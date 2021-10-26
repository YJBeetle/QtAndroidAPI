#pragma once

#ifndef JAVAX_SECURITY_CERT_X509CERTIFICATE
#define JAVAX_SECURITY_CERT_X509CERTIFICATE

#include "../../../__JniBaseClass.hpp"
#include "Certificate.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::javax::security::cert
{
	class X509Certificate : public __jni_impl::javax::security::cert::Certificate
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jbyteArray arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject getIssuerDN();
		QAndroidJniObject getSubjectDN();
		jint getVersion();
		jstring getSigAlgName();
		jbyteArray getSigAlgParams();
		void checkValidity(__jni_impl::java::util::Date arg0);
		void checkValidity();
		QAndroidJniObject getNotBefore();
		QAndroidJniObject getNotAfter();
		jstring getSigAlgOID();
		QAndroidJniObject getSerialNumber();
	};
} // namespace __jni_impl::javax::security::cert

#include "../../../java/io/InputStream.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/math/BigInteger.hpp"

namespace __jni_impl::javax::security::cert
{
	// Fields
	
	// Constructors
	void X509Certificate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.X509Certificate",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject X509Certificate::getInstance(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.security.cert.X509Certificate",
			"getInstance",
			"([B)Ljavax/security/cert/X509Certificate;",
			arg0
		);
	}
	QAndroidJniObject X509Certificate::getInstance(__jni_impl::java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.security.cert.X509Certificate",
			"getInstance",
			"(Ljava/io/InputStream;)Ljavax/security/cert/X509Certificate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject X509Certificate::getIssuerDN()
	{
		return __thiz.callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject X509Certificate::getSubjectDN()
	{
		return __thiz.callObjectMethod(
			"getSubjectDN",
			"()Ljava/security/Principal;"
		);
	}
	jint X509Certificate::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jstring X509Certificate::getSigAlgName()
	{
		return __thiz.callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray X509Certificate::getSigAlgParams()
	{
		return __thiz.callObjectMethod(
			"getSigAlgParams",
			"()[B"
		).object<jbyteArray>();
	}
	void X509Certificate::checkValidity(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"checkValidity",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void X509Certificate::checkValidity()
	{
		__thiz.callMethod<void>(
			"checkValidity",
			"()V"
		);
	}
	QAndroidJniObject X509Certificate::getNotBefore()
	{
		return __thiz.callObjectMethod(
			"getNotBefore",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509Certificate::getNotAfter()
	{
		return __thiz.callObjectMethod(
			"getNotAfter",
			"()Ljava/util/Date;"
		);
	}
	jstring X509Certificate::getSigAlgOID()
	{
		return __thiz.callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject X509Certificate::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::javax::security::cert

namespace javax::security::cert
{
	class X509Certificate : public __jni_impl::javax::security::cert::X509Certificate
	{
	public:
		X509Certificate(QAndroidJniObject obj) { __thiz = obj; }
		X509Certificate()
		{
			__constructor();
		}
	};
} // namespace javax::security::cert

#endif // JAVAX_SECURITY_CERT_X509CERTIFICATE

