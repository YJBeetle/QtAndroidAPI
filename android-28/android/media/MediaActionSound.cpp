#include "./MediaActionSound.hpp"

namespace android::media
{
	// Fields
	jint MediaActionSound::FOCUS_COMPLETE()
	{
		return getStaticField<jint>(
			"android.media.MediaActionSound",
			"FOCUS_COMPLETE"
		);
	}
	jint MediaActionSound::SHUTTER_CLICK()
	{
		return getStaticField<jint>(
			"android.media.MediaActionSound",
			"SHUTTER_CLICK"
		);
	}
	jint MediaActionSound::START_VIDEO_RECORDING()
	{
		return getStaticField<jint>(
			"android.media.MediaActionSound",
			"START_VIDEO_RECORDING"
		);
	}
	jint MediaActionSound::STOP_VIDEO_RECORDING()
	{
		return getStaticField<jint>(
			"android.media.MediaActionSound",
			"STOP_VIDEO_RECORDING"
		);
	}
	
	// QAndroidJniObject forward
	MediaActionSound::MediaActionSound(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaActionSound::MediaActionSound()
		: JObject(
			"android.media.MediaActionSound",
			"()V"
		) {}
	
	// Methods
	void MediaActionSound::load(jint arg0) const
	{
		callMethod<void>(
			"load",
			"(I)V",
			arg0
		);
	}
	void MediaActionSound::play(jint arg0) const
	{
		callMethod<void>(
			"play",
			"(I)V",
			arg0
		);
	}
	void MediaActionSound::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::media

