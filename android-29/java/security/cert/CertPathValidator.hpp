#pragma once

#ifndef JAVA_SECURITY_CERT_CERTPATHVALIDATOR
#define JAVA_SECURITY_CERT_CERTPATHVALIDATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class CertPathValidatorSpi;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security::cert
{
	class CertPath;
}

namespace __jni_impl::java::security::cert
{
	class CertPathValidator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject validate(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		QAndroidJniObject getProvider();
		static QAndroidJniObject getDefaultType();
		QAndroidJniObject getAlgorithm();
		QAndroidJniObject getRevocationChecker();
	};
} // namespace __jni_impl::java::security::cert

#include "CertPathValidatorSpi.hpp"
#include "../Provider.hpp"
#include "CertPath.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertPathValidator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CertPathValidator::validate(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"validate",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject CertPathValidator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathValidator;",
			arg0);
	}
	QAndroidJniObject CertPathValidator::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathValidator;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject CertPathValidator::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathValidator;",
			arg0,
			arg1);
	}
	QAndroidJniObject CertPathValidator::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;");
	}
	QAndroidJniObject CertPathValidator::getDefaultType()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getDefaultType",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CertPathValidator::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CertPathValidator::getRevocationChecker()
	{
		return __thiz.callObjectMethod(
			"getRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertPathValidator : public __jni_impl::java::security::cert::CertPathValidator
	{
	public:
		CertPathValidator(QAndroidJniObject obj) { __thiz = obj; }
		CertPathValidator()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTPATHVALIDATOR

