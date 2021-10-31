#include "./SecureKeyImportUnavailableException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(QJniObject obj) : java::security::ProviderException(obj) {}
	
	// Constructors
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException()
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"()V"
		) {}
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(jstring arg0)
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(jthrowable arg0)
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(jstring arg0, jthrowable arg1)
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::keystore

