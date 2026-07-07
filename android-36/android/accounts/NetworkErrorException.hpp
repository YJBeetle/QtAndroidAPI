#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./NetworkErrorException.def.hpp"

namespace android::accounts
{
	// Fields
	
	// Constructors
	inline NetworkErrorException::NetworkErrorException()
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"()V"
		) {}
	inline NetworkErrorException::NetworkErrorException(JString arg0)
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline NetworkErrorException::NetworkErrorException(JThrowable arg0)
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline NetworkErrorException::NetworkErrorException(JString arg0, JThrowable arg1)
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::accounts

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./AccountsException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accounts;
#endif
