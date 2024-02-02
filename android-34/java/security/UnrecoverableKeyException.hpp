#pragma once

#include "../../JString.hpp"
#include "./UnrecoverableKeyException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline UnrecoverableKeyException::UnrecoverableKeyException()
		: java::security::UnrecoverableEntryException(
			"java.security.UnrecoverableKeyException",
			"()V"
		) {}
	inline UnrecoverableKeyException::UnrecoverableKeyException(JString arg0)
		: java::security::UnrecoverableEntryException(
			"java.security.UnrecoverableKeyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"
#include "./UnrecoverableEntryException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
