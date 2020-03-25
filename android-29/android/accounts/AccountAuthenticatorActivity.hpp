#pragma once

#ifndef ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORACTIVITY
#define ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORACTIVITY

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "../app/Activity.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::accounts
{
	class AccountAuthenticatorActivity : public __jni_impl::android::app::Activity
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void finish();
		void setAccountAuthenticatorResult(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::accounts

#include "../os/Bundle.hpp"

namespace __jni_impl::android::accounts
{
	// Fields
	
	// Constructors
	void AccountAuthenticatorActivity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountAuthenticatorActivity",
			"()V");
	}
	
	// Methods
	void AccountAuthenticatorActivity::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V");
	}
	void AccountAuthenticatorActivity::setAccountAuthenticatorResult(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setAccountAuthenticatorResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class AccountAuthenticatorActivity : public __jni_impl::android::accounts::AccountAuthenticatorActivity
	{
	public:
		AccountAuthenticatorActivity(QAndroidJniObject obj) { __thiz = obj; }
		AccountAuthenticatorActivity()
		{
			__constructor();
		}
	};
} // namespace android::accounts

#endif // ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORACTIVITY

