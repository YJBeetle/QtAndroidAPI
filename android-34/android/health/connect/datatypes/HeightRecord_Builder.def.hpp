#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class HeightRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes::units
{
	class Length;
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
	class HeightRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HeightRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HeightRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		HeightRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, android::health::connect::datatypes::units::Length arg2);
		
		// Methods
		android::health::connect::datatypes::HeightRecord build() const;
		android::health::connect::datatypes::HeightRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::HeightRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

