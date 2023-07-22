#pragma once

#include "../../../JString.hpp"
#include "./Certificate.def.hpp"
#include "./CRL.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString CRL::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean CRL::isRevoked(java::security::cert::Certificate arg0) const
	{
		return callMethod<jboolean>(
			"isRevoked",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.object()
		);
	}
	inline JString CRL::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif
