#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_EQUALIZER_SETTINGS
#define ANDROID_MEDIA_AUDIOFX_EQUALIZER_SETTINGS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::audiofx
{
	class Equalizer_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshortArray bandLevels();
		jshort curPreset();
		jshort numBands();
		
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
	jshortArray Equalizer_Settings::bandLevels()
	{
		return __thiz.getObjectField(
			"bandLevels",
			"[S"
		).object<jshortArray>();
	}
	jshort Equalizer_Settings::curPreset()
	{
		return __thiz.getField<jshort>(
			"curPreset"
		);
	}
	jshort Equalizer_Settings::numBands()
	{
		return __thiz.getField<jshort>(
			"numBands"
		);
	}
	
	// Constructors
	void Equalizer_Settings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Equalizer$Settings",
			"()V"
		);
	}
	void Equalizer_Settings::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Equalizer$Settings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Equalizer_Settings::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Equalizer$Settings",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring Equalizer_Settings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class Equalizer_Settings : public __jni_impl::android::media::audiofx::Equalizer_Settings
	{
	public:
		Equalizer_Settings(QAndroidJniObject obj) { __thiz = obj; }
		Equalizer_Settings()
		{
			__constructor();
		}
		Equalizer_Settings(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_EQUALIZER_SETTINGS

