#pragma once

#include "./ReadRecordsRequest.def.hpp"

namespace android::health::connect
{
	class ReadRecordsRequestUsingIds : public android::health::connect::ReadRecordsRequest
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadRecordsRequestUsingIds(const char *className, const char *sig, Ts...agv) : android::health::connect::ReadRecordsRequest(className, sig, std::forward<Ts>(agv)...) {}
		ReadRecordsRequestUsingIds(QJniObject obj) : android::health::connect::ReadRecordsRequest(obj) {}
		
		// Constructors
		
		// Methods
		JObject getRecordIdFilters() const;
	};
} // namespace android::health::connect

