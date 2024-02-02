#pragma once

#include "./BodyTemperatureMeasurementLocation.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_ARMPIT()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_ARMPIT"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_EAR()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_EAR"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_FINGER()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_FINGER"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_FOREHEAD()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_FOREHEAD"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_MOUTH()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_MOUTH"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_RECTUM()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_RECTUM"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_TEMPORAL_ARTERY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_TEMPORAL_ARTERY"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_TOE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_TOE"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_UNKNOWN"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_VAGINA()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_VAGINA"
		);
	}
	inline jint BodyTemperatureMeasurementLocation::MEASUREMENT_LOCATION_WRIST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BodyTemperatureMeasurementLocation",
			"MEASUREMENT_LOCATION_WRIST"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
