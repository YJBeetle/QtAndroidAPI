#pragma once

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
		static jstring AUTHORITY();
		static QAndroidJniObject AUTHORITY_URI();
		static jstring CALLER_IS_SYNCADAPTER();
		static jstring DEFERRED_SNIPPETING();
		static jstring DEFERRED_SNIPPETING_QUERY();
		static jstring DIRECTORY_PARAM_KEY();
		static jstring LIMIT_PARAM_KEY();
		static jstring PRIMARY_ACCOUNT_NAME();
		static jstring PRIMARY_ACCOUNT_TYPE();
		static jstring REMOVE_DUPLICATE_ENTRIES();
		static jstring STREQUENT_PHONE_ONLY();
		
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
	jstring ContactsContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract::AUTHORITY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract::CALLER_IS_SYNCADAPTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::DEFERRED_SNIPPETING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::DEFERRED_SNIPPETING_QUERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING_QUERY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::DIRECTORY_PARAM_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"DIRECTORY_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::LIMIT_PARAM_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"LIMIT_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::PRIMARY_ACCOUNT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::PRIMARY_ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::REMOVE_DUPLICATE_ENTRIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"REMOVE_DUPLICATE_ENTRIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::STREQUENT_PHONE_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"STREQUENT_PHONE_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract",
			"()V"
		);
	}
	
	// Methods
	jboolean ContactsContract::isProfileId(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.ContactsContract",
			"isProfileId",
			"(J)Z",
			arg0
		);
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

