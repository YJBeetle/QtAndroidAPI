#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ExerciseSegment;
}
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class ExerciseSegment_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseSegment_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseSegment_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExerciseSegment_Builder(java::time::Instant arg0, java::time::Instant arg1, jint arg2);
		
		// Methods
		android::health::connect::datatypes::ExerciseSegment build() const;
		android::health::connect::datatypes::ExerciseSegment_Builder setRepetitionsCount(jint arg0) const;
	};
} // namespace android::health::connect::datatypes

