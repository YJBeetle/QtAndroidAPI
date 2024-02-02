#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Vo2MaxRecord_Vo2MaxMeasurementMethod : public JObject
	{
	public:
		// Fields
		static jint MEASUREMENT_METHOD_COOPER_TEST();
		static jint MEASUREMENT_METHOD_HEART_RATE_RATIO();
		static jint MEASUREMENT_METHOD_METABOLIC_CART();
		static jint MEASUREMENT_METHOD_MULTISTAGE_FITNESS_TEST();
		static jint MEASUREMENT_METHOD_OTHER();
		static jint MEASUREMENT_METHOD_ROCKPORT_FITNESS_TEST();
		
		// QJniObject forward
		template<typename ...Ts> explicit Vo2MaxRecord_Vo2MaxMeasurementMethod(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Vo2MaxRecord_Vo2MaxMeasurementMethod(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

