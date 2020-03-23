#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCSTATE
#define ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCSTATE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentProviderClient;
}
namespace __jni_impl::android::accounts
{
	class Account;
}
namespace __jni_impl::android::util
{
	class Pair;
}
namespace __jni_impl::android::content
{
	class ContentProviderOperation;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_SyncState : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1);
		static void set(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1, jbyteArray arg2);
		static QAndroidJniObject getWithUri(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1);
		static QAndroidJniObject newSetOperation(__jni_impl::android::accounts::Account arg0, jbyteArray arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentProviderClient.hpp"
#include "../accounts/Account.hpp"
#include "../util/Pair.hpp"
#include "../content/ContentProviderOperation.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_SyncState::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$SyncState",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_SyncState::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$SyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void ContactsContract_SyncState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$SyncState",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ContactsContract_SyncState::get(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$SyncState",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)[B",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ContactsContract_SyncState::set(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1, jbyteArray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$SyncState",
			"set",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject ContactsContract_SyncState::getWithUri(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$SyncState",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ContactsContract_SyncState::newSetOperation(__jni_impl::android::accounts::Account arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$SyncState",
			"newSetOperation",
			"(Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_SyncState : public __jni_impl::android::provider::ContactsContract_SyncState
	{
	public:
		ContactsContract_SyncState(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_SyncState()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCSTATE

