#include "./ContactsContract_RawContacts_Data.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_RawContacts_Data::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Data",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ContactsContract_RawContacts_Data::ContactsContract_RawContacts_Data(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

