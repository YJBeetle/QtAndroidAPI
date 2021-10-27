#include "./GpsSatellite.hpp"

namespace android::location
{
	// Fields
	
	GpsSatellite::GpsSatellite(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jfloat GpsSatellite::getAzimuth()
	{
		return __thiz.callMethod<jfloat>(
			"getAzimuth",
			"()F"
		);
	}
	jfloat GpsSatellite::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint GpsSatellite::getPrn()
	{
		return __thiz.callMethod<jint>(
			"getPrn",
			"()I"
		);
	}
	jfloat GpsSatellite::getSnr()
	{
		return __thiz.callMethod<jfloat>(
			"getSnr",
			"()F"
		);
	}
	jboolean GpsSatellite::hasAlmanac()
	{
		return __thiz.callMethod<jboolean>(
			"hasAlmanac",
			"()Z"
		);
	}
	jboolean GpsSatellite::hasEphemeris()
	{
		return __thiz.callMethod<jboolean>(
			"hasEphemeris",
			"()Z"
		);
	}
	jboolean GpsSatellite::usedInFix()
	{
		return __thiz.callMethod<jboolean>(
			"usedInFix",
			"()Z"
		);
	}
} // namespace android::location

