#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Contactables.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri ContactsContract_CommonDataKinds_Contactables::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri ContactsContract_CommonDataKinds_Contactables::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Contactables::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Contactables::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Contactables::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Contactables::VISIBLE_CONTACTS_ONLY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"VISIBLE_CONTACTS_ONLY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ContactsContract_CommonDataKinds_Contactables::ContactsContract_CommonDataKinds_Contactables()
		: JObject(
			"android.provider.ContactsContract$CommonDataKinds$Contactables",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers

