#include "./MediaRecorder.hpp"
#include "./MediaRecorder_AudioEncoder.hpp"

namespace android::media
{
	// Fields
	jint MediaRecorder_AudioEncoder::AAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AAC"
		);
	}
	jint MediaRecorder_AudioEncoder::AAC_ELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AAC_ELD"
		);
	}
	jint MediaRecorder_AudioEncoder::AMR_NB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AMR_NB"
		);
	}
	jint MediaRecorder_AudioEncoder::AMR_WB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AMR_WB"
		);
	}
	jint MediaRecorder_AudioEncoder::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"DEFAULT"
		);
	}
	jint MediaRecorder_AudioEncoder::HE_AAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"HE_AAC"
		);
	}
	jint MediaRecorder_AudioEncoder::OPUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"OPUS"
		);
	}
	jint MediaRecorder_AudioEncoder::VORBIS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"VORBIS"
		);
	}
	
	MediaRecorder_AudioEncoder::MediaRecorder_AudioEncoder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::media

