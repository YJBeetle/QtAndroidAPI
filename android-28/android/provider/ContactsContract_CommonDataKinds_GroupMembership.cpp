#include "./ContactsContract_CommonDataKinds_GroupMembership.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_GroupMembership::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::GROUP_ROW_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"GROUP_ROW_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_GroupMembership::GROUP_SOURCE_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"GROUP_SOURCE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ContactsContract_CommonDataKinds_GroupMembership::ContactsContract_CommonDataKinds_GroupMembership(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

