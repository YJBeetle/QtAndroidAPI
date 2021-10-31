#include "./DrmStore_Playback.hpp"

namespace android::drm
{
	// Fields
	jint DrmStore_Playback::PAUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"PAUSE"
		);
	}
	jint DrmStore_Playback::RESUME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"RESUME"
		);
	}
	jint DrmStore_Playback::START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"START"
		);
	}
	jint DrmStore_Playback::STOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$Playback",
			"STOP"
		);
	}
	
	// QAndroidJniObject forward
	DrmStore_Playback::DrmStore_Playback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmStore_Playback::DrmStore_Playback()
		: __JniBaseClass(
			"android.drm.DrmStore$Playback",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

