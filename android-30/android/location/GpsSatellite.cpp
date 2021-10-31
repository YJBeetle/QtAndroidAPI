#include "./GpsSatellite.hpp"

namespace android::location
{
	// Fields
	
	// QJniObject forward
	GpsSatellite::GpsSatellite(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jfloat GpsSatellite::getAzimuth()
	{
		return callMethod<jfloat>(
			"getAzimuth",
			"()F"
		);
	}
	jfloat GpsSatellite::getElevation()
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint GpsSatellite::getPrn()
	{
		return callMethod<jint>(
			"getPrn",
			"()I"
		);
	}
	jfloat GpsSatellite::getSnr()
	{
		return callMethod<jfloat>(
			"getSnr",
			"()F"
		);
	}
	jboolean GpsSatellite::hasAlmanac()
	{
		return callMethod<jboolean>(
			"hasAlmanac",
			"()Z"
		);
	}
	jboolean GpsSatellite::hasEphemeris()
	{
		return callMethod<jboolean>(
			"hasEphemeris",
			"()Z"
		);
	}
	jboolean GpsSatellite::usedInFix()
	{
		return callMethod<jboolean>(
			"usedInFix",
			"()Z"
		);
	}
} // namespace android::location

