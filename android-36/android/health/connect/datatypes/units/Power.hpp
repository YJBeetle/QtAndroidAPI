#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Power.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::Power Power::fromWatts(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.Power",
			"fromWatts",
			"(D)Landroid/health/connect/datatypes/units/Power;",
			arg0
		);
	}
	inline jint Power::compareTo(android::health::connect::datatypes::units::Power arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/Power;)I",
			arg0.object()
		);
	}
	inline jint Power::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Power::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble Power::getInWatts() const
	{
		return callMethod<jdouble>(
			"getInWatts",
			"()D"
		);
	}
	inline jint Power::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Power::toString() const
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
