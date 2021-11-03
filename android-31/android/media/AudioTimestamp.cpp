#include "./AudioTimestamp.hpp"

namespace android::media
{
	// Fields
	jint AudioTimestamp::TIMEBASE_BOOTTIME()
	{
		return getStaticField<jint>(
			"android.media.AudioTimestamp",
			"TIMEBASE_BOOTTIME"
		);
	}
	jint AudioTimestamp::TIMEBASE_MONOTONIC()
	{
		return getStaticField<jint>(
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
	
	// QJniObject forward
	AudioTimestamp::AudioTimestamp(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioTimestamp::AudioTimestamp()
		: JObject(
			"android.media.AudioTimestamp",
			"()V"
		) {}
	
	// Methods
} // namespace android::media

