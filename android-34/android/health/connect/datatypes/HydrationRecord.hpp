#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Volume.def.hpp"
#include "../../../../JObject.hpp"
#include "./HydrationRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType HydrationRecord::VOLUME_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.HydrationRecord",
			"VOLUME_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean HydrationRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Volume HydrationRecord::getVolume() const
	{
		return callObjectMethod(
			"getVolume",
			"()Landroid/health/connect/datatypes/units/Volume;"
		);
	}
	inline jint HydrationRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./IntervalRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
