#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Pressure.def.hpp"
#include "../../../../JObject.hpp"
#include "./BloodPressureRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType BloodPressureRecord::DIASTOLIC_AVG()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.BloodPressureRecord",
			"DIASTOLIC_AVG",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType BloodPressureRecord::DIASTOLIC_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.BloodPressureRecord",
			"DIASTOLIC_MAX",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType BloodPressureRecord::DIASTOLIC_MIN()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.BloodPressureRecord",
			"DIASTOLIC_MIN",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType BloodPressureRecord::SYSTOLIC_AVG()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.BloodPressureRecord",
			"SYSTOLIC_AVG",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType BloodPressureRecord::SYSTOLIC_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.BloodPressureRecord",
			"SYSTOLIC_MAX",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType BloodPressureRecord::SYSTOLIC_MIN()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.BloodPressureRecord",
			"SYSTOLIC_MIN",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean BloodPressureRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BloodPressureRecord::getBodyPosition() const
	{
		return callMethod<jint>(
			"getBodyPosition",
			"()I"
		);
	}
	inline android::health::connect::datatypes::units::Pressure BloodPressureRecord::getDiastolic() const
	{
		return callObjectMethod(
			"getDiastolic",
			"()Landroid/health/connect/datatypes/units/Pressure;"
		);
	}
	inline jint BloodPressureRecord::getMeasurementLocation() const
	{
		return callMethod<jint>(
			"getMeasurementLocation",
			"()I"
		);
	}
	inline android::health::connect::datatypes::units::Pressure BloodPressureRecord::getSystolic() const
	{
		return callObjectMethod(
			"getSystolic",
			"()Landroid/health/connect/datatypes/units/Pressure;"
		);
	}
	inline jint BloodPressureRecord::hashCode() const
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
