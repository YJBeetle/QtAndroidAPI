#include "./AudioAttributes.hpp"
#include "./AudioFormat.hpp"
#include "./AudioTrack.hpp"
#include "./AudioTrack_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioTrack_Builder::AudioTrack_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioTrack_Builder::AudioTrack_Builder()
		: JObject(
			"android.media.AudioTrack$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::AudioTrack AudioTrack_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioTrack;"
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		return callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/AudioTrack$Builder;",
			arg0.object()
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setAudioFormat(android::media::AudioFormat arg0) const
	{
		return callObjectMethod(
			"setAudioFormat",
			"(Landroid/media/AudioFormat;)Landroid/media/AudioTrack$Builder;",
			arg0.object()
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setBufferSizeInBytes(jint arg0) const
	{
		return callObjectMethod(
			"setBufferSizeInBytes",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setPerformanceMode(jint arg0) const
	{
		return callObjectMethod(
			"setPerformanceMode",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setSessionId(jint arg0) const
	{
		return callObjectMethod(
			"setSessionId",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
	android::media::AudioTrack_Builder AudioTrack_Builder::setTransferMode(jint arg0) const
	{
		return callObjectMethod(
			"setTransferMode",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0
		);
	}
} // namespace android::media

