#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class CervicalMucusRecord;
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
	class CervicalMucusRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CervicalMucusRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CervicalMucusRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CervicalMucusRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, jint arg3);
		
		// Methods
		android::health::connect::datatypes::CervicalMucusRecord build() const;
		android::health::connect::datatypes::CervicalMucusRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::CervicalMucusRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

