#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "./ExerciseRoute.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline JObject ExerciseRoute::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ExerciseRoute",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ExerciseRoute::ExerciseRoute(JObject arg0)
		: JObject(
			"android.health.connect.datatypes.ExerciseRoute",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ExerciseRoute::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ExerciseRoute::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ExerciseRoute::getRouteLocations() const
	{
		return callObjectMethod(
			"getRouteLocations",
			"()Ljava/util/List;"
		);
	}
	inline jint ExerciseRoute::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ExerciseRoute::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
