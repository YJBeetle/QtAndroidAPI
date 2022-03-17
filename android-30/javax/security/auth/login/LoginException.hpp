#pragma once

#include "../../../../JString.hpp"
#include "./LoginException.def.hpp"

namespace javax::security::auth::login
{
	// Fields
	
	// Constructors
	inline LoginException::LoginException()
		: java::security::GeneralSecurityException(
			"javax.security.auth.login.LoginException",
			"()V"
		) {}
	inline LoginException::LoginException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.security.auth.login.LoginException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::auth::login

// Base class headers
#include "../../../../java/lang/Exception.hpp"
#include "../../../../java/security/GeneralSecurityException.hpp"

