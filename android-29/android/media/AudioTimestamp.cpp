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
		return __thiz.getField<jlong>(
			"framePosition"
		);
	}
	jlong AudioTimestamp::nanoTime()
	{
		return __thiz.getField<jlong>(
			"nanoTime"
		);
	}
	
	AudioTimestamp::AudioTimestamp(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioTimestamp::AudioTimestamp()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTimestamp",
			"()V"
		);
	}
	
	// Methods
} // namespace android::media

