#pragma once

#include "./units/Temperature.def.hpp"
#include "../../../../JObject.hpp"
#include "./BasalBodyTemperatureRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean BasalBodyTemperatureRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BasalBodyTemperatureRecord::getMeasurementLocation() const
	{
		return callMethod<jint>(
			"getMeasurementLocation",
			"()I"
		);
	}
	inline android::health::connect::datatypes::units::Temperature BasalBodyTemperatureRecord::getTemperature() const
	{
		return callObjectMethod(
			"getTemperature",
			"()Landroid/health/connect/datatypes/units/Temperature;"
		);
	}
	inline jint BasalBodyTemperatureRecord::hashCode() const
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
