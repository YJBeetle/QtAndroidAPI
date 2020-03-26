#pragma once

#ifndef JAVA_SECURITY_CERT_CERTIFICATEFACTORY
#define JAVA_SECURITY_CERT_CERTIFICATEFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security::cert
{
	class CertificateFactorySpi;
}
namespace __jni_impl::java::security::cert
{
	class Certificate;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::security::cert
{
	class CertPath;
}
namespace __jni_impl::java::security::cert
{
	class CRL;
}

namespace __jni_impl::java::security::cert
{
	class CertificateFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		jstring getType();
		QAndroidJniObject generateCertificate(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject generateCertPath(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject generateCertPath(__jni_impl::java::io::InputStream arg0, jstring arg1);
		QAndroidJniObject generateCertPath(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getProvider();
		QAndroidJniObject getCertPathEncodings();
		QAndroidJniObject generateCertificates(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject generateCRL(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject generateCRLs(__jni_impl::java::io::InputStream arg0);
	};
} // namespace __jni_impl::java::security::cert

#include "../Provider.hpp"
#include "CertificateFactorySpi.hpp"
#include "Certificate.hpp"
#include "../../io/InputStream.hpp"
#include "CertPath.hpp"
#include "CRL.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertificateFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CertificateFactory::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertificateFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertificateFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactory::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertificateFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertificateFactory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CertificateFactory::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertificateFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertificateFactory;",
			arg0
		);
	}
	jstring CertificateFactory::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CertificateFactory::generateCertificate(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"generateCertificate",
			"(Ljava/io/InputStream;)Ljava/security/cert/Certificate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactory::generateCertPath(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"generateCertPath",
			"(Ljava/io/InputStream;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactory::generateCertPath(__jni_impl::java::io::InputStream arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"generateCertPath",
			"(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject CertificateFactory::generateCertPath(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateCertPath",
			"(Ljava/util/List;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactory::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject CertificateFactory::getCertPathEncodings()
	{
		return __thiz.callObjectMethod(
			"getCertPathEncodings",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject CertificateFactory::generateCertificates(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"generateCertificates",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactory::generateCRL(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"generateCRL",
			"(Ljava/io/InputStream;)Ljava/security/cert/CRL;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactory::generateCRLs(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"generateCRLs",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateFactory : public __jni_impl::java::security::cert::CertificateFactory
	{
	public:
		CertificateFactory(QAndroidJniObject obj) { __thiz = obj; }
		CertificateFactory()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTIFICATEFACTORY

