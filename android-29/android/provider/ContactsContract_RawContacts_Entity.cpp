#include "../../JString.hpp"
#include "./ContactsContract_RawContacts_Entity.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_RawContacts_Entity::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Entity",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_RawContacts_Entity::DATA_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Entity",
			"DATA_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ContactsContract_RawContacts_Entity::ContactsContract_RawContacts_Entity(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

