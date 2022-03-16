#pragma once

#include "../net/Uri.def.hpp"
#include "./ContactsContract_DeletedContacts.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri ContactsContract_DeletedContacts::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DeletedContacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline jlong ContactsContract_DeletedContacts::DAYS_KEPT_MILLISECONDS()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$DeletedContacts",
			"DAYS_KEPT_MILLISECONDS"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

