#pragma once

#include "../../JString.hpp"
#include "./NoSuchPaddingException.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline NoSuchPaddingException::NoSuchPaddingException()
		: java::security::GeneralSecurityException(
			"javax.crypto.NoSuchPaddingException",
			"()V"
		) {}
	inline NoSuchPaddingException::NoSuchPaddingException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.NoSuchPaddingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::crypto

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"

