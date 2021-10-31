#include "./NetworkErrorException.hpp"

namespace android::accounts
{
	// Fields
	
	NetworkErrorException::NetworkErrorException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NetworkErrorException::NetworkErrorException()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"()V"
		);
	}
	NetworkErrorException::NetworkErrorException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NetworkErrorException::NetworkErrorException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	NetworkErrorException::NetworkErrorException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::accounts

