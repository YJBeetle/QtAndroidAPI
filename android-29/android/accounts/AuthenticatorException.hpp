#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./AccountsException.hpp"


namespace android::accounts
{
	class AuthenticatorException : public android::accounts::AccountsException
	{
	public:
		// Fields
		
		AuthenticatorException(QAndroidJniObject obj);
		// Constructors
		AuthenticatorException();
		AuthenticatorException(jstring &arg0);
		AuthenticatorException(const QString &arg0);
		AuthenticatorException(jthrowable &arg0);
		AuthenticatorException(jstring &arg0, jthrowable &arg1);
		AuthenticatorException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace android::accounts

