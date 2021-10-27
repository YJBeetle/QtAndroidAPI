#pragma once

#ifndef ANDROID_HARDWARE_GEOMAGNETICFIELD
#define ANDROID_HARDWARE_GEOMAGNETICFIELD

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware
{
	class GeomagneticField : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3);
		
		// Methods
		jfloat getDeclination();
		jfloat getFieldStrength();
		jfloat getHorizontalStrength();
		jfloat getInclination();
		jfloat getX();
		jfloat getY();
		jfloat getZ();
	};
} // namespace __jni_impl::android::hardware


namespace __jni_impl::android::hardware
{
	// Fields
	
	// Constructors
	void GeomagneticField::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.GeomagneticField",
			"(FFFJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jfloat GeomagneticField::getDeclination()
	{
		return __thiz.callMethod<jfloat>(
			"getDeclination",
			"()F"
		);
	}
	jfloat GeomagneticField::getFieldStrength()
	{
		return __thiz.callMethod<jfloat>(
			"getFieldStrength",
			"()F"
		);
	}
	jfloat GeomagneticField::getHorizontalStrength()
	{
		return __thiz.callMethod<jfloat>(
			"getHorizontalStrength",
			"()F"
		);
	}
	jfloat GeomagneticField::getInclination()
	{
		return __thiz.callMethod<jfloat>(
			"getInclination",
			"()F"
		);
	}
	jfloat GeomagneticField::getX()
	{
		return __thiz.callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat GeomagneticField::getY()
	{
		return __thiz.callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jfloat GeomagneticField::getZ()
	{
		return __thiz.callMethod<jfloat>(
			"getZ",
			"()F"
		);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class GeomagneticField : public __jni_impl::android::hardware::GeomagneticField
	{
	public:
		GeomagneticField(QAndroidJniObject obj) { __thiz = obj; }
		GeomagneticField(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_GEOMAGNETICFIELD

