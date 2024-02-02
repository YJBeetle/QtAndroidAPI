#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class OvulationTestRecord;
}
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
	class OvulationTestRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OvulationTestRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OvulationTestRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		OvulationTestRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2);
		
		// Methods
		android::health::connect::datatypes::OvulationTestRecord build() const;
		android::health::connect::datatypes::OvulationTestRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::OvulationTestRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

