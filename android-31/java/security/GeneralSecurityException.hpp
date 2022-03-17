#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./GeneralSecurityException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline GeneralSecurityException::GeneralSecurityException()
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"()V"
		) {}
	inline GeneralSecurityException::GeneralSecurityException(JString arg0)
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline GeneralSecurityException::GeneralSecurityException(JThrowable arg0)
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline GeneralSecurityException::GeneralSecurityException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
