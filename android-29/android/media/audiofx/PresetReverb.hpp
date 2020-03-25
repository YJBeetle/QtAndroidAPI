#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_PRESETREVERB
#define ANDROID_MEDIA_AUDIOFX_PRESETREVERB

#include "../../../__JniBaseClass.hpp"
#include "AudioEffect.hpp"

namespace __jni_impl::android::media::audiofx
{
	class PresetReverb_Settings;
}

namespace __jni_impl::android::media::audiofx
{
	class PresetReverb : public __jni_impl::android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_PRESET();
		static jshort PRESET_LARGEHALL();
		static jshort PRESET_LARGEROOM();
		static jshort PRESET_MEDIUMHALL();
		static jshort PRESET_MEDIUMROOM();
		static jshort PRESET_NONE();
		static jshort PRESET_PLATE();
		static jshort PRESET_SMALLROOM();
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject getProperties();
		void setProperties(__jni_impl::android::media::audiofx::PresetReverb_Settings arg0);
		void setParameterListener(__jni_impl::__JniBaseClass arg0);
		void setPreset(jshort arg0);
		jshort getPreset();
	};
} // namespace __jni_impl::android::media::audiofx

#include "PresetReverb_Settings.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	jint PresetReverb::PARAM_PRESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.PresetReverb",
			"PARAM_PRESET");
	}
	jshort PresetReverb::PRESET_LARGEHALL()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_LARGEHALL");
	}
	jshort PresetReverb::PRESET_LARGEROOM()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_LARGEROOM");
	}
	jshort PresetReverb::PRESET_MEDIUMHALL()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_MEDIUMHALL");
	}
	jshort PresetReverb::PRESET_MEDIUMROOM()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_MEDIUMROOM");
	}
	jshort PresetReverb::PRESET_NONE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_NONE");
	}
	jshort PresetReverb::PRESET_PLATE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_PLATE");
	}
	jshort PresetReverb::PRESET_SMALLROOM()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_SMALLROOM");
	}
	
	// Constructors
	void PresetReverb::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.PresetReverb",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject PresetReverb::getProperties()
	{
		return __thiz.callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/PresetReverb$Settings;");
	}
	void PresetReverb::setProperties(__jni_impl::android::media::audiofx::PresetReverb_Settings arg0)
	{
		__thiz.callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/PresetReverb$Settings;)V",
			arg0.__jniObject().object());
	}
	void PresetReverb::setParameterListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/PresetReverb$OnParameterChangeListener;)V",
			arg0.__jniObject().object());
	}
	void PresetReverb::setPreset(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setPreset",
			"(S)V",
			arg0);
	}
	jshort PresetReverb::getPreset()
	{
		return __thiz.callMethod<jshort>(
			"getPreset",
			"()S");
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class PresetReverb : public __jni_impl::android::media::audiofx::PresetReverb
	{
	public:
		PresetReverb(QAndroidJniObject obj) { __thiz = obj; }
		PresetReverb(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_PRESETREVERB

