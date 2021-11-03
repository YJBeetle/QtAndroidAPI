#include "./GeomagneticField.hpp"

namespace android::hardware
{
	// Fields
	
	// QJniObject forward
	GeomagneticField::GeomagneticField(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GeomagneticField::GeomagneticField(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3)
		: JObject(
			"android.hardware.GeomagneticField",
			"(FFFJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jfloat GeomagneticField::getDeclination()
	{
		return callMethod<jfloat>(
			"getDeclination",
			"()F"
		);
	}
	jfloat GeomagneticField::getFieldStrength()
	{
		return callMethod<jfloat>(
			"getFieldStrength",
			"()F"
		);
	}
	jfloat GeomagneticField::getHorizontalStrength()
	{
		return callMethod<jfloat>(
			"getHorizontalStrength",
			"()F"
		);
	}
	jfloat GeomagneticField::getInclination()
	{
		return callMethod<jfloat>(
			"getInclination",
			"()F"
		);
	}
	jfloat GeomagneticField::getX()
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat GeomagneticField::getY()
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jfloat GeomagneticField::getZ()
	{
		return callMethod<jfloat>(
			"getZ",
			"()F"
		);
	}
} // namespace android::hardware

