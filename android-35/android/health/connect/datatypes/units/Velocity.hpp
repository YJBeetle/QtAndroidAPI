#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Velocity.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::Velocity Velocity::fromMetersPerSecond(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.Velocity",
			"fromMetersPerSecond",
			"(D)Landroid/health/connect/datatypes/units/Velocity;",
			arg0
		);
	}
	inline jint Velocity::compareTo(android::health::connect::datatypes::units::Velocity arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/Velocity;)I",
			arg0.object()
		);
	}
	inline jint Velocity::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Velocity::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble Velocity::getInMetersPerSecond() const
	{
		return callMethod<jdouble>(
			"getInMetersPerSecond",
			"()D"
		);
	}
	inline jint Velocity::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Velocity::toString() const
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
