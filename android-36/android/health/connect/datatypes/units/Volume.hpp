#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Volume.def.hpp"

namespace android::health::connect::datatypes::units
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::units::Volume Volume::fromLiters(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.units.Volume",
			"fromLiters",
			"(D)Landroid/health/connect/datatypes/units/Volume;",
			arg0
		);
	}
	inline jint Volume::compareTo(android::health::connect::datatypes::units::Volume arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/health/connect/datatypes/units/Volume;)I",
			arg0.object()
		);
	}
	inline jint Volume::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Volume::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble Volume::getInLiters() const
	{
		return callMethod<jdouble>(
			"getInLiters",
			"()D"
		);
	}
	inline jint Volume::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Volume::toString() const
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
