#pragma once

#include "./units/Velocity.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./SpeedRecord_SpeedRecordSample.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline SpeedRecord_SpeedRecordSample::SpeedRecord_SpeedRecordSample(android::health::connect::datatypes::units::Velocity arg0, java::time::Instant arg1)
		: JObject(
			"android.health.connect.datatypes.SpeedRecord$SpeedRecordSample",
			"(Landroid/health/connect/datatypes/units/Velocity;Ljava/time/Instant;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean SpeedRecord_SpeedRecordSample::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Velocity SpeedRecord_SpeedRecordSample::getSpeed() const
	{
		return callObjectMethod(
			"getSpeed",
			"()Landroid/health/connect/datatypes/units/Velocity;"
		);
	}
	inline java::time::Instant SpeedRecord_SpeedRecordSample::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint SpeedRecord_SpeedRecordSample::hashCode() const
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
