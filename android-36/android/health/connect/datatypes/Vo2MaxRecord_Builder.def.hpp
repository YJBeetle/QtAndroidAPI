#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class Vo2MaxRecord;
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
	class Vo2MaxRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Vo2MaxRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Vo2MaxRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Vo2MaxRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, jdouble arg3);
		
		// Methods
		android::health::connect::datatypes::Vo2MaxRecord build() const;
		android::health::connect::datatypes::Vo2MaxRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::Vo2MaxRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

