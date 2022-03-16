#include "../../JString.hpp"
#include "./ContactsContract_Contacts_Data.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_Contacts_Data::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Data",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

