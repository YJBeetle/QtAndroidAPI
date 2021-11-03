#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./KeyStoreException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyStoreException::KeyStoreException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	KeyStoreException::KeyStoreException()
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"()V"
		) {}
	KeyStoreException::KeyStoreException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	KeyStoreException::KeyStoreException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	KeyStoreException::KeyStoreException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

