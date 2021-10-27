#include "./AudioFormat.hpp"
#include "./AudioFormat_Builder.hpp"

namespace android::media
{
	// Fields
	
	AudioFormat_Builder::AudioFormat_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioFormat_Builder::AudioFormat_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioFormat$Builder",
			"()V"
		);
	}
	AudioFormat_Builder::AudioFormat_Builder(android::media::AudioFormat &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioFormat$Builder",
			"(Landroid/media/AudioFormat;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AudioFormat_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioFormat;"
		);
	}
	QAndroidJniObject AudioFormat_Builder::setChannelIndexMask(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setChannelIndexMask",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFormat_Builder::setChannelMask(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setChannelMask",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFormat_Builder::setEncoding(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setEncoding",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFormat_Builder::setSampleRate(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSampleRate",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
} // namespace android::media

