#include "./AudioAttributes.hpp"
#include "./AudioFormat.hpp"
#include "./AudioTrack.hpp"
#include "./AudioTrack_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioTrack_Builder::AudioTrack_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioTrack_Builder::AudioTrack_Builder()
		: __JniBaseClass(
			"android.media.AudioTrack$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::AudioTrack AudioTrack_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioTrack;"
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		return callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/AudioTrack$Builder;",
			arg0.object()
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setAudioFormat(android::media::AudioFormat arg0)
	{
		return callObjectMethod(
			"setAudioFormat",
			"(Landroid/media/AudioFormat;)Landroid/media/AudioTrack$Builder;",
			arg0.object()
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setBufferSizeInBytes(jint arg0)
	{
		return callObjectMethod(
			"setBufferSizeInBytes",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setOffloadedPlayback(jboolean arg0)
	{
		return callObjectMethod(
			"setOffloadedPlayback",
			"(Z)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setPerformanceMode(jint arg0)
	{
		return callObjectMethod(
			"setPerformanceMode",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setSessionId(jint arg0)
	{
		return callObjectMethod(
			"setSessionId",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setTransferMode(jint arg0)
	{
		return callObjectMethod(
			"setTransferMode",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
} // namespace android::media

