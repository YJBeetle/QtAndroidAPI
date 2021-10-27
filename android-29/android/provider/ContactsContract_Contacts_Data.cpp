#include "./ContactsContract_Contacts_Data.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_Contacts_Data::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Data",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ContactsContract_Contacts_Data::ContactsContract_Contacts_Data(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

