#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_EQUALIZER
#define ANDROID_MEDIA_AUDIOFX_EQUALIZER

#include "../../../__JniBaseClass.hpp"
#include "AudioEffect.hpp"

namespace __jni_impl::android::media::audiofx
{
	class Equalizer_Settings;
}

namespace __jni_impl::android::media::audiofx
{
	class Equalizer : public __jni_impl::android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_BAND_FREQ_RANGE();
		static jint PARAM_BAND_LEVEL();
		static jint PARAM_CENTER_FREQ();
		static jint PARAM_CURRENT_PRESET();
		static jint PARAM_GET_BAND();
		static jint PARAM_GET_NUM_OF_PRESETS();
		static jint PARAM_GET_PRESET_NAME();
		static jint PARAM_LEVEL_RANGE();
		static jint PARAM_NUM_BANDS();
		static jint PARAM_STRING_SIZE_MAX();
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject getProperties();
		void setProperties(__jni_impl::android::media::audiofx::Equalizer_Settings arg0);
		jshort getNumberOfBands();
		jshortArray getBandLevelRange();
		void setBandLevel(jshort arg0, jshort arg1);
		jshort getBandLevel(jshort arg0);
		jint getCenterFreq(jshort arg0);
		jintArray getBandFreqRange(jshort arg0);
		jshort getCurrentPreset();
		void usePreset(jshort arg0);
		jshort getNumberOfPresets();
		jstring getPresetName(jshort arg0);
		jshort getBand(jint arg0);
		void setParameterListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::media::audiofx

#include "Equalizer_Settings.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	jint Equalizer::PARAM_BAND_FREQ_RANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_BAND_FREQ_RANGE"
		);
	}
	jint Equalizer::PARAM_BAND_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_BAND_LEVEL"
		);
	}
	jint Equalizer::PARAM_CENTER_FREQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_CENTER_FREQ"
		);
	}
	jint Equalizer::PARAM_CURRENT_PRESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_CURRENT_PRESET"
		);
	}
	jint Equalizer::PARAM_GET_BAND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_GET_BAND"
		);
	}
	jint Equalizer::PARAM_GET_NUM_OF_PRESETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_GET_NUM_OF_PRESETS"
		);
	}
	jint Equalizer::PARAM_GET_PRESET_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_GET_PRESET_NAME"
		);
	}
	jint Equalizer::PARAM_LEVEL_RANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_LEVEL_RANGE"
		);
	}
	jint Equalizer::PARAM_NUM_BANDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_NUM_BANDS"
		);
	}
	jint Equalizer::PARAM_STRING_SIZE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_STRING_SIZE_MAX"
		);
	}
	
	// Constructors
	void Equalizer::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Equalizer",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject Equalizer::getProperties()
	{
		return __thiz.callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/Equalizer$Settings;"
		);
	}
	void Equalizer::setProperties(__jni_impl::android::media::audiofx::Equalizer_Settings arg0)
	{
		__thiz.callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/Equalizer$Settings;)V",
			arg0.__jniObject().object()
		);
	}
	jshort Equalizer::getNumberOfBands()
	{
		return __thiz.callMethod<jshort>(
			"getNumberOfBands",
			"()S"
		);
	}
	jshortArray Equalizer::getBandLevelRange()
	{
		return __thiz.callObjectMethod(
			"getBandLevelRange",
			"()[S"
		).object<jshortArray>();
	}
	void Equalizer::setBandLevel(jshort arg0, jshort arg1)
	{
		__thiz.callMethod<void>(
			"setBandLevel",
			"(SS)V",
			arg0,
			arg1
		);
	}
	jshort Equalizer::getBandLevel(jshort arg0)
	{
		return __thiz.callMethod<jshort>(
			"getBandLevel",
			"(S)S",
			arg0
		);
	}
	jint Equalizer::getCenterFreq(jshort arg0)
	{
		return __thiz.callMethod<jint>(
			"getCenterFreq",
			"(S)I",
			arg0
		);
	}
	jintArray Equalizer::getBandFreqRange(jshort arg0)
	{
		return __thiz.callObjectMethod(
			"getBandFreqRange",
			"(S)[I",
			arg0
		).object<jintArray>();
	}
	jshort Equalizer::getCurrentPreset()
	{
		return __thiz.callMethod<jshort>(
			"getCurrentPreset",
			"()S"
		);
	}
	void Equalizer::usePreset(jshort arg0)
	{
		__thiz.callMethod<void>(
			"usePreset",
			"(S)V",
			arg0
		);
	}
	jshort Equalizer::getNumberOfPresets()
	{
		return __thiz.callMethod<jshort>(
			"getNumberOfPresets",
			"()S"
		);
	}
	jstring Equalizer::getPresetName(jshort arg0)
	{
		return __thiz.callObjectMethod(
			"getPresetName",
			"(S)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jshort Equalizer::getBand(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"getBand",
			"(I)S",
			arg0
		);
	}
	void Equalizer::setParameterListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/Equalizer$OnParameterChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class Equalizer : public __jni_impl::android::media::audiofx::Equalizer
	{
	public:
		Equalizer(QAndroidJniObject obj) { __thiz = obj; }
		Equalizer(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_EQUALIZER

