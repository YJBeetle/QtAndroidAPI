#pragma once

#include "./units/Pressure.def.hpp"
#include "../../../../JObject.hpp"
#include "./BloodPressureRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
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
