#pragma once

#include "./GnssAutomaticGainControl.def.hpp"
#include "./GnssAutomaticGainControl_Builder.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	inline GnssAutomaticGainControl_Builder::GnssAutomaticGainControl_Builder()
		: JObject(
			"android.location.GnssAutomaticGainControl$Builder",
			"()V"
		) {}
	inline GnssAutomaticGainControl_Builder::GnssAutomaticGainControl_Builder(android::location::GnssAutomaticGainControl arg0)
		: JObject(
			"android.location.GnssAutomaticGainControl$Builder",
			"(Landroid/location/GnssAutomaticGainControl;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::location::GnssAutomaticGainControl GnssAutomaticGainControl_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssAutomaticGainControl;"
		);
	}
	inline android::location::GnssAutomaticGainControl_Builder GnssAutomaticGainControl_Builder::setCarrierFrequencyHz(jlong arg0) const
	{
		return callObjectMethod(
			"setCarrierFrequencyHz",
			"(J)Landroid/location/GnssAutomaticGainControl$Builder;",
			arg0
		);
	}
	inline android::location::GnssAutomaticGainControl_Builder GnssAutomaticGainControl_Builder::setConstellationType(jint arg0) const
	{
		return callObjectMethod(
			"setConstellationType",
			"(I)Landroid/location/GnssAutomaticGainControl$Builder;",
			arg0
		);
	}
	inline android::location::GnssAutomaticGainControl_Builder GnssAutomaticGainControl_Builder::setLevelDb(jdouble arg0) const
	{
		return callObjectMethod(
			"setLevelDb",
			"(D)Landroid/location/GnssAutomaticGainControl$Builder;",
			arg0
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
