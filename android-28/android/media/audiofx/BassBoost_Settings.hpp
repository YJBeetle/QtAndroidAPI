#pragma once

#include "../../../JString.hpp"
#include "./BassBoost_Settings.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jshort BassBoost_Settings::strength()
	{
		return getField<jshort>(
			"strength"
		);
	}
	
	// Constructors
	inline BassBoost_Settings::BassBoost_Settings()
		: JObject(
			"android.media.audiofx.BassBoost$Settings",
			"()V"
		) {}
	inline BassBoost_Settings::BassBoost_Settings(JString arg0)
		: JObject(
			"android.media.audiofx.BassBoost$Settings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString BassBoost_Settings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers

