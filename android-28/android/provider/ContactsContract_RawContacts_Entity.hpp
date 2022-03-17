#pragma once

#include "../../JString.hpp"
#include "./ContactsContract_RawContacts_Entity.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_RawContacts_Entity::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Entity",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_RawContacts_Entity::DATA_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Entity",
			"DATA_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

