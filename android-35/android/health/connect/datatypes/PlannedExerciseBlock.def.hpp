#pragma once

#include "../../../../JObject.hpp"

class JString;
class JObject;

namespace android::health::connect::datatypes
{
	class PlannedExerciseBlock : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlannedExerciseBlock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlannedExerciseBlock(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getDescription() const;
		jint getRepetitions() const;
		JObject getSteps() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

