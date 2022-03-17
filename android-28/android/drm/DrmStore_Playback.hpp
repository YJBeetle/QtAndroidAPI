#pragma once

#include "./DrmStore_Playback.def.hpp"

namespace android::drm
{
	// Fields
	inline jint DrmStore_Playback::PAUSE()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"PAUSE"
		);
	}
	inline jint DrmStore_Playback::RESUME()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"RESUME"
		);
	}
	inline jint DrmStore_Playback::START()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"START"
		);
	}
	inline jint DrmStore_Playback::STOP()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"STOP"
		);
	}
	
	// Constructors
	inline DrmStore_Playback::DrmStore_Playback()
		: JObject(
			"android.drm.DrmStore$Playback",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

// Base class headers

