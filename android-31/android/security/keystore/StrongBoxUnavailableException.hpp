#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./StrongBoxUnavailableException.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	inline StrongBoxUnavailableException::StrongBoxUnavailableException()
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"()V"
		) {}
	inline StrongBoxUnavailableException::StrongBoxUnavailableException(JString arg0)
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline StrongBoxUnavailableException::StrongBoxUnavailableException(JThrowable arg0)
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline StrongBoxUnavailableException::StrongBoxUnavailableException(JString arg0, JThrowable arg1)
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/security/ProviderException.hpp"

