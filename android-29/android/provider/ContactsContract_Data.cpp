#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_Data.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_Data::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_Data::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_Data::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Data::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Data::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Data::VISIBLE_CONTACTS_ONLY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"VISIBLE_CONTACTS_ONLY",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ContactsContract_Data::ContactsContract_Data(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Uri ContactsContract_Data::getContactLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Data",
			"getContactLookupUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::provider

