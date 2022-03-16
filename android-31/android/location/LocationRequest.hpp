#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LocationRequest.def.hpp"

namespace android::location
{
	// Fields
	inline JObject LocationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.location.LocationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong LocationRequest::PASSIVE_INTERVAL()
	{
		return getStaticField<jlong>(
			"android.location.LocationRequest",
			"PASSIVE_INTERVAL"
		);
	}
	inline jint LocationRequest::QUALITY_BALANCED_POWER_ACCURACY()
	{
		return getStaticField<jint>(
			"android.location.LocationRequest",
			"QUALITY_BALANCED_POWER_ACCURACY"
		);
	}
	inline jint LocationRequest::QUALITY_HIGH_ACCURACY()
	{
		return getStaticField<jint>(
			"android.location.LocationRequest",
			"QUALITY_HIGH_ACCURACY"
		);
	}
	inline jint LocationRequest::QUALITY_LOW_POWER()
	{
		return getStaticField<jint>(
			"android.location.LocationRequest",
			"QUALITY_LOW_POWER"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint LocationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean LocationRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong LocationRequest::getDurationMillis() const
	{
		return callMethod<jlong>(
			"getDurationMillis",
			"()J"
		);
	}
	inline jlong LocationRequest::getIntervalMillis() const
	{
		return callMethod<jlong>(
			"getIntervalMillis",
			"()J"
		);
	}
	inline jlong LocationRequest::getMaxUpdateDelayMillis() const
	{
		return callMethod<jlong>(
			"getMaxUpdateDelayMillis",
			"()J"
		);
	}
	inline jint LocationRequest::getMaxUpdates() const
	{
		return callMethod<jint>(
			"getMaxUpdates",
			"()I"
		);
	}
	inline jfloat LocationRequest::getMinUpdateDistanceMeters() const
	{
		return callMethod<jfloat>(
			"getMinUpdateDistanceMeters",
			"()F"
		);
	}
	inline jlong LocationRequest::getMinUpdateIntervalMillis() const
	{
		return callMethod<jlong>(
			"getMinUpdateIntervalMillis",
			"()J"
		);
	}
	inline jint LocationRequest::getQuality() const
	{
		return callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	inline jint LocationRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString LocationRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void LocationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

