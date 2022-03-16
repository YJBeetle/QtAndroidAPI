#include "../../../JString.hpp"
#include "./Certificate.hpp"
#include "./CRL.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	JString CRL::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jboolean CRL::isRevoked(java::security::cert::Certificate arg0) const
	{
		return callMethod<jboolean>(
			"isRevoked",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.object()
		);
	}
	JString CRL::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

