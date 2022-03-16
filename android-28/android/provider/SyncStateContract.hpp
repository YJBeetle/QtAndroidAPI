#pragma once

#include "./SyncStateContract.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline SyncStateContract::SyncStateContract()
		: JObject(
			"android.provider.SyncStateContract",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers

