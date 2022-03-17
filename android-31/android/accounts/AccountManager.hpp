#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./Account.def.hpp"
#include "../app/Activity.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./AccountManager.def.hpp"

namespace android::accounts
{
	// Fields
	inline JString AccountManager::ACTION_ACCOUNT_REMOVED()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"ACTION_ACCOUNT_REMOVED",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::ACTION_AUTHENTICATOR_INTENT()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"ACTION_AUTHENTICATOR_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::AUTHENTICATOR_ATTRIBUTES_NAME()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"AUTHENTICATOR_ATTRIBUTES_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::AUTHENTICATOR_META_DATA_NAME()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"AUTHENTICATOR_META_DATA_NAME",
			"Ljava/lang/String;"
		);
	}
	inline jint AccountManager::ERROR_CODE_BAD_ARGUMENTS()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_BAD_ARGUMENTS"
		);
	}
	inline jint AccountManager::ERROR_CODE_BAD_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_BAD_AUTHENTICATION"
		);
	}
	inline jint AccountManager::ERROR_CODE_BAD_REQUEST()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_BAD_REQUEST"
		);
	}
	inline jint AccountManager::ERROR_CODE_CANCELED()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_CANCELED"
		);
	}
	inline jint AccountManager::ERROR_CODE_INVALID_RESPONSE()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_INVALID_RESPONSE"
		);
	}
	inline jint AccountManager::ERROR_CODE_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_NETWORK_ERROR"
		);
	}
	inline jint AccountManager::ERROR_CODE_REMOTE_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_REMOTE_EXCEPTION"
		);
	}
	inline jint AccountManager::ERROR_CODE_UNSUPPORTED_OPERATION()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_UNSUPPORTED_OPERATION"
		);
	}
	inline JString AccountManager::KEY_ACCOUNTS()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_ACCOUNT_AUTHENTICATOR_RESPONSE()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_AUTHENTICATOR_RESPONSE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_ACCOUNT_MANAGER_RESPONSE()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_MANAGER_RESPONSE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_ACCOUNT_NAME()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_ACCOUNT_SESSION_BUNDLE()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_SESSION_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_ACCOUNT_STATUS_TOKEN()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_STATUS_TOKEN",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_ANDROID_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ANDROID_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_AUTHENTICATOR_TYPES()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTHENTICATOR_TYPES",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_AUTHTOKEN()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTHTOKEN",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_AUTH_FAILED_MESSAGE()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTH_FAILED_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_AUTH_TOKEN_LABEL()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTH_TOKEN_LABEL",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_BOOLEAN_RESULT()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_BOOLEAN_RESULT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_CALLER_PID()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_CALLER_PID",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_CALLER_UID()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_CALLER_UID",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_ERROR_CODE()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ERROR_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_ERROR_MESSAGE()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ERROR_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_INTENT()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_LAST_AUTHENTICATED_TIME()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_LAST_AUTHENTICATED_TIME",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_PASSWORD()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::KEY_USERDATA()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_USERDATA",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::LOGIN_ACCOUNTS_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"LOGIN_ACCOUNTS_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccountManager::PACKAGE_NAME_KEY_LEGACY_VISIBLE()
	{
		return getStaticObjectField(
			"android.accounts.AccountManager",
			"PACKAGE_NAME_KEY_LEGACY_VISIBLE",
			"Ljava/lang/String;"
		);
	}
	inline jint AccountManager::VISIBILITY_NOT_VISIBLE()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_NOT_VISIBLE"
		);
	}
	inline jint AccountManager::VISIBILITY_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_UNDEFINED"
		);
	}
	inline jint AccountManager::VISIBILITY_USER_MANAGED_NOT_VISIBLE()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_USER_MANAGED_NOT_VISIBLE"
		);
	}
	inline jint AccountManager::VISIBILITY_USER_MANAGED_VISIBLE()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_USER_MANAGED_VISIBLE"
		);
	}
	inline jint AccountManager::VISIBILITY_VISIBLE()
	{
		return getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_VISIBLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::accounts::AccountManager AccountManager::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.accounts.AccountManager",
			"get",
			"(Landroid/content/Context;)Landroid/accounts/AccountManager;",
			arg0.object()
		);
	}
	inline android::content::Intent AccountManager::newChooseAccountIntent(android::accounts::Account arg0, JObject arg1, JArray arg2, JString arg3, JString arg4, JArray arg5, android::os::Bundle arg6)
	{
		return callStaticObjectMethod(
			"android.accounts.AccountManager",
			"newChooseAccountIntent",
			"(Landroid/accounts/Account;Ljava/util/List;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jarray>(),
			arg6.object()
		);
	}
	inline android::content::Intent AccountManager::newChooseAccountIntent(android::accounts::Account arg0, java::util::ArrayList arg1, JArray arg2, jboolean arg3, JString arg4, JString arg5, JArray arg6, android::os::Bundle arg7)
	{
		return callStaticObjectMethod(
			"android.accounts.AccountManager",
			"newChooseAccountIntent",
			"(Landroid/accounts/Account;Ljava/util/ArrayList;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3,
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jarray>(),
			arg7.object()
		);
	}
	inline JObject AccountManager::addAccount(JString arg0, JString arg1, JArray arg2, android::os::Bundle arg3, android::app::Activity arg4, JObject arg5, android::os::Handler arg6) const
	{
		return callObjectMethod(
			"addAccount",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jarray>(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	inline jboolean AccountManager::addAccountExplicitly(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"addAccountExplicitly",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jboolean AccountManager::addAccountExplicitly(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, JObject arg3) const
	{
		return callMethod<jboolean>(
			"addAccountExplicitly",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Ljava/util/Map;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void AccountManager::addOnAccountsUpdatedListener(JObject arg0, android::os::Handler arg1, jboolean arg2) const
	{
		callMethod<void>(
			"addOnAccountsUpdatedListener",
			"(Landroid/accounts/OnAccountsUpdateListener;Landroid/os/Handler;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void AccountManager::addOnAccountsUpdatedListener(JObject arg0, android::os::Handler arg1, jboolean arg2, JArray arg3) const
	{
		callMethod<void>(
			"addOnAccountsUpdatedListener",
			"(Landroid/accounts/OnAccountsUpdateListener;Landroid/os/Handler;Z[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jarray>()
		);
	}
	inline JString AccountManager::blockingGetAuthToken(android::accounts::Account arg0, JString arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"blockingGetAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Z)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void AccountManager::clearPassword(android::accounts::Account arg0) const
	{
		callMethod<void>(
			"clearPassword",
			"(Landroid/accounts/Account;)V",
			arg0.object()
		);
	}
	inline JObject AccountManager::confirmCredentials(android::accounts::Account arg0, android::os::Bundle arg1, android::app::Activity arg2, JObject arg3, android::os::Handler arg4) const
	{
		return callObjectMethod(
			"confirmCredentials",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline JObject AccountManager::editProperties(JString arg0, android::app::Activity arg1, JObject arg2, android::os::Handler arg3) const
	{
		return callObjectMethod(
			"editProperties",
			"(Ljava/lang/String;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JObject AccountManager::finishSession(android::os::Bundle arg0, android::app::Activity arg1, JObject arg2, android::os::Handler arg3) const
	{
		return callObjectMethod(
			"finishSession",
			"(Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jint AccountManager::getAccountVisibility(android::accounts::Account arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getAccountVisibility",
			"(Landroid/accounts/Account;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JArray AccountManager::getAccounts() const
	{
		return callObjectMethod(
			"getAccounts",
			"()[Landroid/accounts/Account;"
		);
	}
	inline JObject AccountManager::getAccountsAndVisibilityForPackage(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getAccountsAndVisibilityForPackage",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JArray AccountManager::getAccountsByType(JString arg0) const
	{
		return callObjectMethod(
			"getAccountsByType",
			"(Ljava/lang/String;)[Landroid/accounts/Account;",
			arg0.object<jstring>()
		);
	}
	inline JObject AccountManager::getAccountsByTypeAndFeatures(JString arg0, JArray arg1, JObject arg2, android::os::Handler arg3) const
	{
		return callObjectMethod(
			"getAccountsByTypeAndFeatures",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JArray AccountManager::getAccountsByTypeForPackage(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getAccountsByTypeForPackage",
			"(Ljava/lang/String;Ljava/lang/String;)[Landroid/accounts/Account;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject AccountManager::getAuthToken(android::accounts::Account arg0, JString arg1, jboolean arg2, JObject arg3, android::os::Handler arg4) const
	{
		return callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;ZLandroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	inline JObject AccountManager::getAuthToken(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, android::app::Activity arg3, JObject arg4, android::os::Handler arg5) const
	{
		return callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	inline JObject AccountManager::getAuthToken(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, jboolean arg3, JObject arg4, android::os::Handler arg5) const
	{
		return callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;ZLandroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3,
			arg4.object(),
			arg5.object()
		);
	}
	inline JObject AccountManager::getAuthTokenByFeatures(JString arg0, JString arg1, JArray arg2, android::app::Activity arg3, android::os::Bundle arg4, android::os::Bundle arg5, JObject arg6, android::os::Handler arg7) const
	{
		return callObjectMethod(
			"getAuthTokenByFeatures",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/Bundle;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jarray>(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object(),
			arg7.object()
		);
	}
	inline JArray AccountManager::getAuthenticatorTypes() const
	{
		return callObjectMethod(
			"getAuthenticatorTypes",
			"()[Landroid/accounts/AuthenticatorDescription;"
		);
	}
	inline JObject AccountManager::getPackagesAndVisibilityForAccount(android::accounts::Account arg0) const
	{
		return callObjectMethod(
			"getPackagesAndVisibilityForAccount",
			"(Landroid/accounts/Account;)Ljava/util/Map;",
			arg0.object()
		);
	}
	inline JString AccountManager::getPassword(android::accounts::Account arg0) const
	{
		return callObjectMethod(
			"getPassword",
			"(Landroid/accounts/Account;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString AccountManager::getPreviousName(android::accounts::Account arg0) const
	{
		return callObjectMethod(
			"getPreviousName",
			"(Landroid/accounts/Account;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString AccountManager::getUserData(android::accounts::Account arg0, JString arg1) const
	{
		return callObjectMethod(
			"getUserData",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JObject AccountManager::hasFeatures(android::accounts::Account arg0, JArray arg1, JObject arg2, android::os::Handler arg3) const
	{
		return callObjectMethod(
			"hasFeatures",
			"(Landroid/accounts/Account;[Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void AccountManager::invalidateAuthToken(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"invalidateAuthToken",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject AccountManager::isCredentialsUpdateSuggested(android::accounts::Account arg0, JString arg1, JObject arg2, android::os::Handler arg3) const
	{
		return callObjectMethod(
			"isCredentialsUpdateSuggested",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean AccountManager::notifyAccountAuthenticated(android::accounts::Account arg0) const
	{
		return callMethod<jboolean>(
			"notifyAccountAuthenticated",
			"(Landroid/accounts/Account;)Z",
			arg0.object()
		);
	}
	inline JString AccountManager::peekAuthToken(android::accounts::Account arg0, JString arg1) const
	{
		return callObjectMethod(
			"peekAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JObject AccountManager::removeAccount(android::accounts::Account arg0, JObject arg1, android::os::Handler arg2) const
	{
		return callObjectMethod(
			"removeAccount",
			"(Landroid/accounts/Account;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject AccountManager::removeAccount(android::accounts::Account arg0, android::app::Activity arg1, JObject arg2, android::os::Handler arg3) const
	{
		return callObjectMethod(
			"removeAccount",
			"(Landroid/accounts/Account;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean AccountManager::removeAccountExplicitly(android::accounts::Account arg0) const
	{
		return callMethod<jboolean>(
			"removeAccountExplicitly",
			"(Landroid/accounts/Account;)Z",
			arg0.object()
		);
	}
	inline void AccountManager::removeOnAccountsUpdatedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnAccountsUpdatedListener",
			"(Landroid/accounts/OnAccountsUpdateListener;)V",
			arg0.object()
		);
	}
	inline JObject AccountManager::renameAccount(android::accounts::Account arg0, JString arg1, JObject arg2, android::os::Handler arg3) const
	{
		return callObjectMethod(
			"renameAccount",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean AccountManager::setAccountVisibility(android::accounts::Account arg0, JString arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"setAccountVisibility",
			"(Landroid/accounts/Account;Ljava/lang/String;I)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void AccountManager::setAuthToken(android::accounts::Account arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void AccountManager::setPassword(android::accounts::Account arg0, JString arg1) const
	{
		callMethod<void>(
			"setPassword",
			"(Landroid/accounts/Account;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void AccountManager::setUserData(android::accounts::Account arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setUserData",
			"(Landroid/accounts/Account;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline JObject AccountManager::startAddAccountSession(JString arg0, JString arg1, JArray arg2, android::os::Bundle arg3, android::app::Activity arg4, JObject arg5, android::os::Handler arg6) const
	{
		return callObjectMethod(
			"startAddAccountSession",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jarray>(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	inline JObject AccountManager::startUpdateCredentialsSession(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, android::app::Activity arg3, JObject arg4, android::os::Handler arg5) const
	{
		return callObjectMethod(
			"startUpdateCredentialsSession",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	inline JObject AccountManager::updateCredentials(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, android::app::Activity arg3, JObject arg4, android::os::Handler arg5) const
	{
		return callObjectMethod(
			"updateCredentials",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
} // namespace android::accounts

// Base class headers

