#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Callable.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_CommonDataKinds_Callable::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Callable",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Callable::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Callable",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Callable::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Callable",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_CommonDataKinds_Callable::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Callable",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Callable::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Callable",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Callable::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Callable",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	ContactsContract_CommonDataKinds_Callable::ContactsContract_CommonDataKinds_Callable()
		: JObject(
			"android.provider.ContactsContract$CommonDataKinds$Callable",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

