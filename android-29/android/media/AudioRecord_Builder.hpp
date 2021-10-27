#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioFormat;
}
namespace __jni_impl::android::media
{
	class AudioPlaybackCaptureConfiguration;
}
namespace __jni_impl::android::media
{
	class AudioRecord;
}

namespace __jni_impl::android::media
{
	class AudioRecord_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAudioFormat(__jni_impl::android::media::AudioFormat arg0);
		QAndroidJniObject setAudioPlaybackCaptureConfig(__jni_impl::android::media::AudioPlaybackCaptureConfiguration arg0);
		QAndroidJniObject setAudioSource(jint arg0);
		QAndroidJniObject setBufferSizeInBytes(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "AudioFormat.hpp"
#include "AudioPlaybackCaptureConfiguration.hpp"
#include "AudioRecord.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioRecord_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioRecord$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AudioRecord_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioRecord;"
		);
	}
	QAndroidJniObject AudioRecord_Builder::setAudioFormat(__jni_impl::android::media::AudioFormat arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioFormat",
			"(Landroid/media/AudioFormat;)Landroid/media/AudioRecord$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioRecord_Builder::setAudioPlaybackCaptureConfig(__jni_impl::android::media::AudioPlaybackCaptureConfiguration arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioPlaybackCaptureConfig",
			"(Landroid/media/AudioPlaybackCaptureConfiguration;)Landroid/media/AudioRecord$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioRecord_Builder::setAudioSource(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioSource",
			"(I)Landroid/media/AudioRecord$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioRecord_Builder::setBufferSizeInBytes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBufferSizeInBytes",
			"(I)Landroid/media/AudioRecord$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioRecord_Builder : public __jni_impl::android::media::AudioRecord_Builder
	{
	public:
		AudioRecord_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AudioRecord_Builder()
		{
			__constructor();
		}
	};
} // namespace android::media

