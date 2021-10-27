#include "./MediaRecorder.hpp"
#include "./MediaRecorder_AudioSource.hpp"

namespace android::media
{
	// Fields
	jint MediaRecorder_AudioSource::CAMCORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"CAMCORDER"
		);
	}
	jint MediaRecorder_AudioSource::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"DEFAULT"
		);
	}
	jint MediaRecorder_AudioSource::MIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"MIC"
		);
	}
	jint MediaRecorder_AudioSource::REMOTE_SUBMIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"REMOTE_SUBMIX"
		);
	}
	jint MediaRecorder_AudioSource::UNPROCESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"UNPROCESSED"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_CALL"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_COMMUNICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_COMMUNICATION"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_DOWNLINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_DOWNLINK"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_PERFORMANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_PERFORMANCE"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_RECOGNITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_RECOGNITION"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_UPLINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_UPLINK"
		);
	}
	
	MediaRecorder_AudioSource::MediaRecorder_AudioSource(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::media

