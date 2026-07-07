#pragma once

#include "../../JString.hpp"
#include "./IllegalBlockSizeException.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline IllegalBlockSizeException::IllegalBlockSizeException()
		: java::security::GeneralSecurityException(
			"javax.crypto.IllegalBlockSizeException",
			"()V"
		) {}
	inline IllegalBlockSizeException::IllegalBlockSizeException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.IllegalBlockSizeException",
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
