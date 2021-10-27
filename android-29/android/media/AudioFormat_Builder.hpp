#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioFormat;
}

namespace __jni_impl::android::media
{
	class AudioFormat_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::media::AudioFormat arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setChannelIndexMask(jint arg0);
		QAndroidJniObject setChannelMask(jint arg0);
		QAndroidJniObject setEncoding(jint arg0);
		QAndroidJniObject setSampleRate(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "./AudioFormat.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioFormat_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioFormat$Builder",
			"()V"
		);
	}
	void AudioFormat_Builder::__constructor(__jni_impl::android::media::AudioFormat arg0)
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioFormat_Builder : public __jni_impl::android::media::AudioFormat_Builder
	{
	public:
		AudioFormat_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AudioFormat_Builder()
		{
			__constructor();
		}
		AudioFormat_Builder(__jni_impl::android::media::AudioFormat arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

