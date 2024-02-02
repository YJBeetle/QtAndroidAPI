#pragma once

#include "./InstantRecord.def.hpp"

namespace android::health::connect::datatypes::units
{
	class Percentage;
}
class JObject;

namespace android::health::connect::datatypes
{
	class OxygenSaturationRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OxygenSaturationRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		OxygenSaturationRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Percentage getPercentage() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

