#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Identity : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring IDENTITY();
		static jstring NAMESPACE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Identity::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Identity::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Identity::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Identity::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Identity::IDENTITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"IDENTITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Identity::NAMESPACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"NAMESPACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_Identity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Identity : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_Identity
	{
	public:
		ContactsContract_CommonDataKinds_Identity(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_Identity()
		{
			__constructor();
		}
	};
} // namespace android::provider

