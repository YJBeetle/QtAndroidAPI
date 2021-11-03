#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_Settings.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_Settings::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Settings::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_Settings::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_Settings::ContactsContract_Settings(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

