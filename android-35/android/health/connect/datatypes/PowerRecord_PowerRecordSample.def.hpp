#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes::units
{
	class Power;
}
class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class PowerRecord_PowerRecordSample : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PowerRecord_PowerRecordSample(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PowerRecord_PowerRecordSample(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PowerRecord_PowerRecordSample(android::health::connect::datatypes::units::Power arg0, java::time::Instant arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Power getPower() const;
		java::time::Instant getTime() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

