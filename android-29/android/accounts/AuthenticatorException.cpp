#include "./AuthenticatorException.hpp"

namespace android::accounts
{
	// Fields
	
	AuthenticatorException::AuthenticatorException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AuthenticatorException::AuthenticatorException()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AuthenticatorException",
			"()V"
		);
	}
	AuthenticatorException::AuthenticatorException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AuthenticatorException::AuthenticatorException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	AuthenticatorException::AuthenticatorException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AuthenticatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::accounts

