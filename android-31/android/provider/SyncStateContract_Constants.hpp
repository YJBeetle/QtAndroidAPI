#pragma once

#include "../../JString.hpp"
#include "./SyncStateContract_Constants.def.hpp"

namespace android::provider
{
	// Fields
	inline JString SyncStateContract_Constants::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.SyncStateContract$Constants",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SyncStateContract_Constants::SyncStateContract_Constants()
		: JObject(
			"android.provider.SyncStateContract$Constants",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers

