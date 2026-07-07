#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Length.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::Length Length::fromMeters(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.Length",
			"fromMeters",
			"(D)Landroid/health/connect/datatypes/units/Length;",
			arg0
		);
	}
	inline jint Length::compareTo(android::health::connect::datatypes::units::Length arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/Length;)I",
			arg0.object()
		);
	}
	inline jint Length::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Length::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble Length::getInMeters() const
	{
		return callMethod<jdouble>(
			"getInMeters",
			"()D"
		);
	}
	inline jint Length::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Length::toString() const
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
