#pragma once

#include "./GeomagneticField.def.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	inline GeomagneticField::GeomagneticField(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3)
		: JObject(
			"android.hardware.GeomagneticField",
			"(FFFJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jfloat GeomagneticField::getDeclination() const
	{
		return callMethod<jfloat>(
			"getDeclination",
			"()F"
		);
	}
	inline jfloat GeomagneticField::getFieldStrength() const
	{
		return callMethod<jfloat>(
			"getFieldStrength",
			"()F"
		);
	}
	inline jfloat GeomagneticField::getHorizontalStrength() const
	{
		return callMethod<jfloat>(
			"getHorizontalStrength",
			"()F"
		);
	}
	inline jfloat GeomagneticField::getInclination() const
	{
		return callMethod<jfloat>(
			"getInclination",
			"()F"
		);
	}
	inline jfloat GeomagneticField::getX() const
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	inline jfloat GeomagneticField::getY() const
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	inline jfloat GeomagneticField::getZ() const
	{
		return callMethod<jfloat>(
			"getZ",
			"()F"
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
