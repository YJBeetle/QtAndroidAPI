#pragma once

#include "./units/TemperatureDelta.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./SkinTemperatureRecord_Delta.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline SkinTemperatureRecord_Delta::SkinTemperatureRecord_Delta(android::health::connect::datatypes::units::TemperatureDelta arg0, java::time::Instant arg1)
		: JObject(
			"android.health.connect.datatypes.SkinTemperatureRecord$Delta",
			"(Landroid/health/connect/datatypes/units/TemperatureDelta;Ljava/time/Instant;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean SkinTemperatureRecord_Delta::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::TemperatureDelta SkinTemperatureRecord_Delta::getDelta() const
	{
		return callObjectMethod(
			"getDelta",
			"()Landroid/health/connect/datatypes/units/TemperatureDelta;"
		);
	}
	inline java::time::Instant SkinTemperatureRecord_Delta::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint SkinTemperatureRecord_Delta::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
