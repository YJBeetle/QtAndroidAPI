#include "./ContactsContract_Contacts_Data.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_Contacts_Data::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Data",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ContactsContract_Contacts_Data::ContactsContract_Contacts_Data(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

