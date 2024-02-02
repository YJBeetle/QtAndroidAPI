#pragma once

#include "./Vo2MaxRecord_Vo2MaxMeasurementMethod.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint Vo2MaxRecord_Vo2MaxMeasurementMethod::MEASUREMENT_METHOD_COOPER_TEST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Vo2MaxRecord$Vo2MaxMeasurementMethod",
			"MEASUREMENT_METHOD_COOPER_TEST"
		);
	}
	inline jint Vo2MaxRecord_Vo2MaxMeasurementMethod::MEASUREMENT_METHOD_HEART_RATE_RATIO()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Vo2MaxRecord$Vo2MaxMeasurementMethod",
			"MEASUREMENT_METHOD_HEART_RATE_RATIO"
		);
	}
	inline jint Vo2MaxRecord_Vo2MaxMeasurementMethod::MEASUREMENT_METHOD_METABOLIC_CART()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Vo2MaxRecord$Vo2MaxMeasurementMethod",
			"MEASUREMENT_METHOD_METABOLIC_CART"
		);
	}
	inline jint Vo2MaxRecord_Vo2MaxMeasurementMethod::MEASUREMENT_METHOD_MULTISTAGE_FITNESS_TEST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Vo2MaxRecord$Vo2MaxMeasurementMethod",
			"MEASUREMENT_METHOD_MULTISTAGE_FITNESS_TEST"
		);
	}
	inline jint Vo2MaxRecord_Vo2MaxMeasurementMethod::MEASUREMENT_METHOD_OTHER()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Vo2MaxRecord$Vo2MaxMeasurementMethod",
			"MEASUREMENT_METHOD_OTHER"
		);
	}
	inline jint Vo2MaxRecord_Vo2MaxMeasurementMethod::MEASUREMENT_METHOD_ROCKPORT_FITNESS_TEST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Vo2MaxRecord$Vo2MaxMeasurementMethod",
			"MEASUREMENT_METHOD_ROCKPORT_FITNESS_TEST"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
