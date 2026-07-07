#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BodyTemperatureMeasurementLocation : public JObject
	{
	public:
		// Fields
		static jint MEASUREMENT_LOCATION_ARMPIT();
		static jint MEASUREMENT_LOCATION_EAR();
		static jint MEASUREMENT_LOCATION_FINGER();
		static jint MEASUREMENT_LOCATION_FOREHEAD();
		static jint MEASUREMENT_LOCATION_MOUTH();
		static jint MEASUREMENT_LOCATION_RECTUM();
		static jint MEASUREMENT_LOCATION_TEMPORAL_ARTERY();
		static jint MEASUREMENT_LOCATION_TOE();
		static jint MEASUREMENT_LOCATION_UNKNOWN();
		static jint MEASUREMENT_LOCATION_VAGINA();
		static jint MEASUREMENT_LOCATION_WRIST();
		
		// QJniObject forward
		template<typename ...Ts> explicit BodyTemperatureMeasurementLocation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BodyTemperatureMeasurementLocation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

