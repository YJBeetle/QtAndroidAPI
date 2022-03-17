#pragma once

#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_RawContacts.def.hpp"

namespace android::provider
{
	// Fields
	inline jint ContactsContract_RawContacts::AGGREGATION_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_DEFAULT"
		);
	}
	inline jint ContactsContract_RawContacts::AGGREGATION_MODE_DISABLED()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_DISABLED"
		);
	}
	inline jint ContactsContract_RawContacts::AGGREGATION_MODE_IMMEDIATE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_IMMEDIATE"
		);
	}
	inline jint ContactsContract_RawContacts::AGGREGATION_MODE_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_SUSPENDED"
		);
	}
	inline JString ContactsContract_RawContacts::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_RawContacts::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_RawContacts::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Uri ContactsContract_RawContacts::getContactLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts",
			"getContactLookupUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject ContactsContract_RawContacts::newEntityIterator(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

