#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_DisplayPhoto.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri ContactsContract_DisplayPhoto::CONTENT_MAX_DIMENSIONS_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"CONTENT_MAX_DIMENSIONS_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri ContactsContract_DisplayPhoto::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_DisplayPhoto::DISPLAY_MAX_DIM()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"DISPLAY_MAX_DIM",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_DisplayPhoto::THUMBNAIL_MAX_DIM()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"THUMBNAIL_MAX_DIM",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

