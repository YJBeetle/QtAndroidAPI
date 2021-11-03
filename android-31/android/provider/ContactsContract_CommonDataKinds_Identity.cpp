#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Identity.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_CommonDataKinds_Identity::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Identity::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Identity::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Identity::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Identity::IDENTITY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"IDENTITY",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Identity::NAMESPACE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Identity",
			"NAMESPACE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ContactsContract_CommonDataKinds_Identity::ContactsContract_CommonDataKinds_Identity(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

