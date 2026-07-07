#pragma once

#include "./IntervalRecord.def.hpp"

class JString;
class JObject;
class JString;
namespace java::time
{
	class Duration;
}
namespace java::time
{
	class LocalDate;
}

namespace android::health::connect::datatypes
{
	class PlannedExerciseSessionRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlannedExerciseSessionRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		PlannedExerciseSessionRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getBlocks() const;
		JString getCompletedExerciseSessionId() const;
		java::time::Duration getDuration() const;
		jint getExerciseType() const;
		JString getNotes() const;
		java::time::LocalDate getStartDate() const;
		JString getTitle() const;
		jboolean hasExplicitTime() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

