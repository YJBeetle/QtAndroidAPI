#include "./GpsSatellite.hpp"

namespace android::location
{
	// Fields
	
	// QAndroidJniObject forward
	GpsSatellite::GpsSatellite(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jfloat GpsSatellite::getAzimuth() const
	{
		return callMethod<jfloat>(
			"getAzimuth",
			"()F"
		);
	}
	jfloat GpsSatellite::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint GpsSatellite::getPrn() const
	{
		return callMethod<jint>(
			"getPrn",
			"()I"
		);
	}
	jfloat GpsSatellite::getSnr() const
	{
		return callMethod<jfloat>(
			"getSnr",
			"()F"
		);
	}
	jboolean GpsSatellite::hasAlmanac() const
	{
		return callMethod<jboolean>(
			"hasAlmanac",
			"()Z"
		);
	}
	jboolean GpsSatellite::hasEphemeris() const
	{
		return callMethod<jboolean>(
			"hasEphemeris",
			"()Z"
		);
	}
	jboolean GpsSatellite::usedInFix() const
	{
		return callMethod<jboolean>(
			"usedInFix",
			"()Z"
		);
	}
} // namespace android::location

