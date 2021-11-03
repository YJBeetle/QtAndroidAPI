#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::accounts
{
	class Account;
}
namespace android::accounts
{
	class AccountAuthenticatorResponse;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::accounts
{
	class AbstractAccountAuthenticator : public JObject
	{
	public:
		// Fields
		static JString KEY_CUSTOM_TOKEN_EXPIRY();
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractAccountAuthenticator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractAccountAuthenticator(QJniObject obj);
		
		// Constructors
		AbstractAccountAuthenticator(android::content::Context arg0);
		
		// Methods
		android::os::Bundle addAccount(android::accounts::AccountAuthenticatorResponse arg0, JString arg1, JString arg2, JArray arg3, android::os::Bundle arg4) const;
		android::os::Bundle addAccountFromCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2) const;
		android::os::Bundle confirmCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2) const;
		android::os::Bundle editProperties(android::accounts::AccountAuthenticatorResponse arg0, JString arg1) const;
		android::os::Bundle finishSession(android::accounts::AccountAuthenticatorResponse arg0, JString arg1, android::os::Bundle arg2) const;
		android::os::Bundle getAccountCredentialsForCloning(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1) const;
		android::os::Bundle getAccountRemovalAllowed(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1) const;
		android::os::Bundle getAuthToken(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2, android::os::Bundle arg3) const;
		JString getAuthTokenLabel(JString arg0) const;
		JObject getIBinder() const;
		android::os::Bundle hasFeatures(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JArray arg2) const;
		android::os::Bundle isCredentialsUpdateSuggested(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2) const;
		android::os::Bundle startAddAccountSession(android::accounts::AccountAuthenticatorResponse arg0, JString arg1, JString arg2, JArray arg3, android::os::Bundle arg4) const;
		android::os::Bundle startUpdateCredentialsSession(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2, android::os::Bundle arg3) const;
		android::os::Bundle updateCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2, android::os::Bundle arg3) const;
	};
} // namespace android::accounts

