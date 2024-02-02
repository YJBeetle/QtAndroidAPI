#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
namespace android::health::connect::datatypes::units
{
	class Energy;
}
class JObject;

namespace android::health::connect::datatypes
{
	class ActiveCaloriesBurnedRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType ACTIVE_CALORIES_TOTAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActiveCaloriesBurnedRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		ActiveCaloriesBurnedRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Energy getEnergy() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

