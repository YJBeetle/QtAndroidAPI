#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_BASSBOOST_SETTINGS
#define ANDROID_MEDIA_AUDIOFX_BASSBOOST_SETTINGS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::audiofx
{
	class BassBoost_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort strength();
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	jshort BassBoost_Settings::strength()
	{
		return __thiz.getField<jshort>(
			"strength");
	}
	
	// Constructors
	void BassBoost_Settings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.BassBoost$Settings",
			"()V");
	}
	void BassBoost_Settings::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.BassBoost$Settings",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject BassBoost_Settings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class BassBoost_Settings : public __jni_impl::android::media::audiofx::BassBoost_Settings
	{
	public:
		BassBoost_Settings(QAndroidJniObject obj) { __thiz = obj; }
		BassBoost_Settings()
		{
			__constructor();
		}
		BassBoost_Settings(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_BASSBOOST_SETTINGS
