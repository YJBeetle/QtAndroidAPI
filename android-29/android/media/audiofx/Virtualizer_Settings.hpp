#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_SETTINGS
#define ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_SETTINGS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::audiofx
{
	class Virtualizer_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort strength();
		
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
	jshort Virtualizer_Settings::strength()
	{
		return __thiz.getField<jshort>(
			"strength"
		);
	}
	
	// Constructors
	void Virtualizer_Settings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Virtualizer$Settings",
			"()V"
		);
	}
	void Virtualizer_Settings::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Virtualizer$Settings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Virtualizer_Settings::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Virtualizer$Settings",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring Virtualizer_Settings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class Virtualizer_Settings : public __jni_impl::android::media::audiofx::Virtualizer_Settings
	{
	public:
		Virtualizer_Settings(QAndroidJniObject obj) { __thiz = obj; }
		Virtualizer_Settings()
		{
			__constructor();
		}
		Virtualizer_Settings(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_SETTINGS

