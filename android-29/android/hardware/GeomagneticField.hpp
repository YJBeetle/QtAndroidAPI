#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::hardware
{
	class GeomagneticField : public __JniBaseClass
	{
	public:
		// Fields
		
		GeomagneticField(QAndroidJniObject obj);
		// Constructors
		GeomagneticField(jfloat &arg0, jfloat &arg1, jfloat &arg2, jlong &arg3);
		GeomagneticField() = default;
		
		// Methods
		jfloat getDeclination();
		jfloat getFieldStrength();
		jfloat getHorizontalStrength();
		jfloat getInclination();
		jfloat getX();
		jfloat getY();
		jfloat getZ();
	};
} // namespace android::hardware

