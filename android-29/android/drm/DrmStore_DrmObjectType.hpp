#pragma once

#include "./DrmStore_DrmObjectType.def.hpp"

namespace android::drm
{
	// Fields
	inline jint DrmStore_DrmObjectType::CONTENT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"CONTENT"
		);
	}
	inline jint DrmStore_DrmObjectType::RIGHTS_OBJECT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"RIGHTS_OBJECT"
		);
	}
	inline jint DrmStore_DrmObjectType::TRIGGER_OBJECT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"TRIGGER_OBJECT"
		);
	}
	inline jint DrmStore_DrmObjectType::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"UNKNOWN"
		);
	}
	
	// Constructors
	inline DrmStore_DrmObjectType::DrmStore_DrmObjectType()
		: JObject(
			"android.drm.DrmStore$DrmObjectType",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

// Base class headers

