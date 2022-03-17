#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "./HealthStats.def.hpp"
#include "./SystemHealthManager.def.hpp"

namespace android::os::health
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::health::HealthStats SystemHealthManager::takeMyUidSnapshot() const
	{
		return callObjectMethod(
			"takeMyUidSnapshot",
			"()Landroid/os/health/HealthStats;"
		);
	}
	inline android::os::health::HealthStats SystemHealthManager::takeUidSnapshot(jint arg0) const
	{
		return callObjectMethod(
			"takeUidSnapshot",
			"(I)Landroid/os/health/HealthStats;",
			arg0
		);
	}
	inline JArray SystemHealthManager::takeUidSnapshots(JIntArray arg0) const
	{
		return callObjectMethod(
			"takeUidSnapshots",
			"([I)[Landroid/os/health/HealthStats;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::os::health

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::health;
#endif
