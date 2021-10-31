#include "./MediaActionSound.hpp"

namespace android::media
{
	// Fields
	jint MediaActionSound::FOCUS_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaActionSound",
			"FOCUS_COMPLETE"
		);
	}
	jint MediaActionSound::SHUTTER_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaActionSound",
			"SHUTTER_CLICK"
		);
	}
	jint MediaActionSound::START_VIDEO_RECORDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaActionSound",
			"START_VIDEO_RECORDING"
		);
	}
	jint MediaActionSound::STOP_VIDEO_RECORDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaActionSound",
			"STOP_VIDEO_RECORDING"
		);
	}
	
	// QAndroidJniObject forward
	MediaActionSound::MediaActionSound(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaActionSound::MediaActionSound()
		: __JniBaseClass(
			"android.media.MediaActionSound",
			"()V"
		) {}
	
	// Methods
	void MediaActionSound::load(jint arg0)
	{
		callMethod<void>(
			"load",
			"(I)V",
			arg0
		);
	}
	void MediaActionSound::play(jint arg0)
	{
		callMethod<void>(
			"play",
			"(I)V",
			arg0
		);
	}
	void MediaActionSound::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::media

