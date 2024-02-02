#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ExerciseLap;
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
	class ExerciseLap_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseLap_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseLap_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExerciseLap_Builder(java::time::Instant arg0, java::time::Instant arg1);
		
		// Methods
		android::health::connect::datatypes::ExerciseLap build() const;
		android::health::connect::datatypes::ExerciseLap_Builder setLength(android::health::connect::datatypes::units::Length arg0) const;
	};
} // namespace android::health::connect::datatypes

