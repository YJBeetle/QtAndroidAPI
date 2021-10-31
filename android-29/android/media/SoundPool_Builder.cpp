#include "./AudioAttributes.hpp"
#include "./SoundPool.hpp"
#include "./SoundPool_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	SoundPool_Builder::SoundPool_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SoundPool_Builder::SoundPool_Builder()
		: __JniBaseClass(
			"android.media.SoundPool$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject SoundPool_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/SoundPool;"
		);
	}
	QAndroidJniObject SoundPool_Builder::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		return callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/SoundPool$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject SoundPool_Builder::setMaxStreams(jint arg0)
	{
		return callObjectMethod(
			"setMaxStreams",
			"(I)Landroid/media/SoundPool$Builder;",
			arg0
		);
	}
} // namespace android::media

