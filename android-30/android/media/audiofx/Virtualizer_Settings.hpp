#pragma once

#include "../../../JString.hpp"
#include "./Virtualizer_Settings.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jshort Virtualizer_Settings::strength()
	{
		return getField<jshort>(
			"strength"
		);
	}
	
	// Constructors
	inline Virtualizer_Settings::Virtualizer_Settings()
		: JObject(
			"android.media.audiofx.Virtualizer$Settings",
			"()V"
		) {}
	inline Virtualizer_Settings::Virtualizer_Settings(JString arg0)
		: JObject(
			"android.media.audiofx.Virtualizer$Settings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString Virtualizer_Settings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers

