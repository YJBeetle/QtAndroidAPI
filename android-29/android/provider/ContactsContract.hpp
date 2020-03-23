#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT
#define ANDROID_PROVIDER_CONTACTSCONTRACT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AUTHORITY();
		static QAndroidJniObject AUTHORITY_URI();
		static QAndroidJniObject CALLER_IS_SYNCADAPTER();
		static QAndroidJniObject DEFERRED_SNIPPETING();
		static QAndroidJniObject DEFERRED_SNIPPETING_QUERY();
		static QAndroidJniObject DIRECTORY_PARAM_KEY();
		static QAndroidJniObject LIMIT_PARAM_KEY();
		static QAndroidJniObject PRIMARY_ACCOUNT_NAME();
		static QAndroidJniObject PRIMARY_ACCOUNT_TYPE();
		static QAndroidJniObject REMOVE_DUPLICATE_ENTRIES();
		static QAndroidJniObject STREQUENT_PHONE_ONLY();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isProfileId(jlong arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract::AUTHORITY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract::CALLER_IS_SYNCADAPTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract::DEFERRED_SNIPPETING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract::DEFERRED_SNIPPETING_QUERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING_QUERY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract::DIRECTORY_PARAM_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"DIRECTORY_PARAM_KEY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract::LIMIT_PARAM_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"LIMIT_PARAM_KEY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract::PRIMARY_ACCOUNT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract::PRIMARY_ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract::REMOVE_DUPLICATE_ENTRIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"REMOVE_DUPLICATE_ENTRIES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract::STREQUENT_PHONE_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"STREQUENT_PHONE_ONLY",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ContactsContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract",
			"()V");
	}
	
	// Methods
	jboolean ContactsContract::isProfileId(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.ContactsContract",
			"isProfileId",
			"(J)Z",
			arg0);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract : public __jni_impl::android::provider::ContactsContract
	{
	public:
		ContactsContract(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT

