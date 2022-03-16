#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./OperationCanceledException.def.hpp"

namespace android::accounts
{
	// Fields
	
	// Constructors
	inline OperationCanceledException::OperationCanceledException()
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"()V"
		) {}
	inline OperationCanceledException::OperationCanceledException(JString arg0)
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline OperationCanceledException::OperationCanceledException(JThrowable arg0)
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline OperationCanceledException::OperationCanceledException(JString arg0, JThrowable arg1)
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::accounts

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./AccountsException.hpp"

