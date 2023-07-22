#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GnssAutomaticGainControl.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssAutomaticGainControl::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssAutomaticGainControl",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssAutomaticGainControl::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean GnssAutomaticGainControl::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong GnssAutomaticGainControl::getCarrierFrequencyHz() const
	{
		return callMethod<jlong>(
			"getCarrierFrequencyHz",
			"()J"
		);
	}
	inline jint GnssAutomaticGainControl::getConstellationType() const
	{
		return callMethod<jint>(
			"getConstellationType",
			"()I"
		);
	}
	inline jdouble GnssAutomaticGainControl::getLevelDb() const
	{
		return callMethod<jdouble>(
			"getLevelDb",
			"()D"
		);
	}
	inline jint GnssAutomaticGainControl::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString GnssAutomaticGainControl::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssAutomaticGainControl::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
