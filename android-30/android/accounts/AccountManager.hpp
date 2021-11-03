#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
namespace android::accounts
{
	class Account;
}
namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::accounts
{
	class AccountManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_ACCOUNT_REMOVED();
		static JString ACTION_AUTHENTICATOR_INTENT();
		static JString AUTHENTICATOR_ATTRIBUTES_NAME();
		static JString AUTHENTICATOR_META_DATA_NAME();
		static jint ERROR_CODE_BAD_ARGUMENTS();
		static jint ERROR_CODE_BAD_AUTHENTICATION();
		static jint ERROR_CODE_BAD_REQUEST();
		static jint ERROR_CODE_CANCELED();
		static jint ERROR_CODE_INVALID_RESPONSE();
		static jint ERROR_CODE_NETWORK_ERROR();
		static jint ERROR_CODE_REMOTE_EXCEPTION();
		static jint ERROR_CODE_UNSUPPORTED_OPERATION();
		static JString KEY_ACCOUNTS();
		static JString KEY_ACCOUNT_AUTHENTICATOR_RESPONSE();
		static JString KEY_ACCOUNT_MANAGER_RESPONSE();
		static JString KEY_ACCOUNT_NAME();
		static JString KEY_ACCOUNT_SESSION_BUNDLE();
		static JString KEY_ACCOUNT_STATUS_TOKEN();
		static JString KEY_ACCOUNT_TYPE();
		static JString KEY_ANDROID_PACKAGE_NAME();
		static JString KEY_AUTHENTICATOR_TYPES();
		static JString KEY_AUTHTOKEN();
		static JString KEY_AUTH_FAILED_MESSAGE();
		static JString KEY_AUTH_TOKEN_LABEL();
		static JString KEY_BOOLEAN_RESULT();
		static JString KEY_CALLER_PID();
		static JString KEY_CALLER_UID();
		static JString KEY_ERROR_CODE();
		static JString KEY_ERROR_MESSAGE();
		static JString KEY_INTENT();
		static JString KEY_LAST_AUTHENTICATED_TIME();
		static JString KEY_PASSWORD();
		static JString KEY_USERDATA();
		static JString LOGIN_ACCOUNTS_CHANGED_ACTION();
		static JString PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE();
		static JString PACKAGE_NAME_KEY_LEGACY_VISIBLE();
		static jint VISIBILITY_NOT_VISIBLE();
		static jint VISIBILITY_UNDEFINED();
		static jint VISIBILITY_USER_MANAGED_NOT_VISIBLE();
		static jint VISIBILITY_USER_MANAGED_VISIBLE();
		static jint VISIBILITY_VISIBLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccountManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccountManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::accounts::AccountManager get(android::content::Context arg0);
		static android::content::Intent newChooseAccountIntent(android::accounts::Account arg0, JObject arg1, JArray arg2, JString arg3, JString arg4, JArray arg5, android::os::Bundle arg6);
		static android::content::Intent newChooseAccountIntent(android::accounts::Account arg0, java::util::ArrayList arg1, JArray arg2, jboolean arg3, JString arg4, JString arg5, JArray arg6, android::os::Bundle arg7);
		JObject addAccount(JString arg0, JString arg1, JArray arg2, android::os::Bundle arg3, android::app::Activity arg4, JObject arg5, android::os::Handler arg6);
		jboolean addAccountExplicitly(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2);
		jboolean addAccountExplicitly(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, JObject arg3);
		void addOnAccountsUpdatedListener(JObject arg0, android::os::Handler arg1, jboolean arg2);
		void addOnAccountsUpdatedListener(JObject arg0, android::os::Handler arg1, jboolean arg2, JArray arg3);
		JString blockingGetAuthToken(android::accounts::Account arg0, JString arg1, jboolean arg2);
		void clearPassword(android::accounts::Account arg0);
		JObject confirmCredentials(android::accounts::Account arg0, android::os::Bundle arg1, android::app::Activity arg2, JObject arg3, android::os::Handler arg4);
		JObject editProperties(JString arg0, android::app::Activity arg1, JObject arg2, android::os::Handler arg3);
		JObject finishSession(android::os::Bundle arg0, android::app::Activity arg1, JObject arg2, android::os::Handler arg3);
		jint getAccountVisibility(android::accounts::Account arg0, JString arg1);
		JArray getAccounts();
		JObject getAccountsAndVisibilityForPackage(JString arg0, JString arg1);
		JArray getAccountsByType(JString arg0);
		JObject getAccountsByTypeAndFeatures(JString arg0, JArray arg1, JObject arg2, android::os::Handler arg3);
		JArray getAccountsByTypeForPackage(JString arg0, JString arg1);
		JObject getAuthToken(android::accounts::Account arg0, JString arg1, jboolean arg2, JObject arg3, android::os::Handler arg4);
		JObject getAuthToken(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, android::app::Activity arg3, JObject arg4, android::os::Handler arg5);
		JObject getAuthToken(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, jboolean arg3, JObject arg4, android::os::Handler arg5);
		JObject getAuthTokenByFeatures(JString arg0, JString arg1, JArray arg2, android::app::Activity arg3, android::os::Bundle arg4, android::os::Bundle arg5, JObject arg6, android::os::Handler arg7);
		JArray getAuthenticatorTypes();
		JObject getPackagesAndVisibilityForAccount(android::accounts::Account arg0);
		JString getPassword(android::accounts::Account arg0);
		JString getPreviousName(android::accounts::Account arg0);
		JString getUserData(android::accounts::Account arg0, JString arg1);
		JObject hasFeatures(android::accounts::Account arg0, JArray arg1, JObject arg2, android::os::Handler arg3);
		void invalidateAuthToken(JString arg0, JString arg1);
		JObject isCredentialsUpdateSuggested(android::accounts::Account arg0, JString arg1, JObject arg2, android::os::Handler arg3);
		jboolean notifyAccountAuthenticated(android::accounts::Account arg0);
		JString peekAuthToken(android::accounts::Account arg0, JString arg1);
		JObject removeAccount(android::accounts::Account arg0, JObject arg1, android::os::Handler arg2);
		JObject removeAccount(android::accounts::Account arg0, android::app::Activity arg1, JObject arg2, android::os::Handler arg3);
		jboolean removeAccountExplicitly(android::accounts::Account arg0);
		void removeOnAccountsUpdatedListener(JObject arg0);
		JObject renameAccount(android::accounts::Account arg0, JString arg1, JObject arg2, android::os::Handler arg3);
		jboolean setAccountVisibility(android::accounts::Account arg0, JString arg1, jint arg2);
		void setAuthToken(android::accounts::Account arg0, JString arg1, JString arg2);
		void setPassword(android::accounts::Account arg0, JString arg1);
		void setUserData(android::accounts::Account arg0, JString arg1, JString arg2);
		JObject startAddAccountSession(JString arg0, JString arg1, JArray arg2, android::os::Bundle arg3, android::app::Activity arg4, JObject arg5, android::os::Handler arg6);
		JObject startUpdateCredentialsSession(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, android::app::Activity arg3, JObject arg4, android::os::Handler arg5);
		JObject updateCredentials(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, android::app::Activity arg3, JObject arg4, android::os::Handler arg5);
	};
} // namespace android::accounts

