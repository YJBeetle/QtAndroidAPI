#pragma once

#include "../../../../JString.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./ChangeLogsResponse_DeletedLog.def.hpp"

namespace android::health::connect::changelog
{
	// Fields
	
	// Constructors
	inline ChangeLogsResponse_DeletedLog::ChangeLogsResponse_DeletedLog(JString arg0, jlong arg1)
		: JObject(
			"android.health.connect.changelog.ChangeLogsResponse$DeletedLog",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline JString ChangeLogsResponse_DeletedLog::getDeletedRecordId() const
	{
		return callObjectMethod(
			"getDeletedRecordId",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::Instant ChangeLogsResponse_DeletedLog::getDeletedTime() const
	{
		return callObjectMethod(
			"getDeletedTime",
			"()Ljava/time/Instant;"
		);
	}
} // namespace android::health::connect::changelog

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::changelog;
#endif
