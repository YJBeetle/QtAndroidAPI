#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class TimeInstantRangeFilter;
}
namespace java::time
{
	class Instant;
}

namespace android::health::connect
{
	class TimeInstantRangeFilter_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeInstantRangeFilter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimeInstantRangeFilter_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TimeInstantRangeFilter_Builder();
		
		// Methods
		android::health::connect::TimeInstantRangeFilter build() const;
		android::health::connect::TimeInstantRangeFilter_Builder setEndTime(java::time::Instant arg0) const;
		android::health::connect::TimeInstantRangeFilter_Builder setStartTime(java::time::Instant arg0) const;
	};
} // namespace android::health::connect

