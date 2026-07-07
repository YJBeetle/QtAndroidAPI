#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Pressure.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::Pressure Pressure::fromMillimetersOfMercury(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.Pressure",
			"fromMillimetersOfMercury",
			"(D)Landroid/health/connect/datatypes/units/Pressure;",
			arg0
		);
	}
	inline jint Pressure::compareTo(android::health::connect::datatypes::units::Pressure arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/Pressure;)I",
			arg0.object()
		);
	}
	inline jint Pressure::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Pressure::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble Pressure::getInMillimetersOfMercury() const
	{
		return callMethod<jdouble>(
			"getInMillimetersOfMercury",
			"()D"
		);
	}
	inline jint Pressure::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Pressure::toString() const
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
