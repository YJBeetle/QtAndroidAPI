#pragma once

#include "./PersistentDataBlockManager.def.hpp"

namespace android::service::persistentdata
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean PersistentDataBlockManager::isFactoryResetProtectionActive() const
	{
		return callMethod<jboolean>(
			"isFactoryResetProtectionActive",
			"()Z"
		);
	}
} // namespace android::service::persistentdata

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::persistentdata;
#endif
