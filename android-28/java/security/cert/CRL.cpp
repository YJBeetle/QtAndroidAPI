#include "./Certificate.hpp"
#include "./CRL.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CRL::CRL(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring CRL::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean CRL::isRevoked(java::security::cert::Certificate arg0)
	{
		return callMethod<jboolean>(
			"isRevoked",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.object()
		);
	}
	jstring CRL::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

