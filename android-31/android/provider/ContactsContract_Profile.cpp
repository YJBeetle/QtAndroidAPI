#include "../net/Uri.hpp"
#include "./ContactsContract_Profile.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_Profile::CONTENT_RAW_CONTACTS_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_RAW_CONTACTS_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_Profile::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_Profile::CONTENT_VCARD_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_VCARD_URI",
			"Landroid/net/Uri;"
		);
	}
	jlong ContactsContract_Profile::MIN_ID()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Profile",
			"MIN_ID"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_Profile::ContactsContract_Profile(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

