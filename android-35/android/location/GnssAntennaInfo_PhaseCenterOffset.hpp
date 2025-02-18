#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GnssAntennaInfo_PhaseCenterOffset.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssAntennaInfo_PhaseCenterOffset::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssAntennaInfo$PhaseCenterOffset",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline GnssAntennaInfo_PhaseCenterOffset::GnssAntennaInfo_PhaseCenterOffset(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5)
		: JObject(
			"android.location.GnssAntennaInfo$PhaseCenterOffset",
			"(DDDDDD)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline jint GnssAntennaInfo_PhaseCenterOffset::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean GnssAntennaInfo_PhaseCenterOffset::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble GnssAntennaInfo_PhaseCenterOffset::getXOffsetMm() const
	{
		return callMethod<jdouble>(
			"getXOffsetMm",
			"()D"
		);
	}
	inline jdouble GnssAntennaInfo_PhaseCenterOffset::getXOffsetUncertaintyMm() const
	{
		return callMethod<jdouble>(
			"getXOffsetUncertaintyMm",
			"()D"
		);
	}
	inline jdouble GnssAntennaInfo_PhaseCenterOffset::getYOffsetMm() const
	{
		return callMethod<jdouble>(
			"getYOffsetMm",
			"()D"
		);
	}
	inline jdouble GnssAntennaInfo_PhaseCenterOffset::getYOffsetUncertaintyMm() const
	{
		return callMethod<jdouble>(
			"getYOffsetUncertaintyMm",
			"()D"
		);
	}
	inline jdouble GnssAntennaInfo_PhaseCenterOffset::getZOffsetMm() const
	{
		return callMethod<jdouble>(
			"getZOffsetMm",
			"()D"
		);
	}
	inline jdouble GnssAntennaInfo_PhaseCenterOffset::getZOffsetUncertaintyMm() const
	{
		return callMethod<jdouble>(
			"getZOffsetUncertaintyMm",
			"()D"
		);
	}
	inline jint GnssAntennaInfo_PhaseCenterOffset::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString GnssAntennaInfo_PhaseCenterOffset::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssAntennaInfo_PhaseCenterOffset::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
