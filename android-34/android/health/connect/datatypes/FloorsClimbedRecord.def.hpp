#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;

namespace android::health::connect::datatypes
{
	class FloorsClimbedRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType FLOORS_CLIMBED_TOTAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit FloorsClimbedRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		FloorsClimbedRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jdouble getFloors() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

