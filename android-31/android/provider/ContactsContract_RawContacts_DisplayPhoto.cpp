#include "../../JString.hpp"
#include "./ContactsContract_RawContacts_DisplayPhoto.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_RawContacts_DisplayPhoto::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$DisplayPhoto",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_RawContacts_DisplayPhoto::ContactsContract_RawContacts_DisplayPhoto(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

