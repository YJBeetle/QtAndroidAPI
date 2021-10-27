#include "./CertPath.hpp"
#include "./TrustAnchor.hpp"
#include "./PKIXCertPathBuilderResult.hpp"

namespace java::security::cert
{
	// Fields
	
	PKIXCertPathBuilderResult::PKIXCertPathBuilderResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PKIXCertPathBuilderResult::PKIXCertPathBuilderResult(java::security::cert::CertPath &arg0, java::security::cert::TrustAnchor &arg1, __JniBaseClass &arg2, __JniBaseClass &arg3)
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
} // namespace java::security::cert

