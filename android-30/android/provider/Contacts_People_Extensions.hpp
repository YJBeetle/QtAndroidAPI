#pragma once

#include "../../JString.hpp"
#include "./Contacts_People_Extensions.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts_People_Extensions::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Extensions",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_People_Extensions::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Extensions",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_People_Extensions::PERSON_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Extensions",
			"PERSON_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

