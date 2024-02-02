#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class MenstruationFlowRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
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
	class MenstruationFlowRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MenstruationFlowRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MenstruationFlowRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MenstruationFlowRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2);
		
		// Methods
		android::health::connect::datatypes::MenstruationFlowRecord build() const;
		android::health::connect::datatypes::MenstruationFlowRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::MenstruationFlowRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

