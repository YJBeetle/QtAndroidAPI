#pragma once

#include "./ExerciseLap.def.hpp"
#include "./units/Length.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./ExerciseLap_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseLap_Builder::ExerciseLap_Builder(java::time::Instant arg0, java::time::Instant arg1)
		: JObject(
			"android.health.connect.datatypes.ExerciseLap$Builder",
			"(Ljava/time/Instant;Ljava/time/Instant;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::ExerciseLap ExerciseLap_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/ExerciseLap;"
		);
	}
	inline android::health::connect::datatypes::ExerciseLap_Builder ExerciseLap_Builder::setLength(android::health::connect::datatypes::units::Length arg0) const
	{
		return callObjectMethod(
			"setLength",
			"(Landroid/health/connect/datatypes/units/Length;)Landroid/health/connect/datatypes/ExerciseLap$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
