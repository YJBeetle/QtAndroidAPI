#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_BASSBOOST
#define ANDROID_MEDIA_AUDIOFX_BASSBOOST

#include "../../../__JniBaseClass.hpp"
#include "AudioEffect.hpp"

namespace __jni_impl::android::media::audiofx
{
	class BassBoost_Settings;
}

namespace __jni_impl::android::media::audiofx
{
	class BassBoost : public __jni_impl::android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_STRENGTH();
		static jint PARAM_STRENGTH_SUPPORTED();
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject getProperties();
		void setProperties(__jni_impl::android::media::audiofx::BassBoost_Settings arg0);
		jboolean getStrengthSupported();
		void setStrength(jshort arg0);
		jshort getRoundedStrength();
		void setParameterListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::media::audiofx

#include "BassBoost_Settings.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	jint BassBoost::PARAM_STRENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.BassBoost",
			"PARAM_STRENGTH"
		);
	}
	jint BassBoost::PARAM_STRENGTH_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.BassBoost",
			"PARAM_STRENGTH_SUPPORTED"
		);
	}
	
	// Constructors
	void BassBoost::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.BassBoost",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject BassBoost::getProperties()
	{
		return __thiz.callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/BassBoost$Settings;"
		);
	}
	void BassBoost::setProperties(__jni_impl::android::media::audiofx::BassBoost_Settings arg0)
	{
		__thiz.callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/BassBoost$Settings;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean BassBoost::getStrengthSupported()
	{
		return __thiz.callMethod<jboolean>(
			"getStrengthSupported",
			"()Z"
		);
	}
	void BassBoost::setStrength(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setStrength",
			"(S)V",
			arg0
		);
	}
	jshort BassBoost::getRoundedStrength()
	{
		return __thiz.callMethod<jshort>(
			"getRoundedStrength",
			"()S"
		);
	}
	void BassBoost::setParameterListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/BassBoost$OnParameterChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class BassBoost : public __jni_impl::android::media::audiofx::BassBoost
	{
	public:
		BassBoost(QAndroidJniObject obj) { __thiz = obj; }
		BassBoost(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_BASSBOOST

