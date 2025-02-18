#pragma once

#include "./ExerciseRoute_Location.def.hpp"
#include "./units/Length.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./ExerciseRoute_Location_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseRoute_Location_Builder::ExerciseRoute_Location_Builder(java::time::Instant arg0, jdouble arg1, jdouble arg2)
		: JObject(
			"android.health.connect.datatypes.ExerciseRoute$Location$Builder",
			"(Ljava/time/Instant;DD)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::health::connect::datatypes::ExerciseRoute_Location ExerciseRoute_Location_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/ExerciseRoute$Location;"
		);
	}
	inline android::health::connect::datatypes::ExerciseRoute_Location_Builder ExerciseRoute_Location_Builder::setAltitude(android::health::connect::datatypes::units::Length arg0) const
	{
		return callObjectMethod(
			"setAltitude",
			"(Landroid/health/connect/datatypes/units/Length;)Landroid/health/connect/datatypes/ExerciseRoute$Location$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::ExerciseRoute_Location_Builder ExerciseRoute_Location_Builder::setHorizontalAccuracy(android::health::connect::datatypes::units::Length arg0) const
	{
		return callObjectMethod(
			"setHorizontalAccuracy",
			"(Landroid/health/connect/datatypes/units/Length;)Landroid/health/connect/datatypes/ExerciseRoute$Location$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::ExerciseRoute_Location_Builder ExerciseRoute_Location_Builder::setVerticalAccuracy(android::health::connect::datatypes::units::Length arg0) const
	{
		return callObjectMethod(
			"setVerticalAccuracy",
			"(Landroid/health/connect/datatypes/units/Length;)Landroid/health/connect/datatypes/ExerciseRoute$Location$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
