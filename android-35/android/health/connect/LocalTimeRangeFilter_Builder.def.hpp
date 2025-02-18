#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class LocalTimeRangeFilter;
}
namespace java::time
{
	class LocalDateTime;
}

namespace android::health::connect
{
	class LocalTimeRangeFilter_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LocalTimeRangeFilter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocalTimeRangeFilter_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LocalTimeRangeFilter_Builder();
		
		// Methods
		android::health::connect::LocalTimeRangeFilter build() const;
		android::health::connect::LocalTimeRangeFilter_Builder setEndTime(java::time::LocalDateTime arg0) const;
		android::health::connect::LocalTimeRangeFilter_Builder setStartTime(java::time::LocalDateTime arg0) const;
	};
} // namespace android::health::connect

