#pragma once

#ifndef JAVA_SECURITY_CERT_CERTPATHVALIDATORSPI
#define JAVA_SECURITY_CERT_CERTPATHVALIDATORSPI

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class CertPath;
}

namespace __jni_impl::java::security::cert
{
	class CertPathValidatorSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject engineValidate(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject engineGetRevocationChecker();
	};
} // namespace __jni_impl::java::security::cert

#include "CertPath.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertPathValidatorSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorSpi",
			"()V");
	}
	
	// Methods
	QAndroidJniObject CertPathValidatorSpi::engineValidate(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"engineValidate",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CertPathValidatorSpi::engineGetRevocationChecker()
	{
		return __thiz.callObjectMethod(
			"engineGetRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertPathValidatorSpi : public __jni_impl::java::security::cert::CertPathValidatorSpi
	{
	public:
		CertPathValidatorSpi(QAndroidJniObject obj) { __thiz = obj; }
		CertPathValidatorSpi()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTPATHVALIDATORSPI

