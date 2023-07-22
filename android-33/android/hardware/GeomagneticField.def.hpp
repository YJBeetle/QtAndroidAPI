#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class GeomagneticField : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GeomagneticField(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GeomagneticField(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		GeomagneticField(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3);
		
		// Methods
		jfloat getDeclination() const;
		jfloat getFieldStrength() const;
		jfloat getHorizontalStrength() const;
		jfloat getInclination() const;
		jfloat getX() const;
		jfloat getY() const;
		jfloat getZ() const;
	};
} // namespace android::hardware

