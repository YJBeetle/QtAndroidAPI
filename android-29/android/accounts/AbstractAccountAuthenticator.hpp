#pragma once

#ifndef ANDROID_ACCOUNTS_ABSTRACTACCOUNTAUTHENTICATOR
#define ANDROID_ACCOUNTS_ABSTRACTACCOUNTAUTHENTICATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::accounts
{
	class AccountAuthenticatorResponse;
}
namespace __jni_impl::android::accounts
{
	class Account;
}

namespace __jni_impl::android::accounts
{
	class AbstractAccountAuthenticator : public __JniBaseClass
	{
	public:
		// Fields
		static jstring KEY_CUSTOM_TOKEN_EXPIRY();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject getIBinder();
		jstring getAuthTokenLabel(jstring arg0);
		QAndroidJniObject getAccountRemovalAllowed(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1);
		QAndroidJniObject getAccountCredentialsForCloning(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1);
		QAndroidJniObject addAccountFromCredentials(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject hasFeatures(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jarray arg2);
		QAndroidJniObject getAuthToken(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jstring arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject addAccount(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, __jni_impl::android::os::Bundle arg4);
		QAndroidJniObject confirmCredentials(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject updateCredentials(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jstring arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject editProperties(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, jstring arg1);
		QAndroidJniObject startAddAccountSession(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, __jni_impl::android::os::Bundle arg4);
		QAndroidJniObject startUpdateCredentialsSession(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jstring arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject finishSession(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject isCredentialsUpdateSuggested(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jstring arg2);
	};
} // namespace __jni_impl::android::accounts

#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "AccountAuthenticatorResponse.hpp"
#include "Account.hpp"

namespace __jni_impl::android::accounts
{
	// Fields
	jstring AbstractAccountAuthenticator::KEY_CUSTOM_TOKEN_EXPIRY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AbstractAccountAuthenticator",
			"KEY_CUSTOM_TOKEN_EXPIRY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void AbstractAccountAuthenticator::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AbstractAccountAuthenticator",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject AbstractAccountAuthenticator::getIBinder()
	{
		return __thiz.callObjectMethod(
			"getIBinder",
			"()Landroid/os/IBinder;"
		);
	}
	jstring AbstractAccountAuthenticator::getAuthTokenLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAuthTokenLabel",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject AbstractAccountAuthenticator::getAccountRemovalAllowed(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1)
	{
		return __thiz.callObjectMethod(
			"getAccountRemovalAllowed",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::getAccountCredentialsForCloning(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1)
	{
		return __thiz.callObjectMethod(
			"getAccountCredentialsForCloning",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::addAccountFromCredentials(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"addAccountFromCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::hasFeatures(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"hasFeatures",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;[Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::getAuthToken(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jstring arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::addAccount(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, __jni_impl::android::os::Bundle arg4)
	{
		return __thiz.callObjectMethod(
			"addAccount",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::confirmCredentials(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"confirmCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::updateCredentials(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jstring arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"updateCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::editProperties(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"editProperties",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::startAddAccountSession(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, __jni_impl::android::os::Bundle arg4)
	{
		return __thiz.callObjectMethod(
			"startAddAccountSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::startUpdateCredentialsSession(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jstring arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"startUpdateCredentialsSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::finishSession(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"finishSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::isCredentialsUpdateSuggested(__jni_impl::android::accounts::AccountAuthenticatorResponse arg0, __jni_impl::android::accounts::Account arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"isCredentialsUpdateSuggested",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class AbstractAccountAuthenticator : public __jni_impl::android::accounts::AbstractAccountAuthenticator
	{
	public:
		AbstractAccountAuthenticator(QAndroidJniObject obj) { __thiz = obj; }
		AbstractAccountAuthenticator(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::accounts

#endif // ANDROID_ACCOUNTS_ABSTRACTACCOUNTAUTHENTICATOR

