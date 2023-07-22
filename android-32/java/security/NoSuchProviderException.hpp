#pragma once

#include "../../JString.hpp"
#include "./NoSuchProviderException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline NoSuchProviderException::NoSuchProviderException()
		: java::security::GeneralSecurityException(
			"java.security.NoSuchProviderException",
			"()V"
		) {}
	inline NoSuchProviderException::NoSuchProviderException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchProviderException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
