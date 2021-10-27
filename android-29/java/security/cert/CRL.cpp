#include "./Certificate.hpp"
#include "./CRL.hpp"

namespace java::security::cert
{
	// Fields
	
	CRL::CRL(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring CRL::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean CRL::isRevoked(java::security::cert::Certificate arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRevoked",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring CRL::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

