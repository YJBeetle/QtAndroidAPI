#pragma once

#include "../../../java/time/Instant.def.hpp"
#include "./LogReader.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject LogReader::getJoinedEvents(java::time::Instant arg0, java::time::Instant arg1) const
	{
		return callObjectMethod(
			"getJoinedEvents",
			"(Ljava/time/Instant;Ljava/time/Instant;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject LogReader::getRequests(java::time::Instant arg0, java::time::Instant arg1) const
	{
		return callObjectMethod(
			"getRequests",
			"(Ljava/time/Instant;Ljava/time/Instant;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
