#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes::units
{
	class Velocity;
}
class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class SpeedRecord_SpeedRecordSample : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SpeedRecord_SpeedRecordSample(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpeedRecord_SpeedRecordSample(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SpeedRecord_SpeedRecordSample(android::health::connect::datatypes::units::Velocity arg0, java::time::Instant arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Velocity getSpeed() const;
		java::time::Instant getTime() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

