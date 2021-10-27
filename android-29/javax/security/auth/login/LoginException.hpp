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
		
		LoginException(QAndroidJniObject obj);
		// Constructors
		LoginException();
		LoginException(jstring &arg0);
		LoginException(const QString &arg0);
		
		// Methods
	};
} // namespace javax::security::auth::login

