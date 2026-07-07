#pragma once

#include "./ScheduleCustomAudienceUpdateRequest.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./ScheduleCustomAudienceUpdateRequest_Builder.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline ScheduleCustomAudienceUpdateRequest_Builder::ScheduleCustomAudienceUpdateRequest_Builder(android::net::Uri arg0, java::time::Duration arg1)
		: JObject(
			"android.adservices.customaudience.ScheduleCustomAudienceUpdateRequest$Builder",
			"(Landroid/net/Uri;Ljava/time/Duration;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ScheduleCustomAudienceUpdateRequest_Builder::ScheduleCustomAudienceUpdateRequest_Builder(android::net::Uri arg0, java::time::Duration arg1, JObject arg2)
		: JObject(
			"android.adservices.customaudience.ScheduleCustomAudienceUpdateRequest$Builder",
			"(Landroid/net/Uri;Ljava/time/Duration;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest ScheduleCustomAudienceUpdateRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/customaudience/ScheduleCustomAudienceUpdateRequest;"
		);
	}
	inline android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest_Builder ScheduleCustomAudienceUpdateRequest_Builder::setMinDelay(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"setMinDelay",
			"(Ljava/time/Duration;)Landroid/adservices/customaudience/ScheduleCustomAudienceUpdateRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest_Builder ScheduleCustomAudienceUpdateRequest_Builder::setPartialCustomAudienceList(JObject arg0) const
	{
		return callObjectMethod(
			"setPartialCustomAudienceList",
			"(Ljava/util/List;)Landroid/adservices/customaudience/ScheduleCustomAudienceUpdateRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest_Builder ScheduleCustomAudienceUpdateRequest_Builder::setShouldReplacePendingUpdates(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldReplacePendingUpdates",
			"(Z)Landroid/adservices/customaudience/ScheduleCustomAudienceUpdateRequest$Builder;",
			arg0
		);
	}
	inline android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest_Builder ScheduleCustomAudienceUpdateRequest_Builder::setUpdateUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setUpdateUri",
			"(Landroid/net/Uri;)Landroid/adservices/customaudience/ScheduleCustomAudienceUpdateRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
