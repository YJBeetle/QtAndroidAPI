#pragma once

#include "../../JString.hpp"
#include "./AEADBadTagException.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline AEADBadTagException::AEADBadTagException()
		: javax::crypto::BadPaddingException(
			"javax.crypto.AEADBadTagException",
			"()V"
		) {}
	inline AEADBadTagException::AEADBadTagException(JString arg0)
		: javax::crypto::BadPaddingException(
			"javax.crypto.AEADBadTagException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::crypto

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"
#include "./BadPaddingException.hpp"

