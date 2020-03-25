#pragma once

#ifndef ANDROID_ACCOUNTS_ACCOUNTMANAGER
#define ANDROID_ACCOUNTS_ACCOUNTMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::accounts
{
	class Account;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::accounts
{
	class AccountManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_ACCOUNT_REMOVED();
		static QAndroidJniObject ACTION_AUTHENTICATOR_INTENT();
		static QAndroidJniObject AUTHENTICATOR_ATTRIBUTES_NAME();
		static QAndroidJniObject AUTHENTICATOR_META_DATA_NAME();
		static jint ERROR_CODE_BAD_ARGUMENTS();
		static jint ERROR_CODE_BAD_AUTHENTICATION();
		static jint ERROR_CODE_BAD_REQUEST();
		static jint ERROR_CODE_CANCELED();
		static jint ERROR_CODE_INVALID_RESPONSE();
		static jint ERROR_CODE_NETWORK_ERROR();
		static jint ERROR_CODE_REMOTE_EXCEPTION();
		static jint ERROR_CODE_UNSUPPORTED_OPERATION();
		static QAndroidJniObject KEY_ACCOUNTS();
		static QAndroidJniObject KEY_ACCOUNT_AUTHENTICATOR_RESPONSE();
		static QAndroidJniObject KEY_ACCOUNT_MANAGER_RESPONSE();
		static QAndroidJniObject KEY_ACCOUNT_NAME();
		static QAndroidJniObject KEY_ACCOUNT_SESSION_BUNDLE();
		static QAndroidJniObject KEY_ACCOUNT_STATUS_TOKEN();
		static QAndroidJniObject KEY_ACCOUNT_TYPE();
		static QAndroidJniObject KEY_ANDROID_PACKAGE_NAME();
		static QAndroidJniObject KEY_AUTHENTICATOR_TYPES();
		static QAndroidJniObject KEY_AUTHTOKEN();
		static QAndroidJniObject KEY_AUTH_FAILED_MESSAGE();
		static QAndroidJniObject KEY_AUTH_TOKEN_LABEL();
		static QAndroidJniObject KEY_BOOLEAN_RESULT();
		static QAndroidJniObject KEY_CALLER_PID();
		static QAndroidJniObject KEY_CALLER_UID();
		static QAndroidJniObject KEY_ERROR_CODE();
		static QAndroidJniObject KEY_ERROR_MESSAGE();
		static QAndroidJniObject KEY_INTENT();
		static QAndroidJniObject KEY_LAST_AUTHENTICATED_TIME();
		static QAndroidJniObject KEY_PASSWORD();
		static QAndroidJniObject KEY_USERDATA();
		static QAndroidJniObject LOGIN_ACCOUNTS_CHANGED_ACTION();
		static QAndroidJniObject PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE();
		static QAndroidJniObject PACKAGE_NAME_KEY_LEGACY_VISIBLE();
		static jint VISIBILITY_NOT_VISIBLE();
		static jint VISIBILITY_UNDEFINED();
		static jint VISIBILITY_USER_MANAGED_NOT_VISIBLE();
		static jint VISIBILITY_USER_MANAGED_VISIBLE();
		static jint VISIBILITY_VISIBLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::content::Context arg0);
		void setPassword(__jni_impl::android::accounts::Account arg0, jstring arg1);
		void setUserData(__jni_impl::android::accounts::Account arg0, jstring arg1, jstring arg2);
		QAndroidJniObject getPassword(__jni_impl::android::accounts::Account arg0);
		QAndroidJniObject getUserData(__jni_impl::android::accounts::Account arg0, jstring arg1);
		QAndroidJniObject getAuthenticatorTypes();
		QAndroidJniObject getAccounts();
		QAndroidJniObject getAccountsByTypeForPackage(jstring arg0, jstring arg1);
		QAndroidJniObject getAccountsByType(jstring arg0);
		QAndroidJniObject hasFeatures(__jni_impl::android::accounts::Account arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		QAndroidJniObject getAccountsByTypeAndFeatures(jstring arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		jboolean addAccountExplicitly(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::__JniBaseClass arg3);
		jboolean addAccountExplicitly(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject getPackagesAndVisibilityForAccount(__jni_impl::android::accounts::Account arg0);
		QAndroidJniObject getAccountsAndVisibilityForPackage(jstring arg0, jstring arg1);
		jboolean setAccountVisibility(__jni_impl::android::accounts::Account arg0, jstring arg1, jint arg2);
		jint getAccountVisibility(__jni_impl::android::accounts::Account arg0, jstring arg1);
		jboolean notifyAccountAuthenticated(__jni_impl::android::accounts::Account arg0);
		QAndroidJniObject renameAccount(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		QAndroidJniObject getPreviousName(__jni_impl::android::accounts::Account arg0);
		QAndroidJniObject removeAccount(__jni_impl::android::accounts::Account arg0, __jni_impl::android::app::Activity arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		QAndroidJniObject removeAccount(__jni_impl::android::accounts::Account arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2);
		jboolean removeAccountExplicitly(__jni_impl::android::accounts::Account arg0);
		void invalidateAuthToken(jstring arg0, jstring arg1);
		QAndroidJniObject peekAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1);
		void clearPassword(__jni_impl::android::accounts::Account arg0);
		void setAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, jstring arg2);
		QAndroidJniObject blockingGetAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, jboolean arg2);
		QAndroidJniObject getAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, jboolean arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5);
		QAndroidJniObject getAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, jboolean arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
		QAndroidJniObject getAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::app::Activity arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5);
		QAndroidJniObject addAccount(jstring arg0, jstring arg1, jarray arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::app::Activity arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::android::os::Handler arg6);
		QAndroidJniObject confirmCredentials(__jni_impl::android::accounts::Account arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::app::Activity arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
		QAndroidJniObject updateCredentials(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::app::Activity arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5);
		QAndroidJniObject editProperties(jstring arg0, __jni_impl::android::app::Activity arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		QAndroidJniObject getAuthTokenByFeatures(jstring arg0, jstring arg1, jarray arg2, __jni_impl::android::app::Activity arg3, __jni_impl::android::os::Bundle arg4, __jni_impl::android::os::Bundle arg5, __jni_impl::__JniBaseClass arg6, __jni_impl::android::os::Handler arg7);
		static QAndroidJniObject newChooseAccountIntent(__jni_impl::android::accounts::Account arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jstring arg3, jstring arg4, jarray arg5, __jni_impl::android::os::Bundle arg6);
		static QAndroidJniObject newChooseAccountIntent(__jni_impl::android::accounts::Account arg0, __jni_impl::java::util::ArrayList arg1, jarray arg2, jboolean arg3, jstring arg4, jstring arg5, jarray arg6, __jni_impl::android::os::Bundle arg7);
		void addOnAccountsUpdatedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1, jboolean arg2, jarray arg3);
		void addOnAccountsUpdatedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1, jboolean arg2);
		void removeOnAccountsUpdatedListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject startAddAccountSession(jstring arg0, jstring arg1, jarray arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::app::Activity arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::android::os::Handler arg6);
		QAndroidJniObject startUpdateCredentialsSession(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::app::Activity arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5);
		QAndroidJniObject finishSession(__jni_impl::android::os::Bundle arg0, __jni_impl::android::app::Activity arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		QAndroidJniObject isCredentialsUpdateSuggested(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
	};
} // namespace __jni_impl::android::accounts

#include "../content/Context.hpp"
#include "Account.hpp"
#include "../os/Handler.hpp"
#include "../os/Bundle.hpp"
#include "../app/Activity.hpp"
#include "../content/Intent.hpp"
#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::accounts
{
	// Fields
	QAndroidJniObject AccountManager::ACTION_ACCOUNT_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"ACTION_ACCOUNT_REMOVED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::ACTION_AUTHENTICATOR_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"ACTION_AUTHENTICATOR_INTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::AUTHENTICATOR_ATTRIBUTES_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"AUTHENTICATOR_ATTRIBUTES_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::AUTHENTICATOR_META_DATA_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"AUTHENTICATOR_META_DATA_NAME",
			"Ljava/lang/String;");
	}
	jint AccountManager::ERROR_CODE_BAD_ARGUMENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_BAD_ARGUMENTS");
	}
	jint AccountManager::ERROR_CODE_BAD_AUTHENTICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_BAD_AUTHENTICATION");
	}
	jint AccountManager::ERROR_CODE_BAD_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_BAD_REQUEST");
	}
	jint AccountManager::ERROR_CODE_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_CANCELED");
	}
	jint AccountManager::ERROR_CODE_INVALID_RESPONSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_INVALID_RESPONSE");
	}
	jint AccountManager::ERROR_CODE_NETWORK_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_NETWORK_ERROR");
	}
	jint AccountManager::ERROR_CODE_REMOTE_EXCEPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_REMOTE_EXCEPTION");
	}
	jint AccountManager::ERROR_CODE_UNSUPPORTED_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"ERROR_CODE_UNSUPPORTED_OPERATION");
	}
	QAndroidJniObject AccountManager::KEY_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_ACCOUNT_AUTHENTICATOR_RESPONSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_AUTHENTICATOR_RESPONSE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_ACCOUNT_MANAGER_RESPONSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_MANAGER_RESPONSE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_ACCOUNT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_ACCOUNT_SESSION_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_SESSION_BUNDLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_ACCOUNT_STATUS_TOKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_STATUS_TOKEN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ACCOUNT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_ANDROID_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ANDROID_PACKAGE_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_AUTHENTICATOR_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTHENTICATOR_TYPES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_AUTHTOKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTHTOKEN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_AUTH_FAILED_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTH_FAILED_MESSAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_AUTH_TOKEN_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_AUTH_TOKEN_LABEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_BOOLEAN_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_BOOLEAN_RESULT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_CALLER_PID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_CALLER_PID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_CALLER_UID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_CALLER_UID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_ERROR_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ERROR_CODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_ERROR_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_ERROR_MESSAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_INTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_LAST_AUTHENTICATED_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_LAST_AUTHENTICATED_TIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_PASSWORD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::KEY_USERDATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"KEY_USERDATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::LOGIN_ACCOUNTS_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"LOGIN_ACCOUNTS_CHANGED_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AccountManager::PACKAGE_NAME_KEY_LEGACY_VISIBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountManager",
			"PACKAGE_NAME_KEY_LEGACY_VISIBLE",
			"Ljava/lang/String;");
	}
	jint AccountManager::VISIBILITY_NOT_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_NOT_VISIBLE");
	}
	jint AccountManager::VISIBILITY_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_UNDEFINED");
	}
	jint AccountManager::VISIBILITY_USER_MANAGED_NOT_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_USER_MANAGED_NOT_VISIBLE");
	}
	jint AccountManager::VISIBILITY_USER_MANAGED_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_USER_MANAGED_VISIBLE");
	}
	jint AccountManager::VISIBILITY_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accounts.AccountManager",
			"VISIBILITY_VISIBLE");
	}
	
	// Constructors
	void AccountManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AccountManager::get(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accounts.AccountManager",
			"get",
			"(Landroid/content/Context;)Landroid/accounts/AccountManager;",
			arg0.__jniObject().object());
	}
	void AccountManager::setPassword(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Landroid/accounts/Account;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void AccountManager::setUserData(__jni_impl::android::accounts::Account arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setUserData",
			"(Landroid/accounts/Account;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject AccountManager::getPassword(__jni_impl::android::accounts::Account arg0)
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"(Landroid/accounts/Account;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccountManager::getUserData(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getUserData",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject AccountManager::getAuthenticatorTypes()
	{
		return __thiz.callObjectMethod(
			"getAuthenticatorTypes",
			"()[Landroid/accounts/AuthenticatorDescription;");
	}
	QAndroidJniObject AccountManager::getAccounts()
	{
		return __thiz.callObjectMethod(
			"getAccounts",
			"()[Landroid/accounts/Account;");
	}
	QAndroidJniObject AccountManager::getAccountsByTypeForPackage(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getAccountsByTypeForPackage",
			"(Ljava/lang/String;Ljava/lang/String;)[Landroid/accounts/Account;",
			arg0,
			arg1);
	}
	QAndroidJniObject AccountManager::getAccountsByType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAccountsByType",
			"(Ljava/lang/String;)[Landroid/accounts/Account;",
			arg0);
	}
	QAndroidJniObject AccountManager::hasFeatures(__jni_impl::android::accounts::Account arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"hasFeatures",
			"(Landroid/accounts/Account;[Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject AccountManager::getAccountsByTypeAndFeatures(jstring arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"getAccountsByTypeAndFeatures",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	jboolean AccountManager::addAccountExplicitly(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jboolean>(
			"addAccountExplicitly",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Ljava/util/Map;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	jboolean AccountManager::addAccountExplicitly(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"addAccountExplicitly",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject AccountManager::getPackagesAndVisibilityForAccount(__jni_impl::android::accounts::Account arg0)
	{
		return __thiz.callObjectMethod(
			"getPackagesAndVisibilityForAccount",
			"(Landroid/accounts/Account;)Ljava/util/Map;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccountManager::getAccountsAndVisibilityForPackage(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getAccountsAndVisibilityForPackage",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;",
			arg0,
			arg1);
	}
	jboolean AccountManager::setAccountVisibility(__jni_impl::android::accounts::Account arg0, jstring arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setAccountVisibility",
			"(Landroid/accounts/Account;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	jint AccountManager::getAccountVisibility(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"getAccountVisibility",
			"(Landroid/accounts/Account;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean AccountManager::notifyAccountAuthenticated(__jni_impl::android::accounts::Account arg0)
	{
		return __thiz.callMethod<jboolean>(
			"notifyAccountAuthenticated",
			"(Landroid/accounts/Account;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccountManager::renameAccount(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"renameAccount",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject AccountManager::getPreviousName(__jni_impl::android::accounts::Account arg0)
	{
		return __thiz.callObjectMethod(
			"getPreviousName",
			"(Landroid/accounts/Account;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccountManager::removeAccount(__jni_impl::android::accounts::Account arg0, __jni_impl::android::app::Activity arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"removeAccount",
			"(Landroid/accounts/Account;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject AccountManager::removeAccount(__jni_impl::android::accounts::Account arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
	{
		return __thiz.callObjectMethod(
			"removeAccount",
			"(Landroid/accounts/Account;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jboolean AccountManager::removeAccountExplicitly(__jni_impl::android::accounts::Account arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAccountExplicitly",
			"(Landroid/accounts/Account;)Z",
			arg0.__jniObject().object());
	}
	void AccountManager::invalidateAuthToken(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"invalidateAuthToken",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject AccountManager::peekAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"peekAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1);
	}
	void AccountManager::clearPassword(__jni_impl::android::accounts::Account arg0)
	{
		__thiz.callMethod<void>(
			"clearPassword",
			"(Landroid/accounts/Account;)V",
			arg0.__jniObject().object());
	}
	void AccountManager::setAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject AccountManager::blockingGetAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"blockingGetAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject AccountManager::getAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, jboolean arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5)
	{
		return __thiz.callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;ZLandroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	QAndroidJniObject AccountManager::getAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, jboolean arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4)
	{
		return __thiz.callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;ZLandroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	QAndroidJniObject AccountManager::getAuthToken(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::app::Activity arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5)
	{
		return __thiz.callObjectMethod(
			"getAuthToken",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	QAndroidJniObject AccountManager::addAccount(jstring arg0, jstring arg1, jarray arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::app::Activity arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::android::os::Handler arg6)
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
			arg6.__jniObject().object());
	}
	QAndroidJniObject AccountManager::confirmCredentials(__jni_impl::android::accounts::Account arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::app::Activity arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4)
	{
		return __thiz.callObjectMethod(
			"confirmCredentials",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	QAndroidJniObject AccountManager::updateCredentials(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::app::Activity arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5)
	{
		return __thiz.callObjectMethod(
			"updateCredentials",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	QAndroidJniObject AccountManager::editProperties(jstring arg0, __jni_impl::android::app::Activity arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"editProperties",
			"(Ljava/lang/String;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject AccountManager::getAuthTokenByFeatures(jstring arg0, jstring arg1, jarray arg2, __jni_impl::android::app::Activity arg3, __jni_impl::android::os::Bundle arg4, __jni_impl::android::os::Bundle arg5, __jni_impl::__JniBaseClass arg6, __jni_impl::android::os::Handler arg7)
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
			arg7.__jniObject().object());
	}
	QAndroidJniObject AccountManager::newChooseAccountIntent(__jni_impl::android::accounts::Account arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jstring arg3, jstring arg4, jarray arg5, __jni_impl::android::os::Bundle arg6)
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
			arg6.__jniObject().object());
	}
	QAndroidJniObject AccountManager::newChooseAccountIntent(__jni_impl::android::accounts::Account arg0, __jni_impl::java::util::ArrayList arg1, jarray arg2, jboolean arg3, jstring arg4, jstring arg5, jarray arg6, __jni_impl::android::os::Bundle arg7)
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
			arg7.__jniObject().object());
	}
	void AccountManager::addOnAccountsUpdatedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1, jboolean arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"addOnAccountsUpdatedListener",
			"(Landroid/accounts/OnAccountsUpdateListener;Landroid/os/Handler;Z[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void AccountManager::addOnAccountsUpdatedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"addOnAccountsUpdatedListener",
			"(Landroid/accounts/OnAccountsUpdateListener;Landroid/os/Handler;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void AccountManager::removeOnAccountsUpdatedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnAccountsUpdatedListener",
			"(Landroid/accounts/OnAccountsUpdateListener;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccountManager::startAddAccountSession(jstring arg0, jstring arg1, jarray arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::app::Activity arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::android::os::Handler arg6)
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
			arg6.__jniObject().object());
	}
	QAndroidJniObject AccountManager::startUpdateCredentialsSession(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::app::Activity arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::Handler arg5)
	{
		return __thiz.callObjectMethod(
			"startUpdateCredentialsSession",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	QAndroidJniObject AccountManager::finishSession(__jni_impl::android::os::Bundle arg0, __jni_impl::android::app::Activity arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"finishSession",
			"(Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject AccountManager::isCredentialsUpdateSuggested(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"isCredentialsUpdateSuggested",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class AccountManager : public __jni_impl::android::accounts::AccountManager
	{
	public:
		AccountManager(QAndroidJniObject obj) { __thiz = obj; }
		AccountManager()
		{
			__constructor();
		}
	};
} // namespace android::accounts

#endif // ANDROID_ACCOUNTS_ACCOUNTMANAGER

