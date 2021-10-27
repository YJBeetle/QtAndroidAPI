#include "./AudioFormat.hpp"
#include "./AudioPlaybackCaptureConfiguration.hpp"
#include "./AudioRecord.hpp"
#include "./AudioRecord_Builder.hpp"

namespace android::media
{
	// Fields
	
	AudioRecord_Builder::AudioRecord_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioRecord_Builder::AudioRecord_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioRecord$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AudioRecord_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioRecord;"
		);
	}
	QAndroidJniObject AudioRecord_Builder::setAudioFormat(android::media::AudioFormat arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioFormat",
			"(Landroid/media/AudioFormat;)Landroid/media/AudioRecord$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioRecord_Builder::setAudioPlaybackCaptureConfig(android::media::AudioPlaybackCaptureConfiguration arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioPlaybackCaptureConfig",
			"(Landroid/media/AudioPlaybackCaptureConfiguration;)Landroid/media/AudioRecord$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioRecord_Builder::setAudioSource(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioSource",
			"(I)Landroid/media/AudioRecord$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioRecord_Builder::setBufferSizeInBytes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBufferSizeInBytes",
			"(I)Landroid/media/AudioRecord$Builder;",
			arg0
		);
	}
} // namespace android::media

