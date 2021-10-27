#pragma once

#ifndef ANDROID_LOCATION_GNSSSTATUS
#define ANDROID_LOCATION_GNSSSTATUS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::location
{
	class GnssStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONSTELLATION_BEIDOU();
		static jint CONSTELLATION_GALILEO();
		static jint CONSTELLATION_GLONASS();
		static jint CONSTELLATION_GPS();
		static jint CONSTELLATION_IRNSS();
		static jint CONSTELLATION_QZSS();
		static jint CONSTELLATION_SBAS();
		static jint CONSTELLATION_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jfloat getAzimuthDegrees(jint arg0);
		jfloat getCarrierFrequencyHz(jint arg0);
		jfloat getCn0DbHz(jint arg0);
		jint getConstellationType(jint arg0);
		jfloat getElevationDegrees(jint arg0);
		jint getSatelliteCount();
		jint getSvid(jint arg0);
		jboolean hasAlmanacData(jint arg0);
		jboolean hasCarrierFrequencyHz(jint arg0);
		jboolean hasEphemerisData(jint arg0);
		jboolean usedInFix(jint arg0);
	};
} // namespace __jni_impl::android::location


namespace __jni_impl::android::location
{
	// Fields
	jint GnssStatus::CONSTELLATION_BEIDOU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_BEIDOU"
		);
	}
	jint GnssStatus::CONSTELLATION_GALILEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GALILEO"
		);
	}
	jint GnssStatus::CONSTELLATION_GLONASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GLONASS"
		);
	}
	jint GnssStatus::CONSTELLATION_GPS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GPS"
		);
	}
	jint GnssStatus::CONSTELLATION_IRNSS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_IRNSS"
		);
	}
	jint GnssStatus::CONSTELLATION_QZSS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_QZSS"
		);
	}
	jint GnssStatus::CONSTELLATION_SBAS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_SBAS"
		);
	}
	jint GnssStatus::CONSTELLATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_UNKNOWN"
		);
	}
	
	// Constructors
	void GnssStatus::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssStatus",
			"(V)V");
	}
	
	// Methods
	jfloat GnssStatus::getAzimuthDegrees(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getAzimuthDegrees",
			"(I)F",
			arg0
		);
	}
	jfloat GnssStatus::getCarrierFrequencyHz(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getCarrierFrequencyHz",
			"(I)F",
			arg0
		);
	}
	jfloat GnssStatus::getCn0DbHz(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getCn0DbHz",
			"(I)F",
			arg0
		);
	}
	jint GnssStatus::getConstellationType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getConstellationType",
			"(I)I",
			arg0
		);
	}
	jfloat GnssStatus::getElevationDegrees(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getElevationDegrees",
			"(I)F",
			arg0
		);
	}
	jint GnssStatus::getSatelliteCount()
	{
		return __thiz.callMethod<jint>(
			"getSatelliteCount",
			"()I"
		);
	}
	jint GnssStatus::getSvid(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSvid",
			"(I)I",
			arg0
		);
	}
	jboolean GnssStatus::hasAlmanacData(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAlmanacData",
			"(I)Z",
			arg0
		);
	}
	jboolean GnssStatus::hasCarrierFrequencyHz(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCarrierFrequencyHz",
			"(I)Z",
			arg0
		);
	}
	jboolean GnssStatus::hasEphemerisData(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasEphemerisData",
			"(I)Z",
			arg0
		);
	}
	jboolean GnssStatus::usedInFix(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"usedInFix",
			"(I)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class GnssStatus : public __jni_impl::android::location::GnssStatus
	{
	public:
		GnssStatus(QAndroidJniObject obj) { __thiz = obj; }
		GnssStatus()
		{
			__constructor();
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_GNSSSTATUS

