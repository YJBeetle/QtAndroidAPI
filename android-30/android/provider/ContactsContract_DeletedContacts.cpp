#include "../net/Uri.hpp"
#include "./ContactsContract_DeletedContacts.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_DeletedContacts::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DeletedContacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jlong ContactsContract_DeletedContacts::DAYS_KEPT_MILLISECONDS()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$DeletedContacts",
			"DAYS_KEPT_MILLISECONDS"
		);
	}
	
	// QJniObject forward
	ContactsContract_DeletedContacts::ContactsContract_DeletedContacts(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

