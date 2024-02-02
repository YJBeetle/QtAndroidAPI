#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Power.def.hpp"
#include "../../../../JObject.hpp"
#include "./BasalMetabolicRateRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType BasalMetabolicRateRecord::BASAL_CALORIES_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.BasalMetabolicRateRecord",
			"BASAL_CALORIES_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean BasalMetabolicRateRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Power BasalMetabolicRateRecord::getBasalMetabolicRate() const
	{
		return callObjectMethod(
			"getBasalMetabolicRate",
			"()Landroid/health/connect/datatypes/units/Power;"
		);
	}
	inline jint BasalMetabolicRateRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./InstantRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
