#include "../../../JString.hpp"
#include "./DestroyFailedException.hpp"

namespace javax::security::auth
{
	// Fields
	
	// Constructors
	DestroyFailedException::DestroyFailedException()
		: java::lang::Exception(
			"javax.security.auth.DestroyFailedException",
			"()V"
		) {}
	DestroyFailedException::DestroyFailedException(JString arg0)
		: java::lang::Exception(
			"javax.security.auth.DestroyFailedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::auth

