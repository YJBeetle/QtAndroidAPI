#pragma once

#include "../../../JString.hpp"
#include "./EnvironmentalReverb_Settings.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jshort EnvironmentalReverb_Settings::decayHFRatio()
	{
		return getField<jshort>(
			"decayHFRatio"
		);
	}
	inline jint EnvironmentalReverb_Settings::decayTime()
	{
		return getField<jint>(
			"decayTime"
		);
	}
	inline jshort EnvironmentalReverb_Settings::density()
	{
		return getField<jshort>(
			"density"
		);
	}
	inline jshort EnvironmentalReverb_Settings::diffusion()
	{
		return getField<jshort>(
			"diffusion"
		);
	}
	inline jint EnvironmentalReverb_Settings::reflectionsDelay()
	{
		return getField<jint>(
			"reflectionsDelay"
		);
	}
	inline jshort EnvironmentalReverb_Settings::reflectionsLevel()
	{
		return getField<jshort>(
			"reflectionsLevel"
		);
	}
	inline jint EnvironmentalReverb_Settings::reverbDelay()
	{
		return getField<jint>(
			"reverbDelay"
		);
	}
	inline jshort EnvironmentalReverb_Settings::reverbLevel()
	{
		return getField<jshort>(
			"reverbLevel"
		);
	}
	inline jshort EnvironmentalReverb_Settings::roomHFLevel()
	{
		return getField<jshort>(
			"roomHFLevel"
		);
	}
	inline jshort EnvironmentalReverb_Settings::roomLevel()
	{
		return getField<jshort>(
			"roomLevel"
		);
	}
	
	// Constructors
	inline EnvironmentalReverb_Settings::EnvironmentalReverb_Settings()
		: JObject(
			"android.media.audiofx.EnvironmentalReverb$Settings",
			"()V"
		) {}
	inline EnvironmentalReverb_Settings::EnvironmentalReverb_Settings(JString arg0)
		: JObject(
			"android.media.audiofx.EnvironmentalReverb$Settings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString EnvironmentalReverb_Settings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::audiofx;
#endif
