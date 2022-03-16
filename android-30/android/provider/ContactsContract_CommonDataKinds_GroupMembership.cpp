#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_GroupMembership.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_CommonDataKinds_GroupMembership::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_GroupMembership::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_GroupMembership::GROUP_ROW_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"GROUP_ROW_ID",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_GroupMembership::GROUP_SOURCE_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$GroupMembership",
			"GROUP_SOURCE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

