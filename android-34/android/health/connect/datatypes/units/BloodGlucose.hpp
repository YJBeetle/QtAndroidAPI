#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./BloodGlucose.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::BloodGlucose BloodGlucose::fromMillimolesPerLiter(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.BloodGlucose",
			"fromMillimolesPerLiter",
			"(D)Landroid/health/connect/datatypes/units/BloodGlucose;",
			arg0
		);
	}
	inline jint BloodGlucose::compareTo(android::health::connect::datatypes::units::BloodGlucose arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/BloodGlucose;)I",
			arg0.object()
		);
	}
	inline jint BloodGlucose::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean BloodGlucose::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble BloodGlucose::getInMillimolesPerLiter() const
	{
		return callMethod<jdouble>(
			"getInMillimolesPerLiter",
			"()D"
		);
	}
	inline jint BloodGlucose::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString BloodGlucose::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::health::connect::datatypes::units

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes::units;
#endif
