#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./ContactsContract_RawContacts.hpp"

namespace android::provider
{
	// Fields
	jint ContactsContract_RawContacts::AGGREGATION_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_DEFAULT"
		);
	}
	jint ContactsContract_RawContacts::AGGREGATION_MODE_DISABLED()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_DISABLED"
		);
	}
	jint ContactsContract_RawContacts::AGGREGATION_MODE_IMMEDIATE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_IMMEDIATE"
		);
	}
	jint ContactsContract_RawContacts::AGGREGATION_MODE_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_SUSPENDED"
		);
	}
	jstring ContactsContract_RawContacts::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_RawContacts::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract_RawContacts::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	ContactsContract_RawContacts::ContactsContract_RawContacts(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Uri ContactsContract_RawContacts::getContactLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts",
			"getContactLookupUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass ContactsContract_RawContacts::newEntityIterator(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.object()
		);
	}
} // namespace android::provider

