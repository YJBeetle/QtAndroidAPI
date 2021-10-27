#pragma once

#ifndef JAVA_SECURITY_CERT_PKIXCERTPATHBUILDERRESULT
#define JAVA_SECURITY_CERT_PKIXCERTPATHBUILDERRESULT

#include "../../../__JniBaseClass.hpp"
#include "PKIXCertPathValidatorResult.hpp"

namespace __jni_impl::java::security::cert
{
	class CertPath;
}
namespace __jni_impl::java::security::cert
{
	class TrustAnchor;
}

namespace __jni_impl::java::security::cert
{
	class PKIXCertPathBuilderResult : public __jni_impl::java::security::cert::PKIXCertPathValidatorResult
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::java::security::cert::TrustAnchor arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		
		// Methods
		QAndroidJniObject getCertPath();
		jstring toString();
	};
} // namespace __jni_impl::java::security::cert

#include "CertPath.hpp"
#include "TrustAnchor.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void PKIXCertPathBuilderResult::__constructor(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::java::security::cert::TrustAnchor arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXCertPathBuilderResult",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PKIXCertPathBuilderResult::getCertPath()
	{
		return __thiz.callObjectMethod(
			"getCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	jstring PKIXCertPathBuilderResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PKIXCertPathBuilderResult : public __jni_impl::java::security::cert::PKIXCertPathBuilderResult
	{
	public:
		PKIXCertPathBuilderResult(QAndroidJniObject obj) { __thiz = obj; }
		PKIXCertPathBuilderResult(__jni_impl::java::security::cert::CertPath arg0, __jni_impl::java::security::cert::TrustAnchor arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_PKIXCERTPATHBUILDERRESULT

