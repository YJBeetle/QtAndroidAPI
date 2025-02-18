#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ExerciseRoute_Location;
}
namespace android::health::connect::datatypes::units
{
	class Length;
}
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class ExerciseRoute_Location_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseRoute_Location_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseRoute_Location_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExerciseRoute_Location_Builder(java::time::Instant arg0, jdouble arg1, jdouble arg2);
		
		// Methods
		android::health::connect::datatypes::ExerciseRoute_Location build() const;
		android::health::connect::datatypes::ExerciseRoute_Location_Builder setAltitude(android::health::connect::datatypes::units::Length arg0) const;
		android::health::connect::datatypes::ExerciseRoute_Location_Builder setHorizontalAccuracy(android::health::connect::datatypes::units::Length arg0) const;
		android::health::connect::datatypes::ExerciseRoute_Location_Builder setVerticalAccuracy(android::health::connect::datatypes::units::Length arg0) const;
	};
} // namespace android::health::connect::datatypes

