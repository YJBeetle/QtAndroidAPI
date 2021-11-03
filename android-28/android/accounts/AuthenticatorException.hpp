#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "./AccountsException.hpp"


namespace android::accounts
{
	class AuthenticatorException : public android::accounts::AccountsException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AuthenticatorException(const char *className, const char *sig, Ts...agv) : android::accounts::AccountsException(className, sig, std::forward<Ts>(agv)...) {}
		AuthenticatorException(QAndroidJniObject obj);
		
		// Constructors
		AuthenticatorException();
		AuthenticatorException(jstring arg0);
		AuthenticatorException(jthrowable arg0);
		AuthenticatorException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

