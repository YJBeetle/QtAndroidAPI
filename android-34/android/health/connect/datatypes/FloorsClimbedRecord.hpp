#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JObject.hpp"
#include "./FloorsClimbedRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType FloorsClimbedRecord::FLOORS_CLIMBED_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.FloorsClimbedRecord",
			"FLOORS_CLIMBED_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean FloorsClimbedRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble FloorsClimbedRecord::getFloors() const
	{
		return callMethod<jdouble>(
			"getFloors",
			"()D"
		);
	}
	inline jint FloorsClimbedRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./IntervalRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
