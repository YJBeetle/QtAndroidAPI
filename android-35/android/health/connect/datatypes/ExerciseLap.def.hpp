#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes::units
{
	class Length;
}
class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class ExerciseLap : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseLap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseLap(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Instant getEndTime() const;
		android::health::connect::datatypes::units::Length getLength() const;
		java::time::Instant getStartTime() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

