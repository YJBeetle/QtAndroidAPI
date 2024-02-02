#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./AudioTimestamp.def.hpp"

namespace android::media
{
	// Fields
	inline JObject AudioTimestamp::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioTimestamp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
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
	inline jint AudioTimestamp::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString AudioTimestamp::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AudioTimestamp::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
