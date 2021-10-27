#include "./PresetReverb_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	jshort PresetReverb_Settings::preset()
	{
		return __thiz.getField<jshort>(
			"preset"
		);
	}
	
	PresetReverb_Settings::PresetReverb_Settings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PresetReverb_Settings::PresetReverb_Settings()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.PresetReverb$Settings",
			"()V"
		);
	}
	PresetReverb_Settings::PresetReverb_Settings(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.PresetReverb$Settings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	PresetReverb_Settings::PresetReverb_Settings(const QString &arg0)
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
} // namespace android::media::audiofx

