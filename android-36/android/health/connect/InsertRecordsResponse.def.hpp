#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class InsertRecordsResponse : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InsertRecordsResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InsertRecordsResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getRecords() const;
	};
} // namespace android::health::connect

