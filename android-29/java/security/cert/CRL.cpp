#include "../../../JString.hpp"
#include "./Certificate.hpp"
#include "./CRL.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CRL::CRL(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString CRL::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jboolean CRL::isRevoked(java::security::cert::Certificate arg0)
	{
		return callMethod<jboolean>(
			"isRevoked",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.object()
		);
	}
	JString CRL::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

