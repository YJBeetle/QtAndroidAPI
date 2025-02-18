#pragma once

#include "./Record.def.hpp"

class JObject;
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
	class IntervalRecord : public android::health::connect::datatypes::Record
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntervalRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::Record(className, sig, std::forward<Ts>(agv)...) {}
		IntervalRecord(QJniObject obj) : android::health::connect::datatypes::Record(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Instant getEndTime() const;
		java::time::ZoneOffset getEndZoneOffset() const;
		java::time::Instant getStartTime() const;
		java::time::ZoneOffset getStartZoneOffset() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

