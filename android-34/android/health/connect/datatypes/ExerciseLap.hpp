#pragma once

#include "./units/Length.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./ExerciseLap.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ExerciseLap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Instant ExerciseLap::getEndTime() const
	{
		return callObjectMethod(
			"getEndTime",
			"()Ljava/time/Instant;"
		);
	}
	inline android::health::connect::datatypes::units::Length ExerciseLap::getLength() const
	{
		return callObjectMethod(
			"getLength",
			"()Landroid/health/connect/datatypes/units/Length;"
		);
	}
	inline java::time::Instant ExerciseLap::getStartTime() const
	{
		return callObjectMethod(
			"getStartTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint ExerciseLap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
