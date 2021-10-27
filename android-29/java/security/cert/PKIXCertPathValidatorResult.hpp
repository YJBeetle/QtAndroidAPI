#pragma once

#ifndef JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT
#define JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class TrustAnchor;
}

namespace __jni_impl::java::security::cert
{
	class PKIXCertPathValidatorResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::cert::TrustAnchor arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		jobject clone();
		QAndroidJniObject getPolicyTree();
		QAndroidJniObject getPublicKey();
		QAndroidJniObject getTrustAnchor();
		jstring toString();
	};
} // namespace __jni_impl::java::security::cert

#include "TrustAnchor.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void PKIXCertPathValidatorResult::__constructor(__jni_impl::java::security::cert::TrustAnchor arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXCertPathValidatorResult",
			"(Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jobject PKIXCertPathValidatorResult::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject PKIXCertPathValidatorResult::getPolicyTree()
	{
		return __thiz.callObjectMethod(
			"getPolicyTree",
			"()Ljava/security/cert/PolicyNode;"
		);
	}
	QAndroidJniObject PKIXCertPathValidatorResult::getPublicKey()
	{
		return __thiz.callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	QAndroidJniObject PKIXCertPathValidatorResult::getTrustAnchor()
	{
		return __thiz.callObjectMethod(
			"getTrustAnchor",
			"()Ljava/security/cert/TrustAnchor;"
		);
	}
	jstring PKIXCertPathValidatorResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PKIXCertPathValidatorResult : public __jni_impl::java::security::cert::PKIXCertPathValidatorResult
	{
	public:
		PKIXCertPathValidatorResult(QAndroidJniObject obj) { __thiz = obj; }
		PKIXCertPathValidatorResult(__jni_impl::java::security::cert::TrustAnchor arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT

