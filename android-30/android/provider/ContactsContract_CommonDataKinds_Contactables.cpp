#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Contactables.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_CommonDataKinds_Contactables::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Contactables::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_CommonDataKinds_Contactables::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Contactables::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Contactables::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Contactables::VISIBLE_CONTACTS_ONLY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"VISIBLE_CONTACTS_ONLY",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_CommonDataKinds_Contactables::ContactsContract_CommonDataKinds_Contactables(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContactsContract_CommonDataKinds_Contactables::ContactsContract_CommonDataKinds_Contactables()
		: JObject(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

