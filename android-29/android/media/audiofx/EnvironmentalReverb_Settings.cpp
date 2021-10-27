#include "./EnvironmentalReverb_Settings.hpp"

namespace android::media::audiofx
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
	
	EnvironmentalReverb_Settings::EnvironmentalReverb_Settings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EnvironmentalReverb_Settings::EnvironmentalReverb_Settings()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.EnvironmentalReverb$Settings",
			"()V"
		);
	}
	EnvironmentalReverb_Settings::EnvironmentalReverb_Settings(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.EnvironmentalReverb$Settings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	EnvironmentalReverb_Settings::EnvironmentalReverb_Settings(const QString &arg0)
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
} // namespace android::media::audiofx

