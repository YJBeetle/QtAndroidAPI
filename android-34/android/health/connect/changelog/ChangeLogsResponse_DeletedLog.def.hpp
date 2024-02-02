#pragma once

#include "../../../../JObject.hpp"

class JString;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::changelog
{
	class ChangeLogsResponse_DeletedLog : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChangeLogsResponse_DeletedLog(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChangeLogsResponse_DeletedLog(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ChangeLogsResponse_DeletedLog(JString arg0, jlong arg1);
		
		// Methods
		JString getDeletedRecordId() const;
		java::time::Instant getDeletedTime() const;
	};
} // namespace android::health::connect::changelog

