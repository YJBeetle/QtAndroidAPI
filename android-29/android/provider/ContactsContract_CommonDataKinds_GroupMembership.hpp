#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_GROUPMEMBERSHIP
#define ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_GROUPMEMBERSHIP

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_GroupMembership : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static QAndroidJniObject GROUP_ROW_ID();
		static QAndroidJniObject GROUP_SOURCE_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_CommonDataKinds_GroupMembership::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_GroupMembership::GROUP_ROW_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"GROUP_ROW_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_GroupMembership::GROUP_SOURCE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"GROUP_SOURCE_ID",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_GroupMembership::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_GroupMembership : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_GroupMembership
	{
	public:
		ContactsContract_CommonDataKinds_GroupMembership(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_GroupMembership()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_GROUPMEMBERSHIP

