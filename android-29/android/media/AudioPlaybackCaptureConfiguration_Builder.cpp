#include "./AudioPlaybackCaptureConfiguration.hpp"
#include "./projection/MediaProjection.hpp"
#include "./AudioPlaybackCaptureConfiguration_Builder.hpp"

namespace android::media
{
	// Fields
	
	AudioPlaybackCaptureConfiguration_Builder::AudioPlaybackCaptureConfiguration_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioPlaybackCaptureConfiguration_Builder::AudioPlaybackCaptureConfiguration_Builder(android::media::projection::MediaProjection &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioPlaybackCaptureConfiguration$Builder",
			"(Landroid/media/projection/MediaProjection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AudioPlaybackCaptureConfiguration_Builder::addMatchingUid(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addMatchingUid",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPlaybackCaptureConfiguration_Builder::addMatchingUsage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addMatchingUsage",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPlaybackCaptureConfiguration_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioPlaybackCaptureConfiguration;"
		);
	}
	QAndroidJniObject AudioPlaybackCaptureConfiguration_Builder::excludeUid(jint arg0)
	{
		return __thiz.callObjectMethod(
			"excludeUid",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPlaybackCaptureConfiguration_Builder::excludeUsage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"excludeUsage",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
} // namespace android::media

