#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Note : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring NOTE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Note::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Note::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Note::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Note::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Note::NOTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"NOTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_Note::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Note : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_Note
	{
	public:
		ContactsContract_CommonDataKinds_Note(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_Note()
		{
			__constructor();
		}
	};
} // namespace android::provider

