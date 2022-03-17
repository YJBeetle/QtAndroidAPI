#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./AccountsException.def.hpp"

namespace android::accounts
{
	// Fields
	
	// Constructors
	inline AccountsException::AccountsException()
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"()V"
		) {}
	inline AccountsException::AccountsException(JString arg0)
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AccountsException::AccountsException(JThrowable arg0)
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline AccountsException::AccountsException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::accounts

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accounts;
#endif
