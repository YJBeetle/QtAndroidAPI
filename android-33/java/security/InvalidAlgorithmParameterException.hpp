#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InvalidAlgorithmParameterException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline InvalidAlgorithmParameterException::InvalidAlgorithmParameterException()
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"()V"
		) {}
	inline InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
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
