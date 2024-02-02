#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class ReadRecordsResponse : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadRecordsResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReadRecordsResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong getNextPageToken() const;
		JObject getRecords() const;
	};
} // namespace android::health::connect

