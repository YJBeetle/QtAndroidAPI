#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class EventLogRecord;
}
class JObject;

namespace android::adservices::ondevicepersonalization
{
	class EventOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventOutput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::adservices::ondevicepersonalization::EventLogRecord getEventLogRecord() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

