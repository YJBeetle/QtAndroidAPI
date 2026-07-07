#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::customaudience
{
	class ScheduleCustomAudienceUpdateRequest;
}
namespace android::net
{
	class Uri;
}
namespace java::time
{
	class Duration;
}

namespace android::adservices::customaudience
{
	class ScheduleCustomAudienceUpdateRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScheduleCustomAudienceUpdateRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScheduleCustomAudienceUpdateRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScheduleCustomAudienceUpdateRequest_Builder(android::net::Uri arg0, java::time::Duration arg1);
		ScheduleCustomAudienceUpdateRequest_Builder(android::net::Uri arg0, java::time::Duration arg1, JObject arg2);
		
		// Methods
		android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest build() const;
		android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest_Builder setMinDelay(java::time::Duration arg0) const;
		android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest_Builder setPartialCustomAudienceList(JObject arg0) const;
		android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest_Builder setShouldReplacePendingUpdates(jboolean arg0) const;
		android::adservices::customaudience::ScheduleCustomAudienceUpdateRequest_Builder setUpdateUri(android::net::Uri arg0) const;
	};
} // namespace android::adservices::customaudience

