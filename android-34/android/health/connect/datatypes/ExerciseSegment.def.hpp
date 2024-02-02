#pragma once

#include "../../../../JObject.hpp"

class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class ExerciseSegment : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseSegment(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseSegment(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Instant getEndTime() const;
		jint getRepetitionsCount() const;
		jint getSegmentType() const;
		java::time::Instant getStartTime() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

