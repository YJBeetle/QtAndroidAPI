#include "./EnvironmentalReverb_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	jshort EnvironmentalReverb_Settings::decayHFRatio()
	{
		return getField<jshort>(
			"decayHFRatio"
		);
	}
	jint EnvironmentalReverb_Settings::decayTime()
	{
		return getField<jint>(
			"decayTime"
		);
	}
	jshort EnvironmentalReverb_Settings::density()
	{
		return getField<jshort>(
			"density"
		);
	}
	jshort EnvironmentalReverb_Settings::diffusion()
	{
		return getField<jshort>(
			"diffusion"
		);
	}
	jint EnvironmentalReverb_Settings::reflectionsDelay()
	{
		return getField<jint>(
			"reflectionsDelay"
		);
	}
	jshort EnvironmentalReverb_Settings::reflectionsLevel()
	{
		return getField<jshort>(
			"reflectionsLevel"
		);
	}
	jint EnvironmentalReverb_Settings::reverbDelay()
	{
		return getField<jint>(
			"reverbDelay"
		);
	}
	jshort EnvironmentalReverb_Settings::reverbLevel()
	{
		return getField<jshort>(
			"reverbLevel"
		);
	}
	jshort EnvironmentalReverb_Settings::roomHFLevel()
	{
		return getField<jshort>(
			"roomHFLevel"
		);
	}
	jshort EnvironmentalReverb_Settings::roomLevel()
	{
		return getField<jshort>(
			"roomLevel"
		);
	}
	
	// QJniObject forward
	EnvironmentalReverb_Settings::EnvironmentalReverb_Settings(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EnvironmentalReverb_Settings::EnvironmentalReverb_Settings()
		: __JniBaseClass(
			"android.media.audiofx.EnvironmentalReverb$Settings",
			"()V"
		) {}
	EnvironmentalReverb_Settings::EnvironmentalReverb_Settings(jstring arg0)
		: __JniBaseClass(
			"android.media.audiofx.EnvironmentalReverb$Settings",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring EnvironmentalReverb_Settings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

