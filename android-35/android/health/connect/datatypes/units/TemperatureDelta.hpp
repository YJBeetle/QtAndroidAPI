#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./TemperatureDelta.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::TemperatureDelta TemperatureDelta::fromCelsius(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.TemperatureDelta",
			"fromCelsius",
			"(D)Landroid/health/connect/datatypes/units/TemperatureDelta;",
			arg0
		);
	}
	inline jint TemperatureDelta::compareTo(android::health::connect::datatypes::units::TemperatureDelta arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/TemperatureDelta;)I",
			arg0.object()
		);
	}
	inline jint TemperatureDelta::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean TemperatureDelta::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble TemperatureDelta::getInCelsius() const
	{
		return callMethod<jdouble>(
			"getInCelsius",
			"()D"
		);
	}
	inline jint TemperatureDelta::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TemperatureDelta::toString() const
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
