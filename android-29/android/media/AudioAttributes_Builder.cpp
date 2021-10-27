#include "./AudioAttributes.hpp"
#include "./AudioAttributes_Builder.hpp"

namespace android::media
{
	// Fields
	
	AudioAttributes_Builder::AudioAttributes_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioAttributes_Builder::AudioAttributes_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioAttributes$Builder",
			"()V"
		);
	}
	AudioAttributes_Builder::AudioAttributes_Builder(android::media::AudioAttributes &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioAttributes$Builder",
			"(Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AudioAttributes_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioAttributes;"
		);
	}
	QAndroidJniObject AudioAttributes_Builder::setAllowedCapturePolicy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowedCapturePolicy",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioAttributes_Builder::setContentType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setContentType",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioAttributes_Builder::setFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFlags",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioAttributes_Builder::setHapticChannelsMuted(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHapticChannelsMuted",
			"(Z)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioAttributes_Builder::setLegacyStreamType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setLegacyStreamType",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioAttributes_Builder::setUsage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setUsage",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
} // namespace android::media

