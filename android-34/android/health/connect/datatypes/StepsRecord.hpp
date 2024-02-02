#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JObject.hpp"
#include "./StepsRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType StepsRecord::STEPS_COUNT_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.StepsRecord",
			"STEPS_COUNT_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean StepsRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong StepsRecord::getCount() const
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	inline jint StepsRecord::hashCode() const
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
