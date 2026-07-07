#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;

namespace android::health::connect::datatypes
{
	class PowerRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType POWER_AVG();
		static android::health::connect::datatypes::AggregationType POWER_MAX();
		static android::health::connect::datatypes::AggregationType POWER_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit PowerRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		PowerRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getSamples() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

