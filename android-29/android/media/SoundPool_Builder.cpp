#include "./AudioAttributes.hpp"
#include "./SoundPool.hpp"
#include "./SoundPool_Builder.hpp"

namespace android::media
{
	// Fields
	
	SoundPool_Builder::SoundPool_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SoundPool_Builder::SoundPool_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.media.SoundPool$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SoundPool_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/SoundPool;"
		);
	}
	QAndroidJniObject SoundPool_Builder::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/SoundPool$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SoundPool_Builder::setMaxStreams(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMaxStreams",
			"(I)Landroid/media/SoundPool$Builder;",
			arg0
		);
	}
} // namespace android::media

