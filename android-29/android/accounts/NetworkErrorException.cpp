#include "./NetworkErrorException.hpp"

namespace android::accounts
{
	// Fields
	
	// QJniObject forward
	NetworkErrorException::NetworkErrorException(QJniObject obj) : android::accounts::AccountsException(obj) {}
	
	// Constructors
	NetworkErrorException::NetworkErrorException()
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"()V"
		) {}
	NetworkErrorException::NetworkErrorException(jstring arg0)
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	NetworkErrorException::NetworkErrorException(jthrowable arg0)
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	NetworkErrorException::NetworkErrorException(jstring arg0, jthrowable arg1)
		: android::accounts::AccountsException(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::accounts

