#include "../os/Parcel.hpp"
#include "./PlaybackParams.hpp"

namespace android::media
{
	// Fields
	jint PlaybackParams::AUDIO_FALLBACK_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.PlaybackParams",
			"AUDIO_FALLBACK_MODE_DEFAULT"
		);
	}
	jint PlaybackParams::AUDIO_FALLBACK_MODE_FAIL()
	{
		return getStaticField<jint>(
			"android.media.PlaybackParams",
			"AUDIO_FALLBACK_MODE_FAIL"
		);
	}
	jint PlaybackParams::AUDIO_FALLBACK_MODE_MUTE()
	{
		return getStaticField<jint>(
			"android.media.PlaybackParams",
			"AUDIO_FALLBACK_MODE_MUTE"
		);
	}
	JObject PlaybackParams::CREATOR()
	{
		return getStaticObjectField(
			"android.media.PlaybackParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	PlaybackParams::PlaybackParams()
		: JObject(
			"android.media.PlaybackParams",
			"()V"
		) {}
	
	// Methods
	android::media::PlaybackParams PlaybackParams::allowDefaults() const
	{
		return callObjectMethod(
			"allowDefaults",
			"()Landroid/media/PlaybackParams;"
		);
	}
	jint PlaybackParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint PlaybackParams::getAudioFallbackMode() const
	{
		return callMethod<jint>(
			"getAudioFallbackMode",
			"()I"
		);
	}
	jfloat PlaybackParams::getPitch() const
	{
		return callMethod<jfloat>(
			"getPitch",
			"()F"
		);
	}
	jfloat PlaybackParams::getSpeed() const
	{
		return callMethod<jfloat>(
			"getSpeed",
			"()F"
		);
	}
	android::media::PlaybackParams PlaybackParams::setAudioFallbackMode(jint arg0) const
	{
		return callObjectMethod(
			"setAudioFallbackMode",
			"(I)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	android::media::PlaybackParams PlaybackParams::setPitch(jfloat arg0) const
	{
		return callObjectMethod(
			"setPitch",
			"(F)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	android::media::PlaybackParams PlaybackParams::setSpeed(jfloat arg0) const
	{
		return callObjectMethod(
			"setSpeed",
			"(F)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	void PlaybackParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

