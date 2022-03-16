#include "../../JString.hpp"
#include "./BadPaddingException.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	BadPaddingException::BadPaddingException()
		: java::security::GeneralSecurityException(
			"javax.crypto.BadPaddingException",
			"()V"
		) {}
	BadPaddingException::BadPaddingException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.BadPaddingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::crypto

