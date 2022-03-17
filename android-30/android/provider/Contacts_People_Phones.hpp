#pragma once

#include "../../JString.hpp"
#include "./Contacts_People_Phones.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts_People_Phones::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Phones",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_People_Phones::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Phones",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

