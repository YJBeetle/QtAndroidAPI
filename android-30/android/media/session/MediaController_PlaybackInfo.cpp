#include "../AudioAttributes.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./MediaController_PlaybackInfo.hpp"

namespace android::media::session
{
	// Fields
	JObject MediaController_PlaybackInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.MediaController$PlaybackInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MediaController_PlaybackInfo::PLAYBACK_TYPE_LOCAL()
	{
		return getStaticField<jint>(
			"android.media.session.MediaController$PlaybackInfo",
			"PLAYBACK_TYPE_LOCAL"
		);
	}
	jint MediaController_PlaybackInfo::PLAYBACK_TYPE_REMOTE()
	{
		return getStaticField<jint>(
			"android.media.session.MediaController$PlaybackInfo",
			"PLAYBACK_TYPE_REMOTE"
		);
	}
	
	// QJniObject forward
	MediaController_PlaybackInfo::MediaController_PlaybackInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MediaController_PlaybackInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::media::AudioAttributes MediaController_PlaybackInfo::getAudioAttributes()
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint MediaController_PlaybackInfo::getCurrentVolume()
	{
		return callMethod<jint>(
			"getCurrentVolume",
			"()I"
		);
	}
	jint MediaController_PlaybackInfo::getMaxVolume()
	{
		return callMethod<jint>(
			"getMaxVolume",
			"()I"
		);
	}
	jint MediaController_PlaybackInfo::getPlaybackType()
	{
		return callMethod<jint>(
			"getPlaybackType",
			"()I"
		);
	}
	jint MediaController_PlaybackInfo::getVolumeControl()
	{
		return callMethod<jint>(
			"getVolumeControl",
			"()I"
		);
	}
	JString MediaController_PlaybackInfo::getVolumeControlId()
	{
		return callObjectMethod(
			"getVolumeControlId",
			"()Ljava/lang/String;"
		);
	}
	JString MediaController_PlaybackInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MediaController_PlaybackInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

