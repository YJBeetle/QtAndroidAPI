#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::accounts
{
	class AbstractAccountAuthenticator : public __JniBaseClass
	{
	public:
		// Fields
		static jstring KEY_CUSTOM_TOKEN_EXPIRY();
		
		AbstractAccountAuthenticator(QAndroidJniObject obj);
		// Constructors
		AbstractAccountAuthenticator(android::content::Context &arg0);
		AbstractAccountAuthenticator() = default;
		
		// Methods
		QAndroidJniObject addAccount(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, android::os::Bundle arg4);
		QAndroidJniObject addAccount(android::accounts::AccountAuthenticatorResponse arg0, const QString &arg1, const QString &arg2, jarray arg3, android::os::Bundle arg4);
		QAndroidJniObject addAccountFromCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2);
		QAndroidJniObject confirmCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2);
		QAndroidJniObject editProperties(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1);
		QAndroidJniObject editProperties(android::accounts::AccountAuthenticatorResponse arg0, const QString &arg1);
		QAndroidJniObject finishSession(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, android::os::Bundle arg2);
		QAndroidJniObject finishSession(android::accounts::AccountAuthenticatorResponse arg0, const QString &arg1, android::os::Bundle arg2);
		QAndroidJniObject getAccountCredentialsForCloning(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1);
		QAndroidJniObject getAccountRemovalAllowed(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1);
		QAndroidJniObject getAuthToken(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2, android::os::Bundle arg3);
		QAndroidJniObject getAuthToken(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, const QString &arg2, android::os::Bundle arg3);
		jstring getAuthTokenLabel(jstring arg0);
		jstring getAuthTokenLabel(const QString &arg0);
		QAndroidJniObject getIBinder();
		QAndroidJniObject hasFeatures(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jarray arg2);
		QAndroidJniObject isCredentialsUpdateSuggested(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2);
		QAndroidJniObject isCredentialsUpdateSuggested(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, const QString &arg2);
		QAndroidJniObject startAddAccountSession(android::accounts::AccountAuthenticatorResponse arg0, jstring arg1, jstring arg2, jarray arg3, android::os::Bundle arg4);
		QAndroidJniObject startAddAccountSession(android::accounts::AccountAuthenticatorResponse arg0, const QString &arg1, const QString &arg2, jarray arg3, android::os::Bundle arg4);
		QAndroidJniObject startUpdateCredentialsSession(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2, android::os::Bundle arg3);
		QAndroidJniObject startUpdateCredentialsSession(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, const QString &arg2, android::os::Bundle arg3);
		QAndroidJniObject updateCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, jstring arg2, android::os::Bundle arg3);
		QAndroidJniObject updateCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, const QString &arg2, android::os::Bundle arg3);
	};
} // namespace android::accounts

