#include "./Account.hpp"
#include "./AccountAuthenticatorResponse.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "./AbstractAccountAuthenticator.hpp"

namespace android::accounts
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
	
	AbstractAccountAuthenticator::AbstractAccountAuthenticator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractAccountAuthenticator::AbstractAccountAuthenticator(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AbstractAccountAuthenticator",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AbstractAccountAuthenticator::addAccount(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, android::os::Bundle arg4)
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
	QAndroidJniObject AbstractAccountAuthenticator::addAccountFromCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"addAccountFromCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::confirmCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"confirmCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::editProperties(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"editProperties",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::finishSession(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"finishSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::getAccountCredentialsForCloning(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1)
	{
		return __thiz.callObjectMethod(
			"getAccountCredentialsForCloning",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::getAccountRemovalAllowed(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1)
	{
		return __thiz.callObjectMethod(
			"getAccountRemovalAllowed",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::getAuthToken(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2, android::os::Bundle arg3)
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
	jstring AbstractAccountAuthenticator::getAuthTokenLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAuthTokenLabel",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject AbstractAccountAuthenticator::getIBinder()
	{
		return __thiz.callObjectMethod(
			"getIBinder",
			"()Landroid/os/IBinder;"
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::hasFeatures(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"hasFeatures",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;[Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::isCredentialsUpdateSuggested(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"isCredentialsUpdateSuggested",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject AbstractAccountAuthenticator::startAddAccountSession(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, android::os::Bundle arg4)
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
	QAndroidJniObject AbstractAccountAuthenticator::startUpdateCredentialsSession(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2, android::os::Bundle arg3)
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
	QAndroidJniObject AbstractAccountAuthenticator::updateCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2, android::os::Bundle arg3)
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
} // namespace android::accounts

