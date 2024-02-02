#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Temperature.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::Temperature Temperature::fromCelsius(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.Temperature",
			"fromCelsius",
			"(D)Landroid/health/connect/datatypes/units/Temperature;",
			arg0
		);
	}
	inline jint Temperature::compareTo(android::health::connect::datatypes::units::Temperature arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/Temperature;)I",
			arg0.object()
		);
	}
	inline jint Temperature::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Temperature::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble Temperature::getInCelsius() const
	{
		return callMethod<jdouble>(
			"getInCelsius",
			"()D"
		);
	}
	inline jint Temperature::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Temperature::toString() const
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
