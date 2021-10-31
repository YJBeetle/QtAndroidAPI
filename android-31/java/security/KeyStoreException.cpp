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
	KeyStoreException::KeyStoreException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	KeyStoreException::KeyStoreException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	KeyStoreException::KeyStoreException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

