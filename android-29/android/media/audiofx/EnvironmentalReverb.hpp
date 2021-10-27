#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB
#define ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB

#include "../../../__JniBaseClass.hpp"
#include "AudioEffect.hpp"

namespace __jni_impl::android::media::audiofx
{
	class EnvironmentalReverb_Settings;
}

namespace __jni_impl::android::media::audiofx
{
	class EnvironmentalReverb : public __jni_impl::android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_DECAY_HF_RATIO();
		static jint PARAM_DECAY_TIME();
		static jint PARAM_DENSITY();
		static jint PARAM_DIFFUSION();
		static jint PARAM_REFLECTIONS_DELAY();
		static jint PARAM_REFLECTIONS_LEVEL();
		static jint PARAM_REVERB_DELAY();
		static jint PARAM_REVERB_LEVEL();
		static jint PARAM_ROOM_HF_LEVEL();
		static jint PARAM_ROOM_LEVEL();
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jshort getDecayHFRatio();
		jint getDecayTime();
		jshort getDensity();
		jshort getDiffusion();
		QAndroidJniObject getProperties();
		jint getReflectionsDelay();
		jshort getReflectionsLevel();
		jint getReverbDelay();
		jshort getReverbLevel();
		jshort getRoomHFLevel();
		jshort getRoomLevel();
		void setDecayHFRatio(jshort arg0);
		void setDecayTime(jint arg0);
		void setDensity(jshort arg0);
		void setDiffusion(jshort arg0);
		void setParameterListener(__jni_impl::__JniBaseClass arg0);
		void setProperties(__jni_impl::android::media::audiofx::EnvironmentalReverb_Settings arg0);
		void setReflectionsDelay(jint arg0);
		void setReflectionsLevel(jshort arg0);
		void setReverbDelay(jint arg0);
		void setReverbLevel(jshort arg0);
		void setRoomHFLevel(jshort arg0);
		void setRoomLevel(jshort arg0);
	};
} // namespace __jni_impl::android::media::audiofx

#include "EnvironmentalReverb_Settings.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	jint EnvironmentalReverb::PARAM_DECAY_HF_RATIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DECAY_HF_RATIO"
		);
	}
	jint EnvironmentalReverb::PARAM_DECAY_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DECAY_TIME"
		);
	}
	jint EnvironmentalReverb::PARAM_DENSITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DENSITY"
		);
	}
	jint EnvironmentalReverb::PARAM_DIFFUSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DIFFUSION"
		);
	}
	jint EnvironmentalReverb::PARAM_REFLECTIONS_DELAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REFLECTIONS_DELAY"
		);
	}
	jint EnvironmentalReverb::PARAM_REFLECTIONS_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REFLECTIONS_LEVEL"
		);
	}
	jint EnvironmentalReverb::PARAM_REVERB_DELAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REVERB_DELAY"
		);
	}
	jint EnvironmentalReverb::PARAM_REVERB_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REVERB_LEVEL"
		);
	}
	jint EnvironmentalReverb::PARAM_ROOM_HF_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_ROOM_HF_LEVEL"
		);
	}
	jint EnvironmentalReverb::PARAM_ROOM_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_ROOM_LEVEL"
		);
	}
	
	// Constructors
	void EnvironmentalReverb::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.EnvironmentalReverb",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jshort EnvironmentalReverb::getDecayHFRatio()
	{
		return __thiz.callMethod<jshort>(
			"getDecayHFRatio",
			"()S"
		);
	}
	jint EnvironmentalReverb::getDecayTime()
	{
		return __thiz.callMethod<jint>(
			"getDecayTime",
			"()I"
		);
	}
	jshort EnvironmentalReverb::getDensity()
	{
		return __thiz.callMethod<jshort>(
			"getDensity",
			"()S"
		);
	}
	jshort EnvironmentalReverb::getDiffusion()
	{
		return __thiz.callMethod<jshort>(
			"getDiffusion",
			"()S"
		);
	}
	QAndroidJniObject EnvironmentalReverb::getProperties()
	{
		return __thiz.callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/EnvironmentalReverb$Settings;"
		);
	}
	jint EnvironmentalReverb::getReflectionsDelay()
	{
		return __thiz.callMethod<jint>(
			"getReflectionsDelay",
			"()I"
		);
	}
	jshort EnvironmentalReverb::getReflectionsLevel()
	{
		return __thiz.callMethod<jshort>(
			"getReflectionsLevel",
			"()S"
		);
	}
	jint EnvironmentalReverb::getReverbDelay()
	{
		return __thiz.callMethod<jint>(
			"getReverbDelay",
			"()I"
		);
	}
	jshort EnvironmentalReverb::getReverbLevel()
	{
		return __thiz.callMethod<jshort>(
			"getReverbLevel",
			"()S"
		);
	}
	jshort EnvironmentalReverb::getRoomHFLevel()
	{
		return __thiz.callMethod<jshort>(
			"getRoomHFLevel",
			"()S"
		);
	}
	jshort EnvironmentalReverb::getRoomLevel()
	{
		return __thiz.callMethod<jshort>(
			"getRoomLevel",
			"()S"
		);
	}
	void EnvironmentalReverb::setDecayHFRatio(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setDecayHFRatio",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setDecayTime(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDecayTime",
			"(I)V",
			arg0
		);
	}
	void EnvironmentalReverb::setDensity(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setDensity",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setDiffusion(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setDiffusion",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setParameterListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/EnvironmentalReverb$OnParameterChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void EnvironmentalReverb::setProperties(__jni_impl::android::media::audiofx::EnvironmentalReverb_Settings arg0)
	{
		__thiz.callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/EnvironmentalReverb$Settings;)V",
			arg0.__jniObject().object()
		);
	}
	void EnvironmentalReverb::setReflectionsDelay(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReflectionsDelay",
			"(I)V",
			arg0
		);
	}
	void EnvironmentalReverb::setReflectionsLevel(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setReflectionsLevel",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setReverbDelay(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReverbDelay",
			"(I)V",
			arg0
		);
	}
	void EnvironmentalReverb::setReverbLevel(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setReverbLevel",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setRoomHFLevel(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setRoomHFLevel",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setRoomLevel(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setRoomLevel",
			"(S)V",
			arg0
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class EnvironmentalReverb : public __jni_impl::android::media::audiofx::EnvironmentalReverb
	{
	public:
		EnvironmentalReverb(QAndroidJniObject obj) { __thiz = obj; }
		EnvironmentalReverb(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB

