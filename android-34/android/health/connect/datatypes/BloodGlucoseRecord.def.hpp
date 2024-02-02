#pragma once

#include "./InstantRecord.def.hpp"

namespace android::health::connect::datatypes::units
{
	class BloodGlucose;
}
class JObject;

namespace android::health::connect::datatypes
{
	class BloodGlucoseRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BloodGlucoseRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		BloodGlucoseRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::BloodGlucose getLevel() const;
		jint getMealType() const;
		jint getRelationToMeal() const;
		jint getSpecimenSource() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

