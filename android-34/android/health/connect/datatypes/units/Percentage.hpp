#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Percentage.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::Percentage Percentage::fromValue(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.Percentage",
			"fromValue",
			"(D)Landroid/health/connect/datatypes/units/Percentage;",
			arg0
		);
	}
	inline jint Percentage::compareTo(android::health::connect::datatypes::units::Percentage arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/Percentage;)I",
			arg0.object()
		);
	}
	inline jint Percentage::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Percentage::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble Percentage::getValue() const
	{
		return callMethod<jdouble>(
			"getValue",
			"()D"
		);
	}
	inline jint Percentage::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Percentage::toString() const
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
