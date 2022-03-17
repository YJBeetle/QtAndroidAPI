#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./AuthenticatorException.def.hpp"

namespace android::accounts
{
	// Fields
	
	// Constructors
	inline AuthenticatorException::AuthenticatorException()
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"()V"
		) {}
	inline AuthenticatorException::AuthenticatorException(JString arg0)
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AuthenticatorException::AuthenticatorException(JThrowable arg0)
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline AuthenticatorException::AuthenticatorException(JString arg0, JThrowable arg1)
		: android::accounts::AccountsException(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::accounts

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./AccountsException.hpp"

