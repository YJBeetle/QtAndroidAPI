#include "../../JString.hpp"
#include "./AEADBadTagException.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	AEADBadTagException::AEADBadTagException()
		: javax::crypto::BadPaddingException(
			"javax.crypto.AEADBadTagException",
			"()V"
		) {}
	AEADBadTagException::AEADBadTagException(JString arg0)
		: javax::crypto::BadPaddingException(
			"javax.crypto.AEADBadTagException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::crypto

