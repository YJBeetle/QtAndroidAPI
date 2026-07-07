#pragma once

#include "./InstantRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
namespace android::health::connect::datatypes::units
{
	class Mass;
}
class JObject;

namespace android::health::connect::datatypes
{
	class WeightRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType WEIGHT_AVG();
		static android::health::connect::datatypes::AggregationType WEIGHT_MAX();
		static android::health::connect::datatypes::AggregationType WEIGHT_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit WeightRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		WeightRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Mass getWeight() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

