#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class MindfulnessSessionRecord;
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
	class MindfulnessSessionRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MindfulnessSessionRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MindfulnessSessionRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MindfulnessSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jint arg3);
		
		// Methods
		android::health::connect::datatypes::MindfulnessSessionRecord build() const;
		android::health::connect::datatypes::MindfulnessSessionRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::MindfulnessSessionRecord_Builder setNotes(JString arg0) const;
		android::health::connect::datatypes::MindfulnessSessionRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::MindfulnessSessionRecord_Builder setTitle(JString arg0) const;
	};
} // namespace android::health::connect::datatypes

