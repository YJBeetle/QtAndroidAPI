#include "./NoSuchPaddingException.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	NoSuchPaddingException::NoSuchPaddingException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	NoSuchPaddingException::NoSuchPaddingException()
		: java::security::GeneralSecurityException(
			"javax.crypto.NoSuchPaddingException",
			"()V"
		) {}
	NoSuchPaddingException::NoSuchPaddingException(jstring arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.NoSuchPaddingException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::crypto

