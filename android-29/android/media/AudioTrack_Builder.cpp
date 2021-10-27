#include "./AudioAttributes.hpp"
#include "./AudioFormat.hpp"
#include "./AudioTrack.hpp"
#include "./AudioTrack_Builder.hpp"

namespace android::media
{
	// Fields
	
	AudioTrack_Builder::AudioTrack_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioTrack_Builder::AudioTrack_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTrack$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AudioTrack_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioTrack;"
		);
	}
	QAndroidJniObject AudioTrack_Builder::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/AudioTrack$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioTrack_Builder::setAudioFormat(android::media::AudioFormat arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioFormat",
			"(Landroid/media/AudioFormat;)Landroid/media/AudioTrack$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioTrack_Builder::setBufferSizeInBytes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBufferSizeInBytes",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioTrack_Builder::setOffloadedPlayback(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setOffloadedPlayback",
			"(Z)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioTrack_Builder::setPerformanceMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPerformanceMode",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioTrack_Builder::setSessionId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSessionId",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioTrack_Builder::setTransferMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTransferMode",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
} // namespace android::media

