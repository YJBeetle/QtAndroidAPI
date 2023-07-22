#pragma once

#include "../../JString.hpp"
#include "./ExemptionMechanismException.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline ExemptionMechanismException::ExemptionMechanismException()
		: java::security::GeneralSecurityException(
			"javax.crypto.ExemptionMechanismException",
			"()V"
		) {}
	inline ExemptionMechanismException::ExemptionMechanismException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.ExemptionMechanismException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::crypto

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto;
#endif
