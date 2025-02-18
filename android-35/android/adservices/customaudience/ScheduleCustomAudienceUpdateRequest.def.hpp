#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JObject;
class JString;
namespace java::time
{
	class Duration;
}

namespace android::adservices::customaudience
{
	class ScheduleCustomAudienceUpdateRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScheduleCustomAudienceUpdateRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScheduleCustomAudienceUpdateRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Duration getMinDelay() const;
		JObject getPartialCustomAudienceList() const;
		android::net::Uri getUpdateUri() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::adservices::customaudience

