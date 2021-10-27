#include "./TrustAnchor.hpp"
#include "./PKIXCertPathValidatorResult.hpp"

namespace java::security::cert
{
	// Fields
	
	PKIXCertPathValidatorResult::PKIXCertPathValidatorResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PKIXCertPathValidatorResult::PKIXCertPathValidatorResult(java::security::cert::TrustAnchor &arg0, __JniBaseClass &arg1, __JniBaseClass &arg2)
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
} // namespace java::security::cert

