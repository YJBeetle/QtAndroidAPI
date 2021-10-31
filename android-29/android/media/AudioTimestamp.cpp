#include "./AudioTimestamp.hpp"

namespace android::media
{
	// Fields
	jint AudioTimestamp::TIMEBASE_BOOTTIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTimestamp",
			"TIMEBASE_BOOTTIME"
		);
	}
	jint AudioTimestamp::TIMEBASE_MONOTONIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTimestamp",
			"TIMEBASE_MONOTONIC"
		);
	}
	jlong AudioTimestamp::framePosition()
	{
		return getField<jlong>(
			"framePosition"
		);
	}
	jlong AudioTimestamp::nanoTime()
	{
		return getField<jlong>(
			"nanoTime"
		);
	}
	
	// QAndroidJniObject forward
	AudioTimestamp::AudioTimestamp(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioTimestamp::AudioTimestamp()
		: __JniBaseClass(
			"android.media.AudioTimestamp",
			"()V"
		) {}
	
	// Methods
} // namespace android::media

