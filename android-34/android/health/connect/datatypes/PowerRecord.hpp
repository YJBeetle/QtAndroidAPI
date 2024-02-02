#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JObject.hpp"
#include "./PowerRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType PowerRecord::POWER_AVG()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.PowerRecord",
			"POWER_AVG",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType PowerRecord::POWER_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.PowerRecord",
			"POWER_MAX",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType PowerRecord::POWER_MIN()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.PowerRecord",
			"POWER_MIN",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean PowerRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject PowerRecord::getSamples() const
	{
		return callObjectMethod(
			"getSamples",
			"()Ljava/util/List;"
		);
	}
	inline jint PowerRecord::hashCode() const
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
