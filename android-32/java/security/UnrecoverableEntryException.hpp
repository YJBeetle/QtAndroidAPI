#pragma once

#include "../../JString.hpp"
#include "./UnrecoverableEntryException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline UnrecoverableEntryException::UnrecoverableEntryException()
		: java::security::GeneralSecurityException(
			"java.security.UnrecoverableEntryException",
			"()V"
		) {}
	inline UnrecoverableEntryException::UnrecoverableEntryException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.UnrecoverableEntryException",
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
