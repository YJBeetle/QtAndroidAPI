#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GnssMeasurementRequest.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssMeasurementRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssMeasurementRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssMeasurementRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean GnssMeasurementRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint GnssMeasurementRequest::getIntervalMillis() const
	{
		return callMethod<jint>(
			"getIntervalMillis",
			"()I"
		);
	}
	inline jint GnssMeasurementRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean GnssMeasurementRequest::isFullTracking() const
	{
		return callMethod<jboolean>(
			"isFullTracking",
			"()Z"
		);
	}
	inline JString GnssMeasurementRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssMeasurementRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
