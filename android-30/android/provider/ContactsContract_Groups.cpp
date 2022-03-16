#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_Groups.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_Groups::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_Groups::CONTENT_SUMMARY_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_SUMMARY_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_Groups::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_Groups::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	JObject ContactsContract_Groups::newEntityIterator(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Groups",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.object()
		);
	}
} // namespace android::provider

