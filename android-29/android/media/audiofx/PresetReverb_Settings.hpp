#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::audiofx
{
	class PresetReverb_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort preset();
		
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
	jshort PresetReverb_Settings::preset()
	{
		return __thiz.getField<jshort>(
			"preset"
		);
	}
	
	// Constructors
	void PresetReverb_Settings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.PresetReverb$Settings",
			"()V"
		);
	}
	void PresetReverb_Settings::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.PresetReverb$Settings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PresetReverb_Settings::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.PresetReverb$Settings",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring PresetReverb_Settings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class PresetReverb_Settings : public __jni_impl::android::media::audiofx::PresetReverb_Settings
	{
	public:
		PresetReverb_Settings(QAndroidJniObject obj) { __thiz = obj; }
		PresetReverb_Settings()
		{
			__constructor();
		}
		PresetReverb_Settings(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::audiofx

