#pragma once

#ifndef ANDROID_MEDIA_AUDIOTRACK_BUILDER
#define ANDROID_MEDIA_AUDIOTRACK_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioTrack;
}
namespace __jni_impl::android::media
{
	class AudioFormat;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}

namespace __jni_impl::android::media
{
	class AudioTrack_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBufferSizeInBytes(jint arg0);
		QAndroidJniObject setAudioFormat(__jni_impl::android::media::AudioFormat arg0);
		QAndroidJniObject setTransferMode(jint arg0);
		QAndroidJniObject setSessionId(jint arg0);
		QAndroidJniObject setPerformanceMode(jint arg0);
		QAndroidJniObject setOffloadedPlayback(jboolean arg0);
		QAndroidJniObject setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0);
	};
} // namespace __jni_impl::android::media

#include "AudioTrack.hpp"
#include "AudioFormat.hpp"
#include "AudioAttributes.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioTrack_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTrack$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject AudioTrack_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioTrack;");
	}
	QAndroidJniObject AudioTrack_Builder::setBufferSizeInBytes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBufferSizeInBytes",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0);
	}
	QAndroidJniObject AudioTrack_Builder::setAudioFormat(__jni_impl::android::media::AudioFormat arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioFormat",
			"(Landroid/media/AudioFormat;)Landroid/media/AudioTrack$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AudioTrack_Builder::setTransferMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTransferMode",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0);
	}
	QAndroidJniObject AudioTrack_Builder::setSessionId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSessionId",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0);
	}
	QAndroidJniObject AudioTrack_Builder::setPerformanceMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPerformanceMode",
			"(I)Landroid/media/AudioTrack$Builder;",
			arg0);
	}
	QAndroidJniObject AudioTrack_Builder::setOffloadedPlayback(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setOffloadedPlayback",
			"(Z)Landroid/media/AudioTrack$Builder;",
			arg0);
	}
	QAndroidJniObject AudioTrack_Builder::setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/AudioTrack$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioTrack_Builder : public __jni_impl::android::media::AudioTrack_Builder
	{
	public:
		AudioTrack_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AudioTrack_Builder()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOTRACK_BUILDER

