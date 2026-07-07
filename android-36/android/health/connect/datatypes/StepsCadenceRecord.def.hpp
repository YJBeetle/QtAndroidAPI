#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;

namespace android::health::connect::datatypes
{
	class StepsCadenceRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType STEPS_CADENCE_RATE_AVG();
		static android::health::connect::datatypes::AggregationType STEPS_CADENCE_RATE_MAX();
		static android::health::connect::datatypes::AggregationType STEPS_CADENCE_RATE_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit StepsCadenceRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		StepsCadenceRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getSamples() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

