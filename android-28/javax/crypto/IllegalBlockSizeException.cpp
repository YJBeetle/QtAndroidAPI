#include "./IllegalBlockSizeException.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalBlockSizeException::IllegalBlockSizeException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	IllegalBlockSizeException::IllegalBlockSizeException()
		: java::security::GeneralSecurityException(
			"javax.crypto.IllegalBlockSizeException",
			"()V"
		) {}
	IllegalBlockSizeException::IllegalBlockSizeException(jstring arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.IllegalBlockSizeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::crypto

