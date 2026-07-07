#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Temperature.def.hpp"
#include "../../../../JObject.hpp"
#include "./SkinTemperatureRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint SkinTemperatureRecord::MEASUREMENT_LOCATION_FINGER()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SkinTemperatureRecord",
			"MEASUREMENT_LOCATION_FINGER"
		);
	}
	inline jint SkinTemperatureRecord::MEASUREMENT_LOCATION_TOE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SkinTemperatureRecord",
			"MEASUREMENT_LOCATION_TOE"
		);
	}
	inline jint SkinTemperatureRecord::MEASUREMENT_LOCATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SkinTemperatureRecord",
			"MEASUREMENT_LOCATION_UNKNOWN"
		);
	}
	inline jint SkinTemperatureRecord::MEASUREMENT_LOCATION_WRIST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SkinTemperatureRecord",
			"MEASUREMENT_LOCATION_WRIST"
		);
	}
	inline android::health::connect::datatypes::AggregationType SkinTemperatureRecord::SKIN_TEMPERATURE_DELTA_AVG()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.SkinTemperatureRecord",
			"SKIN_TEMPERATURE_DELTA_AVG",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType SkinTemperatureRecord::SKIN_TEMPERATURE_DELTA_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.SkinTemperatureRecord",
			"SKIN_TEMPERATURE_DELTA_MAX",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType SkinTemperatureRecord::SKIN_TEMPERATURE_DELTA_MIN()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.SkinTemperatureRecord",
			"SKIN_TEMPERATURE_DELTA_MIN",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean SkinTemperatureRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Temperature SkinTemperatureRecord::getBaseline() const
	{
		return callObjectMethod(
			"getBaseline",
			"()Landroid/health/connect/datatypes/units/Temperature;"
		);
	}
	inline JObject SkinTemperatureRecord::getDeltas() const
	{
		return callObjectMethod(
			"getDeltas",
			"()Ljava/util/List;"
		);
	}
	inline jint SkinTemperatureRecord::getMeasurementLocation() const
	{
		return callMethod<jint>(
			"getMeasurementLocation",
			"()I"
		);
	}
	inline jint SkinTemperatureRecord::hashCode() const
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
