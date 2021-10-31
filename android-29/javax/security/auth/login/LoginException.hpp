#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../../java/lang/Exception.hpp"
#include "../../../../java/security/GeneralSecurityException.hpp"


namespace javax::security::auth::login
{
	class LoginException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LoginException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		LoginException(QJniObject obj);
		
		// Constructors
		LoginException();
		LoginException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::auth::login

