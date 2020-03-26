#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_WEBSITE
#define ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_WEBSITE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Website : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jint TYPE_BLOG();
		static jint TYPE_FTP();
		static jint TYPE_HOME();
		static jint TYPE_HOMEPAGE();
		static jint TYPE_OTHER();
		static jint TYPE_PROFILE();
		static jint TYPE_WORK();
		static jstring URL();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Website::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Website::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Website::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Website::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_BLOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_BLOG"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_FTP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_FTP"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_HOMEPAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_HOMEPAGE"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_PROFILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_PROFILE"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_WORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_WORK"
		);
	}
	jstring ContactsContract_CommonDataKinds_Website::URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_Website::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Website : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_Website
	{
	public:
		ContactsContract_CommonDataKinds_Website(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_Website()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_WEBSITE

