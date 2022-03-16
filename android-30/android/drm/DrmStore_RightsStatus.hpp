#pragma once

#include "./DrmStore_RightsStatus.def.hpp"

namespace android::drm
{
	// Fields
	inline jint DrmStore_RightsStatus::RIGHTS_EXPIRED()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_EXPIRED"
		);
	}
	inline jint DrmStore_RightsStatus::RIGHTS_INVALID()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_INVALID"
		);
	}
	inline jint DrmStore_RightsStatus::RIGHTS_NOT_ACQUIRED()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_NOT_ACQUIRED"
		);
	}
	inline jint DrmStore_RightsStatus::RIGHTS_VALID()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_VALID"
		);
	}
	
	// Constructors
	inline DrmStore_RightsStatus::DrmStore_RightsStatus()
		: JObject(
			"android.drm.DrmStore$RightsStatus",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

// Base class headers

