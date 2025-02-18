#pragma once

#include "../../JString.hpp"
#include "./ContactsContract_Contacts_Entity.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_Contacts_Entity::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Entity",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Contacts_Entity::DATA_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Entity",
			"DATA_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Contacts_Entity::RAW_CONTACT_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Entity",
			"RAW_CONTACT_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
