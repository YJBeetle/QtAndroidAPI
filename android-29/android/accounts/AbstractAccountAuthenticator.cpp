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
	
	// QAndroidJniObject forward
	AbstractAccountAuthenticator::AbstractAccountAuthenticator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AbstractAccountAuthenticator::AbstractAccountAuthenticator(android::content::Context arg0)
		: __JniBaseClass(
			"android.accounts.AbstractAccountAuthenticator",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::Bundle AbstractAccountAuthenticator::addAccount(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, android::os::Bundle arg4)
	{
		return callObjectMethod(
			"addAccount",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::addAccountFromCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"addAccountFromCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::confirmCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"confirmCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::editProperties(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1)
	{
		return callObjectMethod(
			"editProperties",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object(),
			arg1
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::finishSession(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"finishSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::getAccountCredentialsForCloning(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1)
	{
		return callObjectMethod(
			"getAccountCredentialsForCloning",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::getAccountRemovalAllowed(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1)
	{
		return callObjectMethod(
			"getAccountRemovalAllowed",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::getAuthToken(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2, android::os::Bundle arg3)
	{
		return callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jstring AbstractAccountAuthenticator::getAuthTokenLabel(jstring arg0)
	{
		return callObjectMethod(
			"getAuthTokenLabel",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass AbstractAccountAuthenticator::getIBinder()
	{
		return callObjectMethod(
			"getIBinder",
			"()Landroid/os/IBinder;"
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::hasFeatures(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jarray arg2)
	{
		return callObjectMethod(
			"hasFeatures",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;[Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::isCredentialsUpdateSuggested(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2)
	{
		return callObjectMethod(
			"isCredentialsUpdateSuggested",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::startAddAccountSession(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, android::os::Bundle arg4)
	{
		return callObjectMethod(
			"startAddAccountSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::startUpdateCredentialsSession(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2, android::os::Bundle arg3)
	{
		return callObjectMethod(
			"startUpdateCredentialsSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::updateCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2, android::os::Bundle arg3)
	{
		return callObjectMethod(
			"updateCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
} // namespace android::accounts

