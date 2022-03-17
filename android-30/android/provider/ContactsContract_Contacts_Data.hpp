#pragma once

#include "../../JString.hpp"
#include "./ContactsContract_Contacts_Data.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_Contacts_Data::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Data",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

