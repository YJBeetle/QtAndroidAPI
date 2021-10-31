#include "./AudioFormat.hpp"
#include "./AudioFormat_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioFormat_Builder::AudioFormat_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioFormat_Builder::AudioFormat_Builder()
		: __JniBaseClass(
			"android.media.AudioFormat$Builder",
			"()V"
		) {}
	AudioFormat_Builder::AudioFormat_Builder(android::media::AudioFormat arg0)
		: __JniBaseClass(
			"android.media.AudioFormat$Builder",
			"(Landroid/media/AudioFormat;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject AudioFormat_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioFormat;"
		);
	}
	QAndroidJniObject AudioFormat_Builder::setChannelIndexMask(jint arg0)
	{
		return callObjectMethod(
			"setChannelIndexMask",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFormat_Builder::setChannelMask(jint arg0)
	{
		return callObjectMethod(
			"setChannelMask",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFormat_Builder::setEncoding(jint arg0)
	{
		return callObjectMethod(
			"setEncoding",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFormat_Builder::setSampleRate(jint arg0)
	{
		return callObjectMethod(
			"setSampleRate",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
} // namespace android::media

