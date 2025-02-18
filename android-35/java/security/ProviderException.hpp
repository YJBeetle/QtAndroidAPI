#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ProviderException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline ProviderException::ProviderException()
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"()V"
		) {}
	inline ProviderException::ProviderException(JString arg0)
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ProviderException::ProviderException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline ProviderException::ProviderException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
