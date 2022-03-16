#pragma once

#include "../../../JString.hpp"
#include "./PresetReverb_Settings.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jshort PresetReverb_Settings::preset()
	{
		return getField<jshort>(
			"preset"
		);
	}
	
	// Constructors
	inline PresetReverb_Settings::PresetReverb_Settings()
		: JObject(
			"android.media.audiofx.PresetReverb$Settings",
			"()V"
		) {}
	inline PresetReverb_Settings::PresetReverb_Settings(JString arg0)
		: JObject(
			"android.media.audiofx.PresetReverb$Settings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString PresetReverb_Settings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers

