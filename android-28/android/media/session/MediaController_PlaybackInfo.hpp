#pragma once

#include "../AudioAttributes.def.hpp"
#include "./MediaController_PlaybackInfo.def.hpp"

namespace android::media::session
{
	// Fields
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
} // namespace android::media::session

// Base class headers

