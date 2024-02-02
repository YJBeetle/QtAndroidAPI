#pragma once

#include "./ReadRecordsRequest.def.hpp"

namespace android::health::connect
{
	class ReadRecordsRequestUsingFilters : public android::health::connect::ReadRecordsRequest
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadRecordsRequestUsingFilters(const char *className, const char *sig, Ts...agv) : android::health::connect::ReadRecordsRequest(className, sig, std::forward<Ts>(agv)...) {}
		ReadRecordsRequestUsingFilters(QJniObject obj) : android::health::connect::ReadRecordsRequest(obj) {}
		
		// Constructors
		
		// Methods
		JObject getDataOrigins() const;
		jint getPageSize() const;
		jlong getPageToken() const;
		JObject getTimeRangeFilter() const;
		jboolean isAscending() const;
	};
} // namespace android::health::connect

