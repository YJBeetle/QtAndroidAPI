#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JObject.hpp"
#include "./WheelchairPushesRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType WheelchairPushesRecord::WHEEL_CHAIR_PUSHES_COUNT_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.WheelchairPushesRecord",
			"WHEEL_CHAIR_PUSHES_COUNT_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean WheelchairPushesRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong WheelchairPushesRecord::getCount() const
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	inline jint WheelchairPushesRecord::hashCode() const
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
