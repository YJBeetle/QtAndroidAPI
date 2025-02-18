#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class PlannedExerciseBlock;
}
namespace android::health::connect::datatypes
{
	class PlannedExerciseSessionRecord;
}
class JString;
namespace java::time
{
	class Duration;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalDate;
}
namespace java::time
{
	class ZoneOffset;
}

namespace android::health::connect::datatypes
{
	class PlannedExerciseSessionRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlannedExerciseSessionRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlannedExerciseSessionRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PlannedExerciseSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, jint arg1, java::time::Instant arg2, java::time::Instant arg3);
		PlannedExerciseSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, jint arg1, java::time::LocalDate arg2, java::time::Duration arg3);
		
		// Methods
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder addBlock(android::health::connect::datatypes::PlannedExerciseBlock arg0) const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord build() const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder clearBlocks() const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder setBlocks(JObject arg0) const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder setEndTime(java::time::Instant arg0) const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder setExerciseType(jint arg0) const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder setMetadata(android::health::connect::datatypes::Metadata arg0) const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder setNotes(JString arg0) const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder setStartTime(java::time::Instant arg0) const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder setTitle(JString arg0) const;
	};
} // namespace android::health::connect::datatypes

