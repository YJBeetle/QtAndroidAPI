#include "./AudioAttributes.hpp"
#include "./AudioAttributes_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioAttributes_Builder::AudioAttributes_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioAttributes_Builder::AudioAttributes_Builder()
		: JObject(
			"android.media.AudioAttributes$Builder",
			"()V"
		) {}
	AudioAttributes_Builder::AudioAttributes_Builder(android::media::AudioAttributes arg0)
		: JObject(
			"android.media.AudioAttributes$Builder",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		) {}
	
	// Methods
	android::media::AudioAttributes AudioAttributes_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioAttributes;"
		);
	}
	android::media::AudioAttributes_Builder AudioAttributes_Builder::setContentType(jint arg0) const
	{
		return callObjectMethod(
			"setContentType",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	android::media::AudioAttributes_Builder AudioAttributes_Builder::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	android::media::AudioAttributes_Builder AudioAttributes_Builder::setLegacyStreamType(jint arg0) const
	{
		return callObjectMethod(
			"setLegacyStreamType",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	android::media::AudioAttributes_Builder AudioAttributes_Builder::setUsage(jint arg0) const
	{
		return callObjectMethod(
			"setUsage",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
} // namespace android::media

