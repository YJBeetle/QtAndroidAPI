#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class RequestLogRecord;
}
class JObject;

namespace android::adservices::ondevicepersonalization
{
	class WebTriggerOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebTriggerOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebTriggerOutput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getEventLogRecords() const;
		android::adservices::ondevicepersonalization::RequestLogRecord getRequestLogRecord() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

