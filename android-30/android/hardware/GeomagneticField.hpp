#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::hardware
{
	class GeomagneticField : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GeomagneticField(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GeomagneticField(QAndroidJniObject obj);
		
		// Constructors
		GeomagneticField(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3);
		
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

