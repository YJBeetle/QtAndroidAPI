#pragma once

#ifndef ANDROID_MEDIA_SOUNDPOOL_BUILDER
#define ANDROID_MEDIA_SOUNDPOOL_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class SoundPool;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}

namespace __jni_impl::android::media
{
	class SoundPool_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0);
		QAndroidJniObject setMaxStreams(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "SoundPool.hpp"
#include "AudioAttributes.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void SoundPool_Builder::__constructor()
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
	QAndroidJniObject SoundPool_Builder::setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0)
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class SoundPool_Builder : public __jni_impl::android::media::SoundPool_Builder
	{
	public:
		SoundPool_Builder(QAndroidJniObject obj) { __thiz = obj; }
		SoundPool_Builder()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_SOUNDPOOL_BUILDER

