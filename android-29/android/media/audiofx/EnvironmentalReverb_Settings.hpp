#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB_SETTINGS
#define ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB_SETTINGS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::audiofx
{
	class EnvironmentalReverb_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort decayHFRatio();
		jint decayTime();
		jshort density();
		jshort diffusion();
		jint reflectionsDelay();
		jshort reflectionsLevel();
		jint reverbDelay();
		jshort reverbLevel();
		jshort roomHFLevel();
		jshort roomLevel();
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	jshort EnvironmentalReverb_Settings::decayHFRatio()
	{
		return __thiz.getField<jshort>(
			"decayHFRatio"
		);
	}
	jint EnvironmentalReverb_Settings::decayTime()
	{
		return __thiz.getField<jint>(
			"decayTime"
		);
	}
	jshort EnvironmentalReverb_Settings::density()
	{
		return __thiz.getField<jshort>(
			"density"
		);
	}
	jshort EnvironmentalReverb_Settings::diffusion()
	{
		return __thiz.getField<jshort>(
			"diffusion"
		);
	}
	jint EnvironmentalReverb_Settings::reflectionsDelay()
	{
		return __thiz.getField<jint>(
			"reflectionsDelay"
		);
	}
	jshort EnvironmentalReverb_Settings::reflectionsLevel()
	{
		return __thiz.getField<jshort>(
			"reflectionsLevel"
		);
	}
	jint EnvironmentalReverb_Settings::reverbDelay()
	{
		return __thiz.getField<jint>(
			"reverbDelay"
		);
	}
	jshort EnvironmentalReverb_Settings::reverbLevel()
	{
		return __thiz.getField<jshort>(
			"reverbLevel"
		);
	}
	jshort EnvironmentalReverb_Settings::roomHFLevel()
	{
		return __thiz.getField<jshort>(
			"roomHFLevel"
		);
	}
	jshort EnvironmentalReverb_Settings::roomLevel()
	{
		return __thiz.getField<jshort>(
			"roomLevel"
		);
	}
	
	// Constructors
	void EnvironmentalReverb_Settings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.EnvironmentalReverb$Settings",
			"()V"
		);
	}
	void EnvironmentalReverb_Settings::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.EnvironmentalReverb$Settings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void EnvironmentalReverb_Settings::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.EnvironmentalReverb$Settings",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring EnvironmentalReverb_Settings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class EnvironmentalReverb_Settings : public __jni_impl::android::media::audiofx::EnvironmentalReverb_Settings
	{
	public:
		EnvironmentalReverb_Settings(QAndroidJniObject obj) { __thiz = obj; }
		EnvironmentalReverb_Settings()
		{
			__constructor();
		}
		EnvironmentalReverb_Settings(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB_SETTINGS

