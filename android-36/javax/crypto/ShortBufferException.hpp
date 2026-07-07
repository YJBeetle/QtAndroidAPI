#pragma once

#include "../../JString.hpp"
#include "./ShortBufferException.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline ShortBufferException::ShortBufferException()
		: java::security::GeneralSecurityException(
			"javax.crypto.ShortBufferException",
			"()V"
		) {}
	inline ShortBufferException::ShortBufferException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.ShortBufferException",
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
