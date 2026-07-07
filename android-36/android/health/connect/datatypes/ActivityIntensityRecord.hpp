#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JObject.hpp"
#include "./ActivityIntensityRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint ActivityIntensityRecord::ACTIVITY_INTENSITY_TYPE_MODERATE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.ActivityIntensityRecord",
			"ACTIVITY_INTENSITY_TYPE_MODERATE"
		);
	}
	inline jint ActivityIntensityRecord::ACTIVITY_INTENSITY_TYPE_VIGOROUS()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.ActivityIntensityRecord",
			"ACTIVITY_INTENSITY_TYPE_VIGOROUS"
		);
	}
	inline android::health::connect::datatypes::AggregationType ActivityIntensityRecord::DURATION_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ActivityIntensityRecord",
			"DURATION_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType ActivityIntensityRecord::INTENSITY_MINUTES_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ActivityIntensityRecord",
			"INTENSITY_MINUTES_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType ActivityIntensityRecord::MODERATE_DURATION_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ActivityIntensityRecord",
			"MODERATE_DURATION_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType ActivityIntensityRecord::VIGOROUS_DURATION_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ActivityIntensityRecord",
			"VIGOROUS_DURATION_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean ActivityIntensityRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ActivityIntensityRecord::getActivityIntensityType() const
	{
		return callMethod<jint>(
			"getActivityIntensityType",
			"()I"
		);
	}
	inline jint ActivityIntensityRecord::hashCode() const
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
