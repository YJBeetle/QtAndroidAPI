#include "../../JArray.hpp"
#include "./Account.hpp"
#include "./AccountAuthenticatorResponse.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./AbstractAccountAuthenticator.hpp"

namespace android::accounts
{
	// Fields
	JString AbstractAccountAuthenticator::KEY_CUSTOM_TOKEN_EXPIRY()
	{
		return getStaticObjectField(
			"android.accounts.AbstractAccountAuthenticator",
			"KEY_CUSTOM_TOKEN_EXPIRY",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	AbstractAccountAuthenticator::AbstractAccountAuthenticator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AbstractAccountAuthenticator::AbstractAccountAuthenticator(android::content::Context arg0)
		: JObject(
			"android.accounts.AbstractAccountAuthenticator",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::Bundle AbstractAccountAuthenticator::addAccount(android::accounts::AccountAuthenticatorResponse arg0, JString arg1, JString arg2, JArray arg3, android::os::Bundle arg4) const
	{
		return callObjectMethod(
			"addAccount",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::addAccountFromCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"addAccountFromCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::confirmCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"confirmCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::editProperties(android::accounts::AccountAuthenticatorResponse arg0, JString arg1) const
	{
		return callObjectMethod(
			"editProperties",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::finishSession(android::accounts::AccountAuthenticatorResponse arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"finishSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::getAccountCredentialsForCloning(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1) const
	{
		return callObjectMethod(
			"getAccountCredentialsForCloning",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::getAccountRemovalAllowed(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1) const
	{
		return callObjectMethod(
			"getAccountRemovalAllowed",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::getAuthToken(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2, android::os::Bundle arg3) const
	{
		return callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	JString AbstractAccountAuthenticator::getAuthTokenLabel(JString arg0) const
	{
		return callObjectMethod(
			"getAuthTokenLabel",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject AbstractAccountAuthenticator::getIBinder() const
	{
		return callObjectMethod(
			"getIBinder",
			"()Landroid/os/IBinder;"
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::hasFeatures(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JArray arg2) const
	{
		return callObjectMethod(
			"hasFeatures",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;[Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::isCredentialsUpdateSuggested(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2) const
	{
		return callObjectMethod(
			"isCredentialsUpdateSuggested",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::startAddAccountSession(android::accounts::AccountAuthenticatorResponse arg0, JString arg1, JString arg2, JArray arg3, android::os::Bundle arg4) const
	{
		return callObjectMethod(
			"startAddAccountSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::startUpdateCredentialsSession(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2, android::os::Bundle arg3) const
	{
		return callObjectMethod(
			"startUpdateCredentialsSession",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	android::os::Bundle AbstractAccountAuthenticator::updateCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2, android::os::Bundle arg3) const
	{
		return callObjectMethod(
			"updateCredentials",
			"(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
} // namespace android::accounts

