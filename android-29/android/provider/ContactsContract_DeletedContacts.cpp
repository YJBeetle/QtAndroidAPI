#include "../net/Uri.hpp"
#include "./ContactsContract_DeletedContacts.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_DeletedContacts::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DeletedContacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jlong ContactsContract_DeletedContacts::DAYS_KEPT_MILLISECONDS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.provider.ContactsContract$DeletedContacts",
			"DAYS_KEPT_MILLISECONDS"
		);
	}
	
	ContactsContract_DeletedContacts::ContactsContract_DeletedContacts(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

