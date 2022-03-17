#pragma once

#include "./MediaActionSound.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaActionSound::FOCUS_COMPLETE()
	{
		return getStaticField<jint>(
			"android.media.MediaActionSound",
			"FOCUS_COMPLETE"
		);
	}
	inline jint MediaActionSound::SHUTTER_CLICK()
	{
		return getStaticField<jint>(
			"android.media.MediaActionSound",
			"SHUTTER_CLICK"
		);
	}
	inline jint MediaActionSound::START_VIDEO_RECORDING()
	{
		return getStaticField<jint>(
			"android.media.MediaActionSound",
			"START_VIDEO_RECORDING"
		);
	}
	inline jint MediaActionSound::STOP_VIDEO_RECORDING()
	{
		return getStaticField<jint>(
			"android.media.MediaActionSound",
			"STOP_VIDEO_RECORDING"
		);
	}
	
	// Constructors
	inline MediaActionSound::MediaActionSound()
		: JObject(
			"android.media.MediaActionSound",
			"()V"
		) {}
	
	// Methods
	inline void MediaActionSound::load(jint arg0) const
	{
		callMethod<void>(
			"load",
			"(I)V",
			arg0
		);
	}
	inline void MediaActionSound::play(jint arg0) const
	{
		callMethod<void>(
			"play",
			"(I)V",
			arg0
		);
	}
	inline void MediaActionSound::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
