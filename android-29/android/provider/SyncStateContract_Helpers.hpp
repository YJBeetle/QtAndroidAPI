#pragma once

#ifndef ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS
#define ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS

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
	class SyncStateContract_Helpers : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jbyteArray get(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::accounts::Account arg2);
		static QAndroidJniObject getWithUri(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::accounts::Account arg2);
		static QAndroidJniObject insert(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::accounts::Account arg2, jbyteArray arg3);
		static QAndroidJniObject newSetOperation(__jni_impl::android::net::Uri arg0, __jni_impl::android::accounts::Account arg1, jbyteArray arg2);
		static QAndroidJniObject newUpdateOperation(__jni_impl::android::net::Uri arg0, jbyteArray arg1);
		static void set(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::accounts::Account arg2, jbyteArray arg3);
		static void update(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, jbyteArray arg2);
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
	
	// Constructors
	void SyncStateContract_Helpers::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.SyncStateContract$Helpers",
			"()V"
		);
	}
	
	// Methods
	jbyteArray SyncStateContract_Helpers::get(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::accounts::Account arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)[B",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jbyteArray>();
	}
	QAndroidJniObject SyncStateContract_Helpers::getWithUri(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::accounts::Account arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SyncStateContract_Helpers::insert(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::accounts::Account arg2, jbyteArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"insert",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject SyncStateContract_Helpers::newSetOperation(__jni_impl::android::net::Uri arg0, __jni_impl::android::accounts::Account arg1, jbyteArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"newSetOperation",
			"(Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject SyncStateContract_Helpers::newUpdateOperation(__jni_impl::android::net::Uri arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"newUpdateOperation",
			"(Landroid/net/Uri;[B)Landroid/content/ContentProviderOperation;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SyncStateContract_Helpers::set(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::accounts::Account arg2, jbyteArray arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.SyncStateContract$Helpers",
			"set",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void SyncStateContract_Helpers::update(__jni_impl::android::content::ContentProviderClient arg0, __jni_impl::android::net::Uri arg1, jbyteArray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.SyncStateContract$Helpers",
			"update",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class SyncStateContract_Helpers : public __jni_impl::android::provider::SyncStateContract_Helpers
	{
	public:
		SyncStateContract_Helpers(QAndroidJniObject obj) { __thiz = obj; }
		SyncStateContract_Helpers()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS

