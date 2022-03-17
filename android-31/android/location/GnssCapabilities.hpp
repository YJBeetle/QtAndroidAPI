#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GnssCapabilities.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean GnssCapabilities::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean GnssCapabilities::hasAntennaInfo() const
	{
		return callMethod<jboolean>(
			"hasAntennaInfo",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasGnssAntennaInfo() const
	{
		return callMethod<jboolean>(
			"hasGnssAntennaInfo",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMeasurements() const
	{
		return callMethod<jboolean>(
			"hasMeasurements",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasNavigationMessages() const
	{
		return callMethod<jboolean>(
			"hasNavigationMessages",
			"()Z"
		);
	}
	inline jint GnssCapabilities::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString GnssCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
