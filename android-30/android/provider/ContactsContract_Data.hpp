#pragma once

#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_Data.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_Data::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_Data::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_Data::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Data::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Data::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Data::VISIBLE_CONTACTS_ONLY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Data",
			"VISIBLE_CONTACTS_ONLY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Uri ContactsContract_Data::getContactLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Data",
			"getContactLookupUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::provider

// Base class headers

