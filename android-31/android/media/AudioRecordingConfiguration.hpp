#pragma once

#include "./AudioDeviceInfo.def.hpp"
#include "./AudioFormat.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./AudioRecordingConfiguration.def.hpp"

namespace android::media
{
	// Fields
	inline JObject AudioRecordingConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioRecordingConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AudioRecordingConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AudioRecordingConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::AudioDeviceInfo AudioRecordingConfiguration::getAudioDevice() const
	{
		return callObjectMethod(
			"getAudioDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	inline jint AudioRecordingConfiguration::getAudioSource() const
	{
		return callMethod<jint>(
			"getAudioSource",
			"()I"
		);
	}
	inline jint AudioRecordingConfiguration::getClientAudioSessionId() const
	{
		return callMethod<jint>(
			"getClientAudioSessionId",
			"()I"
		);
	}
	inline jint AudioRecordingConfiguration::getClientAudioSource() const
	{
		return callMethod<jint>(
			"getClientAudioSource",
			"()I"
		);
	}
	inline JObject AudioRecordingConfiguration::getClientEffects() const
	{
		return callObjectMethod(
			"getClientEffects",
			"()Ljava/util/List;"
		);
	}
	inline android::media::AudioFormat AudioRecordingConfiguration::getClientFormat() const
	{
		return callObjectMethod(
			"getClientFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	inline JObject AudioRecordingConfiguration::getEffects() const
	{
		return callObjectMethod(
			"getEffects",
			"()Ljava/util/List;"
		);
	}
	inline android::media::AudioFormat AudioRecordingConfiguration::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	inline jint AudioRecordingConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AudioRecordingConfiguration::isClientSilenced() const
	{
		return callMethod<jboolean>(
			"isClientSilenced",
			"()Z"
		);
	}
	inline void AudioRecordingConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
