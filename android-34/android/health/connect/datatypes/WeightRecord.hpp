#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Mass.def.hpp"
#include "../../../../JObject.hpp"
#include "./WeightRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType WeightRecord::WEIGHT_AVG()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.WeightRecord",
			"WEIGHT_AVG",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType WeightRecord::WEIGHT_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.WeightRecord",
			"WEIGHT_MAX",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType WeightRecord::WEIGHT_MIN()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.WeightRecord",
			"WEIGHT_MIN",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean WeightRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Mass WeightRecord::getWeight() const
	{
		return callObjectMethod(
			"getWeight",
			"()Landroid/health/connect/datatypes/units/Mass;"
		);
	}
	inline jint WeightRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./InstantRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
