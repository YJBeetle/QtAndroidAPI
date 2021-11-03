#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
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
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(JString arg0)
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(JThrowable arg0)
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SecureKeyImportUnavailableException::SecureKeyImportUnavailableException(JString arg0, JThrowable arg1)
		: java::security::ProviderException(
			"android.security.keystore.SecureKeyImportUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

