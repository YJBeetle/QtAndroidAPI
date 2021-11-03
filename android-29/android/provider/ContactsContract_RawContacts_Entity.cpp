#include "./ContactsContract_RawContacts_Entity.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_RawContacts_Entity::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Entity",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_RawContacts_Entity::DATA_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Entity",
			"DATA_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ContactsContract_RawContacts_Entity::ContactsContract_RawContacts_Entity(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

