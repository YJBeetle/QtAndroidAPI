#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_NOTE
#define ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_NOTE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Note : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static QAndroidJniObject NOTE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_CommonDataKinds_Note::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Note::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Note::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Note::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Note::NOTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"NOTE",
			"Ljava/lang/String;");
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

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_NOTE

