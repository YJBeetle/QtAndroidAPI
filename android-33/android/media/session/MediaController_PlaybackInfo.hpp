#pragma once

#include "../AudioAttributes.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./MediaController_PlaybackInfo.def.hpp"

namespace android::media::session
{
	// Fields
	inline JObject MediaController_PlaybackInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.MediaController$PlaybackInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MediaController_PlaybackInfo::PLAYBACK_TYPE_LOCAL()
	{
		return getStaticField<jint>(
			"android.media.session.MediaController$PlaybackInfo",
			"PLAYBACK_TYPE_LOCAL"
		);
	}
	inline jint MediaController_PlaybackInfo::PLAYBACK_TYPE_REMOTE()
	{
		return getStaticField<jint>(
			"android.media.session.MediaController$PlaybackInfo",
			"PLAYBACK_TYPE_REMOTE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MediaController_PlaybackInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::media::AudioAttributes MediaController_PlaybackInfo::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	inline jint MediaController_PlaybackInfo::getCurrentVolume() const
	{
		return callMethod<jint>(
			"getCurrentVolume",
			"()I"
		);
	}
	inline jint MediaController_PlaybackInfo::getMaxVolume() const
	{
		return callMethod<jint>(
			"getMaxVolume",
			"()I"
		);
	}
	inline jint MediaController_PlaybackInfo::getPlaybackType() const
	{
		return callMethod<jint>(
			"getPlaybackType",
			"()I"
		);
	}
	inline jint MediaController_PlaybackInfo::getVolumeControl() const
	{
		return callMethod<jint>(
			"getVolumeControl",
			"()I"
		);
	}
	inline JString MediaController_PlaybackInfo::getVolumeControlId() const
	{
		return callObjectMethod(
			"getVolumeControlId",
			"()Ljava/lang/String;"
		);
	}
	inline JString MediaController_PlaybackInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaController_PlaybackInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::session;
#endif
