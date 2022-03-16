#include "../../JString.hpp"
#include "./ContactsContract_RawContacts_Data.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_RawContacts_Data::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Data",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

