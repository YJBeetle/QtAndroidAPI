#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./KeyManagementException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyManagementException::KeyManagementException()
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"()V"
		) {}
	inline KeyManagementException::KeyManagementException(JString arg0)
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline KeyManagementException::KeyManagementException(JThrowable arg0)
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline KeyManagementException::KeyManagementException(JString arg0, JThrowable arg1)
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"
#include "./KeyException.hpp"

