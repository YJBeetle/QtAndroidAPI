#include "./MediaRecorder.hpp"
#include "./MediaRecorder_VideoEncoder.hpp"

namespace android::media
{
	// Fields
	jint MediaRecorder_VideoEncoder::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"DEFAULT"
		);
	}
	jint MediaRecorder_VideoEncoder::H263()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"H263"
		);
	}
	jint MediaRecorder_VideoEncoder::H264()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"H264"
		);
	}
	jint MediaRecorder_VideoEncoder::HEVC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"HEVC"
		);
	}
	jint MediaRecorder_VideoEncoder::MPEG_4_SP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"MPEG_4_SP"
		);
	}
	jint MediaRecorder_VideoEncoder::VP8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"VP8"
		);
	}
	
	MediaRecorder_VideoEncoder::MediaRecorder_VideoEncoder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::media

