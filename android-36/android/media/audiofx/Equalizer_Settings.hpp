#pragma once

#include "../../../JShortArray.hpp"
#include "../../../JString.hpp"
#include "./Equalizer_Settings.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline JShortArray Equalizer_Settings::bandLevels()
	{
		return getObjectField(
			"bandLevels",
			"[S"
		);
	}
	inline jshort Equalizer_Settings::curPreset()
	{
		return getField<jshort>(
			"curPreset"
		);
	}
	inline jshort Equalizer_Settings::numBands()
	{
		return getField<jshort>(
			"numBands"
		);
	}
	
	// Constructors
	inline Equalizer_Settings::Equalizer_Settings()
		: JObject(
			"android.media.audiofx.Equalizer$Settings",
			"()V"
		) {}
	inline Equalizer_Settings::Equalizer_Settings(JString arg0)
		: JObject(
			"android.media.audiofx.Equalizer$Settings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString Equalizer_Settings::toString() const
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
