#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioAttributes;
}

namespace __jni_impl::android::media
{
	class AudioAttributes_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::media::AudioAttributes arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAllowedCapturePolicy(jint arg0);
		QAndroidJniObject setContentType(jint arg0);
		QAndroidJniObject setFlags(jint arg0);
		QAndroidJniObject setHapticChannelsMuted(jboolean arg0);
		QAndroidJniObject setLegacyStreamType(jint arg0);
		QAndroidJniObject setUsage(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "./AudioAttributes.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioAttributes_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioAttributes$Builder",
			"()V"
		);
	}
	void AudioAttributes_Builder::__constructor(__jni_impl::android::media::AudioAttributes arg0)
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioAttributes_Builder : public __jni_impl::android::media::AudioAttributes_Builder
	{
	public:
		AudioAttributes_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AudioAttributes_Builder()
		{
			__constructor();
		}
		AudioAttributes_Builder(__jni_impl::android::media::AudioAttributes arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

