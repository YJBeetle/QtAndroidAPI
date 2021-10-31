#include "./AccountsException.hpp"

namespace android::accounts
{
	// Fields
	
	// QJniObject forward
	AccountsException::AccountsException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	AccountsException::AccountsException()
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"()V"
		) {}
	AccountsException::AccountsException(jstring arg0)
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	AccountsException::AccountsException(jthrowable arg0)
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	AccountsException::AccountsException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::accounts

