#include "../os/Bundle.hpp"
#include "./AccountAuthenticatorActivity.hpp"

namespace android::accounts
{
	// Fields
	
	// QAndroidJniObject forward
	AccountAuthenticatorActivity::AccountAuthenticatorActivity(QAndroidJniObject obj) : android::app::Activity(obj) {}
	
	// Constructors
	AccountAuthenticatorActivity::AccountAuthenticatorActivity()
		: android::app::Activity(
			"android.accounts.AccountAuthenticatorActivity",
			"()V"
		) {}
	
	// Methods
	void AccountAuthenticatorActivity::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	void AccountAuthenticatorActivity::setAccountAuthenticatorResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setAccountAuthenticatorResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::accounts

