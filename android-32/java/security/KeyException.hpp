#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./KeyException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyException::KeyException()
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"()V"
		) {}
	inline KeyException::KeyException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline KeyException::KeyException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline KeyException::KeyException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
