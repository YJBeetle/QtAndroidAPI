#pragma once

#include "./InstantRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
namespace android::health::connect::datatypes::units
{
	class Pressure;
}
class JObject;

namespace android::health::connect::datatypes
{
	class BloodPressureRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType DIASTOLIC_AVG();
		static android::health::connect::datatypes::AggregationType DIASTOLIC_MAX();
		static android::health::connect::datatypes::AggregationType DIASTOLIC_MIN();
		static android::health::connect::datatypes::AggregationType SYSTOLIC_AVG();
		static android::health::connect::datatypes::AggregationType SYSTOLIC_MAX();
		static android::health::connect::datatypes::AggregationType SYSTOLIC_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit BloodPressureRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		BloodPressureRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getBodyPosition() const;
		android::health::connect::datatypes::units::Pressure getDiastolic() const;
		jint getMeasurementLocation() const;
		android::health::connect::datatypes::units::Pressure getSystolic() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

