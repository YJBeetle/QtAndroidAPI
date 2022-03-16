#pragma once

#include "../os/Parcel.def.hpp"
#include "./PlaybackParams.def.hpp"

namespace android::media
{
	// Fields
	inline jint PlaybackParams::AUDIO_FALLBACK_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.PlaybackParams",
			"AUDIO_FALLBACK_MODE_DEFAULT"
		);
	}
	inline jint PlaybackParams::AUDIO_FALLBACK_MODE_FAIL()
	{
		return getStaticField<jint>(
			"android.media.PlaybackParams",
			"AUDIO_FALLBACK_MODE_FAIL"
		);
	}
	inline jint PlaybackParams::AUDIO_FALLBACK_MODE_MUTE()
	{
		return getStaticField<jint>(
			"android.media.PlaybackParams",
			"AUDIO_FALLBACK_MODE_MUTE"
		);
	}
	inline JObject PlaybackParams::CREATOR()
	{
		return getStaticObjectField(
			"android.media.PlaybackParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PlaybackParams::PlaybackParams()
		: JObject(
			"android.media.PlaybackParams",
			"()V"
		) {}
	
	// Methods
	inline android::media::PlaybackParams PlaybackParams::allowDefaults() const
	{
		return callObjectMethod(
			"allowDefaults",
			"()Landroid/media/PlaybackParams;"
		);
	}
	inline jint PlaybackParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint PlaybackParams::getAudioFallbackMode() const
	{
		return callMethod<jint>(
			"getAudioFallbackMode",
			"()I"
		);
	}
	inline jfloat PlaybackParams::getPitch() const
	{
		return callMethod<jfloat>(
			"getPitch",
			"()F"
		);
	}
	inline jfloat PlaybackParams::getSpeed() const
	{
		return callMethod<jfloat>(
			"getSpeed",
			"()F"
		);
	}
	inline android::media::PlaybackParams PlaybackParams::setAudioFallbackMode(jint arg0) const
	{
		return callObjectMethod(
			"setAudioFallbackMode",
			"(I)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	inline android::media::PlaybackParams PlaybackParams::setPitch(jfloat arg0) const
	{
		return callObjectMethod(
			"setPitch",
			"(F)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	inline android::media::PlaybackParams PlaybackParams::setSpeed(jfloat arg0) const
	{
		return callObjectMethod(
			"setSpeed",
			"(F)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	inline void PlaybackParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

