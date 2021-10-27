#include "./ContactsContract_RawContacts_Data.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_RawContacts_Data::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Data",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ContactsContract_RawContacts_Data::ContactsContract_RawContacts_Data(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

