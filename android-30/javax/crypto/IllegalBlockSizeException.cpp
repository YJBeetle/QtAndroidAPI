#include "../../JString.hpp"
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
	IllegalBlockSizeException::IllegalBlockSizeException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.IllegalBlockSizeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::crypto

