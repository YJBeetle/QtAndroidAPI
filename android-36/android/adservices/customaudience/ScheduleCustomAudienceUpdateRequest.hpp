#pragma once

#include "../../net/Uri.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./ScheduleCustomAudienceUpdateRequest.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ScheduleCustomAudienceUpdateRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Duration ScheduleCustomAudienceUpdateRequest::getMinDelay() const
	{
		return callObjectMethod(
			"getMinDelay",
			"()Ljava/time/Duration;"
		);
	}
	inline JObject ScheduleCustomAudienceUpdateRequest::getPartialCustomAudienceList() const
	{
		return callObjectMethod(
			"getPartialCustomAudienceList",
			"()Ljava/util/List;"
		);
	}
	inline android::net::Uri ScheduleCustomAudienceUpdateRequest::getUpdateUri() const
	{
		return callObjectMethod(
			"getUpdateUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint ScheduleCustomAudienceUpdateRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ScheduleCustomAudienceUpdateRequest::shouldReplacePendingUpdates() const
	{
		return callMethod<jboolean>(
			"shouldReplacePendingUpdates",
			"()Z"
		);
	}
	inline JString ScheduleCustomAudienceUpdateRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
