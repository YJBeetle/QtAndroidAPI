#pragma once

#include "./InstantRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;

namespace android::health::connect::datatypes
{
	class RestingHeartRateRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType BPM_AVG();
		static android::health::connect::datatypes::AggregationType BPM_MAX();
		static android::health::connect::datatypes::AggregationType BPM_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit RestingHeartRateRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		RestingHeartRateRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getBeatsPerMinute() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

