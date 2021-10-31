#include "./AuthenticatorException.hpp"

namespace android::accounts
{
	// Fields
	
	// QJniObject forward
	AuthenticatorException::AuthenticatorException(QJniObject obj) : android::accounts::AccountsException(obj) {}
	
	// Constructors
	AuthenticatorException::AuthenticatorException()
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"()V"
		) {}
	AuthenticatorException::AuthenticatorException(jstring arg0)
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	AuthenticatorException::AuthenticatorException(jthrowable arg0)
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	AuthenticatorException::AuthenticatorException(jstring arg0, jthrowable arg1)
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::accounts

