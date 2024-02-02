#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class SleepSessionRecord;
}
class JString;
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
	class SleepSessionRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SleepSessionRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SleepSessionRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SleepSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2);
		
		// Methods
		android::health::connect::datatypes::SleepSessionRecord build() const;
		android::health::connect::datatypes::SleepSessionRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::SleepSessionRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::SleepSessionRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::SleepSessionRecord_Builder setNotes(JString arg0) const;
		android::health::connect::datatypes::SleepSessionRecord_Builder setStages(JObject arg0) const;
		android::health::connect::datatypes::SleepSessionRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::SleepSessionRecord_Builder setTitle(JString arg0) const;
	};
} // namespace android::health::connect::datatypes

