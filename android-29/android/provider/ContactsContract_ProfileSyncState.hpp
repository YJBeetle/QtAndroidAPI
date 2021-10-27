#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accounts
{
	class Account;
}
namespace __jni_impl::android::content
{
	class ContentProviderClient;
}
namespace __jni_impl::android::content
{
	class ContentProviderOperation;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::util
{
	class Pair;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_ProfileSyncState : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jbyteArray get(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1);
		static QAndroidJniObject getWithUri(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1);
		static QAndroidJniObject newSetOperation(__jni_impl::android::accounts::Account arg0, jbyteArray arg1);
		static void set(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1, jbyteArray arg2);
	};
} // namespace __jni_impl::android::provider

#include "../accounts/Account.hpp"
#include "../content/ContentProviderClient.hpp"
#include "../content/ContentProviderOperation.hpp"
#include "../net/Uri.hpp"
#include "../util/Pair.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_ProfileSyncState::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$ProfileSyncState",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_ProfileSyncState::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$ProfileSyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void ContactsContract_ProfileSyncState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$ProfileSyncState",
			"(V)V");
	}
	
	// Methods
	jbyteArray ContactsContract_ProfileSyncState::get(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)[B",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jbyteArray>();
	}
	QAndroidJniObject ContactsContract_ProfileSyncState::getWithUri(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ContactsContract_ProfileSyncState::newSetOperation(__jni_impl::android::accounts::Account arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"newSetOperation",
			"(Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContactsContract_ProfileSyncState::set(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::accounts::Account arg1, jbyteArray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$ProfileSyncState",
			"set",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_ProfileSyncState : public __jni_impl::android::provider::ContactsContract_ProfileSyncState
	{
	public:
		ContactsContract_ProfileSyncState(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_ProfileSyncState()
		{
			__constructor();
		}
	};
} // namespace android::provider

