#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;

namespace android::health::connect::datatypes
{
	class HeartRateRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType BPM_AVG();
		static android::health::connect::datatypes::AggregationType BPM_MAX();
		static android::health::connect::datatypes::AggregationType BPM_MIN();
		static android::health::connect::datatypes::AggregationType HEART_MEASUREMENTS_COUNT();
		
		// QJniObject forward
		template<typename ...Ts> explicit HeartRateRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		HeartRateRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getSamples() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

