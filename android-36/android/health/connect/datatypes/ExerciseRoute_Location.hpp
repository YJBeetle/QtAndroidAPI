#pragma once

#include "./units/Length.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./ExerciseRoute_Location.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline JObject ExerciseRoute_Location::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ExerciseRoute$Location",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ExerciseRoute_Location::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ExerciseRoute_Location::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Length ExerciseRoute_Location::getAltitude() const
	{
		return callObjectMethod(
			"getAltitude",
			"()Landroid/health/connect/datatypes/units/Length;"
		);
	}
	inline android::health::connect::datatypes::units::Length ExerciseRoute_Location::getHorizontalAccuracy() const
	{
		return callObjectMethod(
			"getHorizontalAccuracy",
			"()Landroid/health/connect/datatypes/units/Length;"
		);
	}
	inline jdouble ExerciseRoute_Location::getLatitude() const
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	inline jdouble ExerciseRoute_Location::getLongitude() const
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	inline java::time::Instant ExerciseRoute_Location::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline android::health::connect::datatypes::units::Length ExerciseRoute_Location::getVerticalAccuracy() const
	{
		return callObjectMethod(
			"getVerticalAccuracy",
			"()Landroid/health/connect/datatypes/units/Length;"
		);
	}
	inline jint ExerciseRoute_Location::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ExerciseRoute_Location::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
