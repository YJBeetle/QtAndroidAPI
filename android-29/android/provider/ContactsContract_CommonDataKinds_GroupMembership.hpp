#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_GroupMembership : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring GROUP_ROW_ID();
		static jstring GROUP_SOURCE_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_GroupMembership::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::GROUP_ROW_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"GROUP_ROW_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::GROUP_SOURCE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"GROUP_SOURCE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
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

