#pragma once

#include "./units/Velocity.def.hpp"
#include "../../../../JObject.hpp"
#include "./ExercisePerformanceGoal_SpeedGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExercisePerformanceGoal_SpeedGoal::ExercisePerformanceGoal_SpeedGoal(android::health::connect::datatypes::units::Velocity arg0, android::health::connect::datatypes::units::Velocity arg1)
		: android::health::connect::datatypes::ExercisePerformanceGoal(
			"android.health.connect.datatypes.ExercisePerformanceGoal$SpeedGoal",
			"(Landroid/health/connect/datatypes/units/Velocity;Landroid/health/connect/datatypes/units/Velocity;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean ExercisePerformanceGoal_SpeedGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Velocity ExercisePerformanceGoal_SpeedGoal::getMaxSpeed() const
	{
		return callObjectMethod(
			"getMaxSpeed",
			"()Landroid/health/connect/datatypes/units/Velocity;"
		);
	}
	inline android::health::connect::datatypes::units::Velocity ExercisePerformanceGoal_SpeedGoal::getMinSpeed() const
	{
		return callObjectMethod(
			"getMinSpeed",
			"()Landroid/health/connect/datatypes/units/Velocity;"
		);
	}
	inline jint ExercisePerformanceGoal_SpeedGoal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./ExercisePerformanceGoal.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
