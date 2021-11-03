#include "../../../../JString.hpp"
#include "./LoginException.hpp"

namespace javax::security::auth::login
{
	// Fields
	
	// QJniObject forward
	LoginException::LoginException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	LoginException::LoginException()
		: java::security::GeneralSecurityException(
			"javax.security.auth.login.LoginException",
			"()V"
		) {}
	LoginException::LoginException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.security.auth.login.LoginException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::auth::login

