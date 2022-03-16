#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SecureKeyImportUnavailableException.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	inline SecureKeyImportUnavailableException::SecureKeyImportUnavailableException()
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"()V"
		) {}
	inline SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(JString arg0)
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(JThrowable arg0)
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(JString arg0, JThrowable arg1)
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
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

