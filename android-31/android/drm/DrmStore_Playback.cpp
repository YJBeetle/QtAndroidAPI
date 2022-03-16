#include "./DrmStore_Playback.hpp"

namespace android::drm
{
	// Fields
	jint DrmStore_Playback::PAUSE()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"PAUSE"
		);
	}
	jint DrmStore_Playback::RESUME()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"RESUME"
		);
	}
	jint DrmStore_Playback::START()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"START"
		);
	}
	jint DrmStore_Playback::STOP()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"STOP"
		);
	}
	
	// Constructors
	DrmStore_Playback::DrmStore_Playback()
		: JObject(
			"android.drm.DrmStore$Playback",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

