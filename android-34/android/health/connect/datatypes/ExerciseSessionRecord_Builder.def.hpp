#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ExerciseRoute;
}
namespace android::health::connect::datatypes
{
	class ExerciseSessionRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
class JString;
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class ZoneOffset;
}

namespace android::health::connect::datatypes
{
	class ExerciseSessionRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseSessionRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseSessionRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExerciseSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jint arg3);
		
		// Methods
		android::health::connect::datatypes::ExerciseSessionRecord build() const;
		android::health::connect::datatypes::ExerciseSessionRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::ExerciseSessionRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::ExerciseSessionRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::ExerciseSessionRecord_Builder setLaps(JObject arg0) const;
		android::health::connect::datatypes::ExerciseSessionRecord_Builder setNotes(JString arg0) const;
		android::health::connect::datatypes::ExerciseSessionRecord_Builder setRoute(android::health::connect::datatypes::ExerciseRoute arg0) const;
		android::health::connect::datatypes::ExerciseSessionRecord_Builder setSegments(JObject arg0) const;
		android::health::connect::datatypes::ExerciseSessionRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::ExerciseSessionRecord_Builder setTitle(JString arg0) const;
	};
} // namespace android::health::connect::datatypes

