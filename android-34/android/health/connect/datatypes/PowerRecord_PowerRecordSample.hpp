#pragma once

#include "./units/Power.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./PowerRecord_PowerRecordSample.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline PowerRecord_PowerRecordSample::PowerRecord_PowerRecordSample(android::health::connect::datatypes::units::Power arg0, java::time::Instant arg1)
		: JObject(
			"android.health.connect.datatypes.PowerRecord$PowerRecordSample",
			"(Landroid/health/connect/datatypes/units/Power;Ljava/time/Instant;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean PowerRecord_PowerRecordSample::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Power PowerRecord_PowerRecordSample::getPower() const
	{
		return callObjectMethod(
			"getPower",
			"()Landroid/health/connect/datatypes/units/Power;"
		);
	}
	inline java::time::Instant PowerRecord_PowerRecordSample::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint PowerRecord_PowerRecordSample::hashCode() const
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
