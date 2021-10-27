#include "../os/Bundle.hpp"
#include "./AccountAuthenticatorActivity.hpp"

namespace android::accounts
{
	// Fields
	
	AccountAuthenticatorActivity::AccountAuthenticatorActivity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccountAuthenticatorActivity::AccountAuthenticatorActivity()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountAuthenticatorActivity",
			"()V"
		);
	}
	
	// Methods
	void AccountAuthenticatorActivity::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	void AccountAuthenticatorActivity::setAccountAuthenticatorResult(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setAccountAuthenticatorResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::accounts

