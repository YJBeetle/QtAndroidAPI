#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;

namespace android::health::connect::datatypes
{
	class WheelchairPushesRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType WHEEL_CHAIR_PUSHES_COUNT_TOTAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit WheelchairPushesRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		WheelchairPushesRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getCount() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

