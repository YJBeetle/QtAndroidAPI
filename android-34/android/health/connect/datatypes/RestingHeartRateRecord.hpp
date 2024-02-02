#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JObject.hpp"
#include "./RestingHeartRateRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType RestingHeartRateRecord::BPM_AVG()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.RestingHeartRateRecord",
			"BPM_AVG",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType RestingHeartRateRecord::BPM_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.RestingHeartRateRecord",
			"BPM_MAX",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType RestingHeartRateRecord::BPM_MIN()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.RestingHeartRateRecord",
			"BPM_MIN",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean RestingHeartRateRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong RestingHeartRateRecord::getBeatsPerMinute() const
	{
		return callMethod<jlong>(
			"getBeatsPerMinute",
			"()J"
		);
	}
	inline jint RestingHeartRateRecord::hashCode() const
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
