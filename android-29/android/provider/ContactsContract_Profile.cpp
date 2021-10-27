#include "../net/Uri.hpp"
#include "./ContactsContract_Profile.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_Profile::CONTENT_RAW_CONTACTS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_RAW_CONTACTS_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_Profile::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_Profile::CONTENT_VCARD_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_VCARD_URI",
			"Landroid/net/Uri;"
		);
	}
	jlong ContactsContract_Profile::MIN_ID()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.provider.ContactsContract$Profile",
			"MIN_ID"
		);
	}
	
	ContactsContract_Profile::ContactsContract_Profile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

