#include "./MediaRecorder.hpp"
#include "./MediaRecorder_AudioEncoder.hpp"

namespace android::media
{
	// Fields
	jint MediaRecorder_AudioEncoder::AAC()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AAC"
		);
	}
	jint MediaRecorder_AudioEncoder::AAC_ELD()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AAC_ELD"
		);
	}
	jint MediaRecorder_AudioEncoder::AMR_NB()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AMR_NB"
		);
	}
	jint MediaRecorder_AudioEncoder::AMR_WB()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AMR_WB"
		);
	}
	jint MediaRecorder_AudioEncoder::DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"DEFAULT"
		);
	}
	jint MediaRecorder_AudioEncoder::HE_AAC()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"HE_AAC"
		);
	}
	jint MediaRecorder_AudioEncoder::OPUS()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"OPUS"
		);
	}
	jint MediaRecorder_AudioEncoder::VORBIS()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"VORBIS"
		);
	}
	
	// QAndroidJniObject forward
	MediaRecorder_AudioEncoder::MediaRecorder_AudioEncoder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

