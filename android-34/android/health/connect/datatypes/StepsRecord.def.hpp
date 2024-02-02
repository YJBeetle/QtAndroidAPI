#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;

namespace android::health::connect::datatypes
{
	class StepsRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType STEPS_COUNT_TOTAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit StepsRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		StepsRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getCount() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

