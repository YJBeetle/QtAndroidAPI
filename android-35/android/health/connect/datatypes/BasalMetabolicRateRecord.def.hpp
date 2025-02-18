#pragma once

#include "./InstantRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
namespace android::health::connect::datatypes::units
{
	class Power;
}
class JObject;

namespace android::health::connect::datatypes
{
	class BasalMetabolicRateRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType BASAL_CALORIES_TOTAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit BasalMetabolicRateRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		BasalMetabolicRateRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Power getBasalMetabolicRate() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

