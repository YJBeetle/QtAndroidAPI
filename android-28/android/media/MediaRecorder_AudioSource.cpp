#include "./MediaRecorder.hpp"
#include "./MediaRecorder_AudioSource.hpp"

namespace android::media
{
	// Fields
	jint MediaRecorder_AudioSource::CAMCORDER()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"CAMCORDER"
		);
	}
	jint MediaRecorder_AudioSource::DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"DEFAULT"
		);
	}
	jint MediaRecorder_AudioSource::MIC()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"MIC"
		);
	}
	jint MediaRecorder_AudioSource::REMOTE_SUBMIX()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"REMOTE_SUBMIX"
		);
	}
	jint MediaRecorder_AudioSource::UNPROCESSED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"UNPROCESSED"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_CALL()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_CALL"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_COMMUNICATION()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_COMMUNICATION"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_DOWNLINK()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_DOWNLINK"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_RECOGNITION()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_RECOGNITION"
		);
	}
	jint MediaRecorder_AudioSource::VOICE_UPLINK()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_UPLINK"
		);
	}
	
	// QAndroidJniObject forward
	MediaRecorder_AudioSource::MediaRecorder_AudioSource(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

