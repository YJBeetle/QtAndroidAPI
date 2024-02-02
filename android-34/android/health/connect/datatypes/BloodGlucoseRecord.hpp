#pragma once

#include "./units/BloodGlucose.def.hpp"
#include "../../../../JObject.hpp"
#include "./BloodGlucoseRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean BloodGlucoseRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::BloodGlucose BloodGlucoseRecord::getLevel() const
	{
		return callObjectMethod(
			"getLevel",
			"()Landroid/health/connect/datatypes/units/BloodGlucose;"
		);
	}
	inline jint BloodGlucoseRecord::getMealType() const
	{
		return callMethod<jint>(
			"getMealType",
			"()I"
		);
	}
	inline jint BloodGlucoseRecord::getRelationToMeal() const
	{
		return callMethod<jint>(
			"getRelationToMeal",
			"()I"
		);
	}
	inline jint BloodGlucoseRecord::getSpecimenSource() const
	{
		return callMethod<jint>(
			"getSpecimenSource",
			"()I"
		);
	}
	inline jint BloodGlucoseRecord::hashCode() const
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
