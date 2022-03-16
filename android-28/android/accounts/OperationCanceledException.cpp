#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./OperationCanceledException.hpp"

namespace android::accounts
{
	// Fields
	
	// Constructors
	OperationCanceledException::OperationCanceledException()
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"()V"
		) {}
	OperationCanceledException::OperationCanceledException(JString arg0)
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	OperationCanceledException::OperationCanceledException(JThrowable arg0)
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	OperationCanceledException::OperationCanceledException(JString arg0, JThrowable arg1)
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::accounts

