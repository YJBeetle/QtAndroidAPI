#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./KeyStoreException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyStoreException::KeyStoreException()
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"()V"
		) {}
	inline KeyStoreException::KeyStoreException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline KeyStoreException::KeyStoreException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline KeyStoreException::KeyStoreException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"

