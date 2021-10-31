#include "./OperationCanceledException.hpp"

namespace android::accounts
{
	// Fields
	
	// QJniObject forward
	OperationCanceledException::OperationCanceledException(QJniObject obj) : android::accounts::AccountsException(obj) {}
	
	// Constructors
	OperationCanceledException::OperationCanceledException()
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"()V"
		) {}
	OperationCanceledException::OperationCanceledException(jstring arg0)
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	OperationCanceledException::OperationCanceledException(jthrowable arg0)
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	OperationCanceledException::OperationCanceledException(jstring arg0, jthrowable arg1)
		: android::accounts::AccountsException(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::accounts

