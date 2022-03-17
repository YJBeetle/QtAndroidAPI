#pragma once

#include "./AudioTimestamp.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioTimestamp::TIMEBASE_BOOTTIME()
	{
		return getStaticField<jint>(
			"android.media.AudioTimestamp",
			"TIMEBASE_BOOTTIME"
		);
	}
	inline jint AudioTimestamp::TIMEBASE_MONOTONIC()
	{
		return getStaticField<jint>(
			"android.media.AudioTimestamp",
			"TIMEBASE_MONOTONIC"
		);
	}
	inline jlong AudioTimestamp::framePosition()
	{
		return getField<jlong>(
			"framePosition"
		);
	}
	inline jlong AudioTimestamp::nanoTime()
	{
		return getField<jlong>(
			"nanoTime"
		);
	}
	
	// Constructors
	inline AudioTimestamp::AudioTimestamp()
		: JObject(
			"android.media.AudioTimestamp",
			"()V"
		) {}
	
	// Methods
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
