#pragma once

#include "../../JString.hpp"
#include "./BadPaddingException.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline BadPaddingException::BadPaddingException()
		: java::security::GeneralSecurityException(
			"javax.crypto.BadPaddingException",
			"()V"
		) {}
	inline BadPaddingException::BadPaddingException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.BadPaddingException",
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
