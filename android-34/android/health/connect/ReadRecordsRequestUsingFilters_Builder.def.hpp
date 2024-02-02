#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class ReadRecordsRequestUsingFilters;
}
namespace android::health::connect::datatypes
{
	class DataOrigin;
}
class JClass;

namespace android::health::connect
{
	class ReadRecordsRequestUsingFilters_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadRecordsRequestUsingFilters_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReadRecordsRequestUsingFilters_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ReadRecordsRequestUsingFilters_Builder(JClass arg0);
		
		// Methods
		android::health::connect::ReadRecordsRequestUsingFilters_Builder addDataOrigins(android::health::connect::datatypes::DataOrigin arg0) const;
		android::health::connect::ReadRecordsRequestUsingFilters build() const;
		android::health::connect::ReadRecordsRequestUsingFilters_Builder setAscending(jboolean arg0) const;
		android::health::connect::ReadRecordsRequestUsingFilters_Builder setPageSize(jint arg0) const;
		android::health::connect::ReadRecordsRequestUsingFilters_Builder setPageToken(jlong arg0) const;
		android::health::connect::ReadRecordsRequestUsingFilters_Builder setTimeRangeFilter(JObject arg0) const;
	};
} // namespace android::health::connect

