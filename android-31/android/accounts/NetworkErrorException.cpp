#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./NetworkErrorException.hpp"

namespace android::accounts
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkErrorException::NetworkErrorException(QAndroidJniObject obj) : android::accounts::AccountsException(obj) {}
	
	// Constructors
	NetworkErrorException::NetworkErrorException()
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"()V"
		) {}
	NetworkErrorException::NetworkErrorException(JString arg0)
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	NetworkErrorException::NetworkErrorException(JThrowable arg0)
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	NetworkErrorException::NetworkErrorException(JString arg0, JThrowable arg1)
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::accounts

