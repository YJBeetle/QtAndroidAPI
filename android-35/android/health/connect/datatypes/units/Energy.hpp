#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Energy.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::Energy Energy::fromCalories(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.Energy",
			"fromCalories",
			"(D)Landroid/health/connect/datatypes/units/Energy;",
			arg0
		);
	}
	inline jint Energy::compareTo(android::health::connect::datatypes::units::Energy arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/Energy;)I",
			arg0.object()
		);
	}
	inline jint Energy::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Energy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble Energy::getInCalories() const
	{
		return callMethod<jdouble>(
			"getInCalories",
			"()D"
		);
	}
	inline jint Energy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Energy::toString() const
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
