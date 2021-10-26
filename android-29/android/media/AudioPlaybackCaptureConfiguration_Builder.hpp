#pragma once

#ifndef ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION_BUILDER
#define ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::projection
{
	class MediaProjection;
}
namespace __jni_impl::android::media
{
	class AudioPlaybackCaptureConfiguration;
}

namespace __jni_impl::android::media
{
	class AudioPlaybackCaptureConfiguration_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::media::projection::MediaProjection arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addMatchingUsage(jint arg0);
		QAndroidJniObject addMatchingUid(jint arg0);
		QAndroidJniObject excludeUsage(jint arg0);
		QAndroidJniObject excludeUid(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "projection/MediaProjection.hpp"
#include "AudioPlaybackCaptureConfiguration.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioPlaybackCaptureConfiguration_Builder::__constructor(__jni_impl::android::media::projection::MediaProjection arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioPlaybackCaptureConfiguration$Builder",
			"(Landroid/media/projection/MediaProjection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AudioPlaybackCaptureConfiguration_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioPlaybackCaptureConfiguration;"
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
	QAndroidJniObject AudioPlaybackCaptureConfiguration_Builder::addMatchingUid(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addMatchingUid",
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
	QAndroidJniObject AudioPlaybackCaptureConfiguration_Builder::excludeUid(jint arg0)
	{
		return __thiz.callObjectMethod(
			"excludeUid",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioPlaybackCaptureConfiguration_Builder : public __jni_impl::android::media::AudioPlaybackCaptureConfiguration_Builder
	{
	public:
		AudioPlaybackCaptureConfiguration_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AudioPlaybackCaptureConfiguration_Builder(__jni_impl::android::media::projection::MediaProjection arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION_BUILDER

