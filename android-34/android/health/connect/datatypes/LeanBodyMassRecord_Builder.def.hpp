#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class LeanBodyMassRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes::units
{
	class Mass;
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
	class LeanBodyMassRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LeanBodyMassRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LeanBodyMassRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LeanBodyMassRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, android::health::connect::datatypes::units::Mass arg2);
		
		// Methods
		android::health::connect::datatypes::LeanBodyMassRecord build() const;
		android::health::connect::datatypes::LeanBodyMassRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::LeanBodyMassRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

