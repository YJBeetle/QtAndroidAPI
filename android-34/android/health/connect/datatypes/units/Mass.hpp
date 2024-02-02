#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Mass.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::Mass Mass::fromGrams(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.Mass",
			"fromGrams",
			"(D)Landroid/health/connect/datatypes/units/Mass;",
			arg0
		);
	}
	inline jint Mass::compareTo(android::health::connect::datatypes::units::Mass arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/Mass;)I",
			arg0.object()
		);
	}
	inline jint Mass::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Mass::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble Mass::getInGrams() const
	{
		return callMethod<jdouble>(
			"getInGrams",
			"()D"
		);
	}
	inline jint Mass::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Mass::toString() const
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
