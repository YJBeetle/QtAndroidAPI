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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
