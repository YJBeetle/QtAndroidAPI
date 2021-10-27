#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::location
{
	class GpsSatellite : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jfloat getAzimuth();
		jfloat getElevation();
		jint getPrn();
		jfloat getSnr();
		jboolean hasAlmanac();
		jboolean hasEphemeris();
		jboolean usedInFix();
	};
} // namespace __jni_impl::android::location


namespace __jni_impl::android::location
{
	// Fields
	
	// Constructors
	void GpsSatellite::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GpsSatellite",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::location

namespace android::location
{
	class GpsSatellite : public __jni_impl::android::location::GpsSatellite
	{
	public:
		GpsSatellite(QAndroidJniObject obj) { __thiz = obj; }
		GpsSatellite()
		{
			__constructor();
		}
	};
} // namespace android::location

