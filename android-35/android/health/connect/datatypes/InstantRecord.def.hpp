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
	class InstantRecord : public android::health::connect::datatypes::Record
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InstantRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::Record(className, sig, std::forward<Ts>(agv)...) {}
		InstantRecord(QJniObject obj) : android::health::connect::datatypes::Record(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Instant getTime() const;
		java::time::ZoneOffset getZoneOffset() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

