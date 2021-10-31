#include "./MediaRecorder.hpp"
#include "./MediaRecorder_VideoEncoder.hpp"

namespace android::media
{
	// Fields
	jint MediaRecorder_VideoEncoder::DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"DEFAULT"
		);
	}
	jint MediaRecorder_VideoEncoder::H263()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"H263"
		);
	}
	jint MediaRecorder_VideoEncoder::H264()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"H264"
		);
	}
	jint MediaRecorder_VideoEncoder::HEVC()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"HEVC"
		);
	}
	jint MediaRecorder_VideoEncoder::MPEG_4_SP()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"MPEG_4_SP"
		);
	}
	jint MediaRecorder_VideoEncoder::VP8()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"VP8"
		);
	}
	
	// QAndroidJniObject forward
	MediaRecorder_VideoEncoder::MediaRecorder_VideoEncoder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

