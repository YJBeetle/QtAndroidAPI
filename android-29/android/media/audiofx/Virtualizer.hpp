#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_VIRTUALIZER
#define ANDROID_MEDIA_AUDIOFX_VIRTUALIZER

#include "../../../__JniBaseClass.hpp"
#include "AudioEffect.hpp"

namespace __jni_impl::android::media::audiofx
{
	class Virtualizer_Settings;
}

namespace __jni_impl::android::media::audiofx
{
	class Virtualizer : public __jni_impl::android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_STRENGTH();
		static jint PARAM_STRENGTH_SUPPORTED();
		static jint VIRTUALIZATION_MODE_AUTO();
		static jint VIRTUALIZATION_MODE_BINAURAL();
		static jint VIRTUALIZATION_MODE_OFF();
		static jint VIRTUALIZATION_MODE_TRANSAURAL();
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject getProperties();
		void setProperties(__jni_impl::android::media::audiofx::Virtualizer_Settings arg0);
		jboolean canVirtualize(jint arg0, jint arg1);
		jboolean getSpeakerAngles(jint arg0, jint arg1, jintArray arg2);
		jboolean forceVirtualizationMode(jint arg0);
		jint getVirtualizationMode();
		jboolean getStrengthSupported();
		void setStrength(jshort arg0);
		jshort getRoundedStrength();
		void setParameterListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::media::audiofx

#include "Virtualizer_Settings.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	jint Virtualizer::PARAM_STRENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"PARAM_STRENGTH"
		);
	}
	jint Virtualizer::PARAM_STRENGTH_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"PARAM_STRENGTH_SUPPORTED"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_AUTO"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_BINAURAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_BINAURAL"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_OFF"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_TRANSAURAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_TRANSAURAL"
		);
	}
	
	// Constructors
	void Virtualizer::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Virtualizer",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject Virtualizer::getProperties()
	{
		return __thiz.callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/Virtualizer$Settings;"
		);
	}
	void Virtualizer::setProperties(__jni_impl::android::media::audiofx::Virtualizer_Settings arg0)
	{
		__thiz.callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/Virtualizer$Settings;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Virtualizer::canVirtualize(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"canVirtualize",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean Virtualizer::getSpeakerAngles(jint arg0, jint arg1, jintArray arg2)
	{
		return __thiz.callMethod<jboolean>(
			"getSpeakerAngles",
			"(II[I)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Virtualizer::forceVirtualizationMode(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"forceVirtualizationMode",
			"(I)Z",
			arg0
		);
	}
	jint Virtualizer::getVirtualizationMode()
	{
		return __thiz.callMethod<jint>(
			"getVirtualizationMode",
			"()I"
		);
	}
	jboolean Virtualizer::getStrengthSupported()
	{
		return __thiz.callMethod<jboolean>(
			"getStrengthSupported",
			"()Z"
		);
	}
	void Virtualizer::setStrength(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setStrength",
			"(S)V",
			arg0
		);
	}
	jshort Virtualizer::getRoundedStrength()
	{
		return __thiz.callMethod<jshort>(
			"getRoundedStrength",
			"()S"
		);
	}
	void Virtualizer::setParameterListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/Virtualizer$OnParameterChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class Virtualizer : public __jni_impl::android::media::audiofx::Virtualizer
	{
	public:
		Virtualizer(QAndroidJniObject obj) { __thiz = obj; }
		Virtualizer(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_VIRTUALIZER

