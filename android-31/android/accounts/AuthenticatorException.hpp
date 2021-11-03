#pragma once

#include "./AccountsException.hpp"

class JString;
class JThrowable;

namespace android::accounts
{
	class AuthenticatorException : public android::accounts::AccountsException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AuthenticatorException(const char *className, const char *sig, Ts...agv) : android::accounts::AccountsException(className, sig, std::forward<Ts>(agv)...) {}
		AuthenticatorException(QJniObject obj);
		
		// Constructors
		AuthenticatorException();
		AuthenticatorException(JString arg0);
		AuthenticatorException(JThrowable arg0);
		AuthenticatorException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

