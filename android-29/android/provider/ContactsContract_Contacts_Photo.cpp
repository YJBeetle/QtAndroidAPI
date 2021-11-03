#include "./ContactsContract_Contacts_Photo.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_Contacts_Photo::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Contacts_Photo::DISPLAY_PHOTO()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"DISPLAY_PHOTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Contacts_Photo::PHOTO()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"PHOTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Contacts_Photo::PHOTO_FILE_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"PHOTO_FILE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ContactsContract_Contacts_Photo::ContactsContract_Contacts_Photo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

