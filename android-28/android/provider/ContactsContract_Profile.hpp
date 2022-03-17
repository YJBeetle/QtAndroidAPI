#pragma once

#include "../net/Uri.def.hpp"
#include "./ContactsContract_Profile.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri ContactsContract_Profile::CONTENT_RAW_CONTACTS_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_RAW_CONTACTS_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri ContactsContract_Profile::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri ContactsContract_Profile::CONTENT_VCARD_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_VCARD_URI",
			"Landroid/net/Uri;"
		);
	}
	inline jlong ContactsContract_Profile::MIN_ID()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Profile",
			"MIN_ID"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

