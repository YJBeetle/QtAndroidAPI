#pragma once

#include "./GnssStatus.def.hpp"
#include "./GnssStatus_Builder.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	inline GnssStatus_Builder::GnssStatus_Builder()
		: JObject(
			"android.location.GnssStatus$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::location::GnssStatus_Builder GnssStatus_Builder::addSatellite(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jboolean arg5, jboolean arg6, jboolean arg7, jboolean arg8, jfloat arg9, jboolean arg10, jfloat arg11) const
	{
		return callObjectMethod(
			"addSatellite",
			"(IIFFFZZZZFZF)Landroid/location/GnssStatus$Builder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11
		);
	}
	inline android::location::GnssStatus GnssStatus_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssStatus;"
		);
	}
	inline android::location::GnssStatus_Builder GnssStatus_Builder::clearSatellites() const
	{
		return callObjectMethod(
			"clearSatellites",
			"()Landroid/location/GnssStatus$Builder;"
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
