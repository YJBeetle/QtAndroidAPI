#include "../../JString.hpp"
#include "./ContactsContract_Contacts_Photo.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_Contacts_Photo::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Contacts_Photo::DISPLAY_PHOTO()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"DISPLAY_PHOTO",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Contacts_Photo::PHOTO()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"PHOTO",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Contacts_Photo::PHOTO_FILE_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"PHOTO_FILE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

