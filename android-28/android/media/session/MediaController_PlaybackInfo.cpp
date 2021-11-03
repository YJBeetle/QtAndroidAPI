#include "../AudioAttributes.hpp"
#include "./MediaController_PlaybackInfo.hpp"

namespace android::media::session
{
	// Fields
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
	
	// QAndroidJniObject forward
	MediaController_PlaybackInfo::MediaController_PlaybackInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
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
} // namespace android::media::session

