#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
namespace android::health::connect::datatypes
{
	class ExerciseRoute;
}
class JString;
class JObject;

namespace android::health::connect::datatypes
{
	class ExerciseSessionRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType EXERCISE_DURATION_TOTAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseSessionRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseSessionRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getExerciseType() const;
		JObject getLaps() const;
		JString getNotes() const;
		android::health::connect::datatypes::ExerciseRoute getRoute() const;
		JObject getSegments() const;
		JString getTitle() const;
		jboolean hasRoute() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

