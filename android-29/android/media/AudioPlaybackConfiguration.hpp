#pragma once

#include "./AudioAttributes.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./AudioPlaybackConfiguration.def.hpp"

namespace android::media
{
	// Fields
	inline JObject AudioPlaybackConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioPlaybackConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AudioPlaybackConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AudioPlaybackConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::AudioAttributes AudioPlaybackConfiguration::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	inline jint AudioPlaybackConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void AudioPlaybackConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
