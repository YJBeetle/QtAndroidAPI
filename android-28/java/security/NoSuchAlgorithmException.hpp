#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./NoSuchAlgorithmException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline NoSuchAlgorithmException::NoSuchAlgorithmException()
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"()V"
		) {}
	inline NoSuchAlgorithmException::NoSuchAlgorithmException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline NoSuchAlgorithmException::NoSuchAlgorithmException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline NoSuchAlgorithmException::NoSuchAlgorithmException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"

