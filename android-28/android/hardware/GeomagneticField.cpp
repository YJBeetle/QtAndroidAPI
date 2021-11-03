#include "./GeomagneticField.hpp"

namespace android::hardware
{
	// Fields
	
	// QAndroidJniObject forward
	GeomagneticField::GeomagneticField(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jfloat GeomagneticField::getDeclination() const
	{
		return callMethod<jfloat>(
			"getDeclination",
			"()F"
		);
	}
	jfloat GeomagneticField::getFieldStrength() const
	{
		return callMethod<jfloat>(
			"getFieldStrength",
			"()F"
		);
	}
	jfloat GeomagneticField::getHorizontalStrength() const
	{
		return callMethod<jfloat>(
			"getHorizontalStrength",
			"()F"
		);
	}
	jfloat GeomagneticField::getInclination() const
	{
		return callMethod<jfloat>(
			"getInclination",
			"()F"
		);
	}
	jfloat GeomagneticField::getX() const
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat GeomagneticField::getY() const
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jfloat GeomagneticField::getZ() const
	{
		return callMethod<jfloat>(
			"getZ",
			"()F"
		);
	}
} // namespace android::hardware

