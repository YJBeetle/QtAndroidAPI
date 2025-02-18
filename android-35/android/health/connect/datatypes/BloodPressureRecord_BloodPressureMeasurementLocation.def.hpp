#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BloodPressureRecord_BloodPressureMeasurementLocation : public JObject
	{
	public:
		// Fields
		static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_UPPER_ARM();
		static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_WRIST();
		static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_UPPER_ARM();
		static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_WRIST();
		static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit BloodPressureRecord_BloodPressureMeasurementLocation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BloodPressureRecord_BloodPressureMeasurementLocation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

