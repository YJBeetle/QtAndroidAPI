#pragma once

#include "../../../JObject.hpp"

namespace java::time
{
	class Instant;
}

namespace android::adservices::ondevicepersonalization
{
	class LogReader : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LogReader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogReader(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getJoinedEvents(java::time::Instant arg0, java::time::Instant arg1) const;
		JObject getRequests(java::time::Instant arg0, java::time::Instant arg1) const;
	};
} // namespace android::adservices::ondevicepersonalization

