#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./AccountsException.hpp"

namespace android::accounts
{
	// Fields
	
	// QAndroidJniObject forward
	AccountsException::AccountsException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	AccountsException::AccountsException()
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"()V"
		) {}
	AccountsException::AccountsException(JString arg0)
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	AccountsException::AccountsException(JThrowable arg0)
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	AccountsException::AccountsException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::accounts

