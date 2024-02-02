#pragma once

#include "./BloodPressureRecord_BloodPressureMeasurementLocation.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint BloodPressureRecord_BloodPressureMeasurementLocation::BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_UPPER_ARM()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BloodPressureMeasurementLocation",
			"BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_UPPER_ARM"
		);
	}
	inline jint BloodPressureRecord_BloodPressureMeasurementLocation::BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_WRIST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BloodPressureMeasurementLocation",
			"BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_WRIST"
		);
	}
	inline jint BloodPressureRecord_BloodPressureMeasurementLocation::BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_UPPER_ARM()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BloodPressureMeasurementLocation",
			"BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_UPPER_ARM"
		);
	}
	inline jint BloodPressureRecord_BloodPressureMeasurementLocation::BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_WRIST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BloodPressureMeasurementLocation",
			"BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_WRIST"
		);
	}
	inline jint BloodPressureRecord_BloodPressureMeasurementLocation::BLOOD_PRESSURE_MEASUREMENT_LOCATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BloodPressureMeasurementLocation",
			"BLOOD_PRESSURE_MEASUREMENT_LOCATION_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
