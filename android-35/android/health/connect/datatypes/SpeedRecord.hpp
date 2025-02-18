#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JObject.hpp"
#include "./SpeedRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType SpeedRecord::SPEED_AVG()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.SpeedRecord",
			"SPEED_AVG",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType SpeedRecord::SPEED_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.SpeedRecord",
			"SPEED_MAX",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType SpeedRecord::SPEED_MIN()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.SpeedRecord",
			"SPEED_MIN",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean SpeedRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject SpeedRecord::getSamples() const
	{
		return callObjectMethod(
			"getSamples",
			"()Ljava/util/List;"
		);
	}
	inline jint SpeedRecord::hashCode() const
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
