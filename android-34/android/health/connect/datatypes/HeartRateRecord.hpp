#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JObject.hpp"
#include "./HeartRateRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType HeartRateRecord::BPM_AVG()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.HeartRateRecord",
			"BPM_AVG",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType HeartRateRecord::BPM_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.HeartRateRecord",
			"BPM_MAX",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType HeartRateRecord::BPM_MIN()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.HeartRateRecord",
			"BPM_MIN",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType HeartRateRecord::HEART_MEASUREMENTS_COUNT()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.HeartRateRecord",
			"HEART_MEASUREMENTS_COUNT",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean HeartRateRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject HeartRateRecord::getSamples() const
	{
		return callObjectMethod(
			"getSamples",
			"()Ljava/util/List;"
		);
	}
	inline jint HeartRateRecord::hashCode() const
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
