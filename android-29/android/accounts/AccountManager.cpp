#include "./Account.hpp"
#include "../app/Activity.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./AccountManager.hpp"

namespace android::accounts
{
	// Fields
	jstring AccountManager::ACTION_ACCOUNT_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"ACTION_ACCOUNT_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::ACTION_AUTHENTICATOR_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"ACTION_AUTHENTICATOR_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::AUTHENTICATOR_ATTRIBUTES_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"AUTHENTICATOR_ATTRIBUTES_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::AUTHENTICATOR_META_DATA_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"AUTHENTICATOR_META_DATA_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccountManager::ERROR_CODE_BAD_ARGUMENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_BAD_ARGUMENTS"
		);
	}
	jint AccountManager::ERROR_CODE_BAD_AUTHENTICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_BAD_AUTHENTICATION"
		);
	}
	jint AccountManager::ERROR_CODE_BAD_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_BAD_REQUEST"
		);
	}
	jint AccountManager::ERROR_CODE_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_CANCELED"
		);
	}
	jint AccountManager::ERROR_CODE_INVALID_RESPONSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_INVALID_RESPONSE"
		);
	}
	jint AccountManager::ERROR_CODE_NETWORK_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_NETWORK_ERROR"
		);
	}
	jint AccountManager::ERROR_CODE_REMOTE_EXCEPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_REMOTE_EXCEPTION"
		);
	}
	jint AccountManager::ERROR_CODE_UNSUPPORTED_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_UNSUPPORTED_OPERATION"
		);
	}
	jstring AccountManager::KEY_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_ACCOUNT_AUTHENTICATOR_RESPONSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_AUTHENTICATOR_RESPONSE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_ACCOUNT_MANAGER_RESPONSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_MANAGER_RESPONSE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_ACCOUNT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_ACCOUNT_SESSION_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_SESSION_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_ACCOUNT_STATUS_TOKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_STATUS_TOKEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_ANDROID_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ANDROID_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_AUTHENTICATOR_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTHENTICATOR_TYPES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_AUTHTOKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTHTOKEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_AUTH_FAILED_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTH_FAILED_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_AUTH_TOKEN_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTH_TOKEN_LABEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_BOOLEAN_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_BOOLEAN_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_CALLER_PID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_CALLER_PID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_CALLER_UID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_CALLER_UID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_ERROR_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ERROR_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_ERROR_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ERROR_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_LAST_AUTHENTICATED_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_LAST_AUTHENTICATED_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::KEY_USERDATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_USERDATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::LOGIN_ACCOUNTS_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"LOGIN_ACCOUNTS_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccountManager::PACKAGE_NAME_KEY_LEGACY_VISIBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"PACKAGE_NAME_KEY_LEGACY_VISIBLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccountManager::VISIBILITY_NOT_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_NOT_VISIBLE"
		);
	}
	jint AccountManager::VISIBILITY_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_UNDEFINED"
		);
	}
	jint AccountManager::VISIBILITY_USER_MANAGED_NOT_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_USER_MANAGED_NOT_VISIBLE"
		);
	}
	jint AccountManager::VISIBILITY_USER_MANAGED_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_USER_MANAGED_VISIBLE"
		);
	}
	jint AccountManager::VISIBILITY_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_VISIBLE"
		);
	}
	
	AccountManager::AccountManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AccountManager::get(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accounts.AccountManager",
			"get",
			"(Landroid/content/Context;)Landroid/accounts/AccountManager;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::newChooseAccountIntent(android::accounts::Account arg0, __JniBaseClass arg1, jarray arg2, jstring arg3, jstring arg4, jarray arg5, android::os::Bundle arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accounts.AccountManager",
			"newChooseAccountIntent",
			"(Landroid/accounts/Account;Ljava/util/List;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::newChooseAccountIntent(android::accounts::Account arg0, java::util::ArrayList arg1, jarray arg2, jboolean arg3, jstring arg4, jstring arg5, jarray arg6, android::os::Bundle arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accounts.AccountManager",
			"newChooseAccountIntent",
			"(Landroid/accounts/Account;Ljava/util/ArrayList;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::addAccount(jstring arg0, jstring arg1, jarray arg2, android::os::Bundle arg3, android::app::Activity arg4, __JniBaseClass arg5, android::os::Handler arg6)
	{
		return __thiz.callObjectMethod(
			"addAccount",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	jboolean AccountManager::addAccountExplicitly(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"addAccountExplicitly",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean AccountManager::addAccountExplicitly(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, __JniBaseClass arg3)
	{
		return __thiz.callMethod<jboolean>(
			"addAccountExplicitly",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Ljava/util/Map;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void AccountManager::addOnAccountsUpdatedListener(__JniBaseClass arg0, android::os::Handler arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"addOnAccountsUpdatedListener",
			"(Landroid/accounts/OnAccountsUpdateListener;Landroid/os/Handler;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void AccountManager::addOnAccountsUpdatedListener(__JniBaseClass arg0, android::os::Handler arg1, jboolean arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"addOnAccountsUpdatedListener",
			"(Landroid/accounts/OnAccountsUpdateListener;Landroid/os/Handler;Z[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jstring AccountManager::blockingGetAuthToken(android::accounts::Account arg0, jstring arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"blockingGetAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	void AccountManager::clearPassword(android::accounts::Account arg0)
	{
		__thiz.callMethod<void>(
			"clearPassword",
			"(Landroid/accounts/Account;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::confirmCredentials(android::accounts::Account arg0, android::os::Bundle arg1, android::app::Activity arg2, __JniBaseClass arg3, android::os::Handler arg4)
	{
		return __thiz.callObjectMethod(
			"confirmCredentials",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::editProperties(jstring arg0, android::app::Activity arg1, __JniBaseClass arg2, android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"editProperties",
			"(Ljava/lang/String;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::finishSession(android::os::Bundle arg0, android::app::Activity arg1, __JniBaseClass arg2, android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"finishSession",
			"(Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jint AccountManager::getAccountVisibility(android::accounts::Account arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"getAccountVisibility",
			"(Landroid/accounts/Account;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jarray AccountManager::getAccounts()
	{
		return __thiz.callObjectMethod(
			"getAccounts",
			"()[Landroid/accounts/Account;"
		).object<jarray>();
	}
	QAndroidJniObject AccountManager::getAccountsAndVisibilityForPackage(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getAccountsAndVisibilityForPackage",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;",
			arg0,
			arg1
		);
	}
	jarray AccountManager::getAccountsByType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAccountsByType",
			"(Ljava/lang/String;)[Landroid/accounts/Account;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject AccountManager::getAccountsByTypeAndFeatures(jstring arg0, jarray arg1, __JniBaseClass arg2, android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"getAccountsByTypeAndFeatures",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jarray AccountManager::getAccountsByTypeForPackage(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getAccountsByTypeForPackage",
			"(Ljava/lang/String;Ljava/lang/String;)[Landroid/accounts/Account;",
			arg0,
			arg1
		).object<jarray>();
	}
	QAndroidJniObject AccountManager::getAuthToken(android::accounts::Account arg0, jstring arg1, jboolean arg2, __JniBaseClass arg3, android::os::Handler arg4)
	{
		return __thiz.callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;ZLandroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::getAuthToken(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, android::app::Activity arg3, __JniBaseClass arg4, android::os::Handler arg5)
	{
		return __thiz.callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::getAuthToken(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, jboolean arg3, __JniBaseClass arg4, android::os::Handler arg5)
	{
		return __thiz.callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;ZLandroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::getAuthTokenByFeatures(jstring arg0, jstring arg1, jarray arg2, android::app::Activity arg3, android::os::Bundle arg4, android::os::Bundle arg5, __JniBaseClass arg6, android::os::Handler arg7)
	{
		return __thiz.callObjectMethod(
			"getAuthTokenByFeatures",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/Bundle;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	jarray AccountManager::getAuthenticatorTypes()
	{
		return __thiz.callObjectMethod(
			"getAuthenticatorTypes",
			"()[Landroid/accounts/AuthenticatorDescription;"
		).object<jarray>();
	}
	QAndroidJniObject AccountManager::getPackagesAndVisibilityForAccount(android::accounts::Account arg0)
	{
		return __thiz.callObjectMethod(
			"getPackagesAndVisibilityForAccount",
			"(Landroid/accounts/Account;)Ljava/util/Map;",
			arg0.__jniObject().object()
		);
	}
	jstring AccountManager::getPassword(android::accounts::Account arg0)
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"(Landroid/accounts/Account;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring AccountManager::getPreviousName(android::accounts::Account arg0)
	{
		return __thiz.callObjectMethod(
			"getPreviousName",
			"(Landroid/accounts/Account;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring AccountManager::getUserData(android::accounts::Account arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getUserData",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	QAndroidJniObject AccountManager::hasFeatures(android::accounts::Account arg0, jarray arg1, __JniBaseClass arg2, android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"hasFeatures",
			"(Landroid/accounts/Account;[Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void AccountManager::invalidateAuthToken(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"invalidateAuthToken",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AccountManager::isCredentialsUpdateSuggested(android::accounts::Account arg0, jstring arg1, __JniBaseClass arg2, android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"isCredentialsUpdateSuggested",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean AccountManager::notifyAccountAuthenticated(android::accounts::Account arg0)
	{
		return __thiz.callMethod<jboolean>(
			"notifyAccountAuthenticated",
			"(Landroid/accounts/Account;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring AccountManager::peekAuthToken(android::accounts::Account arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"peekAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	QAndroidJniObject AccountManager::removeAccount(android::accounts::Account arg0, __JniBaseClass arg1, android::os::Handler arg2)
	{
		return __thiz.callObjectMethod(
			"removeAccount",
			"(Landroid/accounts/Account;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::removeAccount(android::accounts::Account arg0, android::app::Activity arg1, __JniBaseClass arg2, android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"removeAccount",
			"(Landroid/accounts/Account;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean AccountManager::removeAccountExplicitly(android::accounts::Account arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAccountExplicitly",
			"(Landroid/accounts/Account;)Z",
			arg0.__jniObject().object()
		);
	}
	void AccountManager::removeOnAccountsUpdatedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnAccountsUpdatedListener",
			"(Landroid/accounts/OnAccountsUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::renameAccount(android::accounts::Account arg0, jstring arg1, __JniBaseClass arg2, android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"renameAccount",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean AccountManager::setAccountVisibility(android::accounts::Account arg0, jstring arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setAccountVisibility",
			"(Landroid/accounts/Account;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AccountManager::setAuthToken(android::accounts::Account arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AccountManager::setPassword(android::accounts::Account arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Landroid/accounts/Account;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccountManager::setUserData(android::accounts::Account arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setUserData",
			"(Landroid/accounts/Account;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject AccountManager::startAddAccountSession(jstring arg0, jstring arg1, jarray arg2, android::os::Bundle arg3, android::app::Activity arg4, __JniBaseClass arg5, android::os::Handler arg6)
	{
		return __thiz.callObjectMethod(
			"startAddAccountSession",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::startUpdateCredentialsSession(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, android::app::Activity arg3, __JniBaseClass arg4, android::os::Handler arg5)
	{
		return __thiz.callObjectMethod(
			"startUpdateCredentialsSession",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject AccountManager::updateCredentials(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, android::app::Activity arg3, __JniBaseClass arg4, android::os::Handler arg5)
	{
		return __thiz.callObjectMethod(
			"updateCredentials",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
} // namespace android::accounts

